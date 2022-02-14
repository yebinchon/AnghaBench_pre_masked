
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ ssize_t ;
typedef int _bgzf_file_t ;
struct TYPE_4__ {char open_mode; int block_length; int block_offset; scalar_t__ fp; int block_address; int * uncompressed_block; } ;
typedef TYPE_1__ BGZF ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *,int) ;

ssize_t FUNC_4(BGZF *VAR_0, void *VAR_1, ssize_t VAR_2)
{
 ssize_t VAR_3 = 0;
 uint8_t *VAR_4 = VAR_1;
 if (VAR_2 <= 0) return 0;
 FUNC_1(VAR_0->open_mode == 'r');
 while (VAR_3 < VAR_2) {
  int VAR_5, VAR_6 = VAR_0->block_length - VAR_0->block_offset;
  uint8_t *VAR_7;
  if (VAR_6 <= 0) {
   if (FUNC_2(VAR_0) != 0) return -1;
   VAR_6 = VAR_0->block_length - VAR_0->block_offset;
   if (VAR_6 <= 0) break;
  }
  VAR_5 = VAR_2 - VAR_3 < VAR_6? VAR_2 - VAR_3 : VAR_6;
  VAR_7 = VAR_0->uncompressed_block;
  FUNC_3(VAR_4, VAR_7 + VAR_0->block_offset, VAR_5);
  VAR_0->block_offset += VAR_5;
  VAR_4 += VAR_5;
  VAR_3 += VAR_5;
 }
 if (VAR_0->block_offset == VAR_0->block_length) {
  VAR_0->block_address = FUNC_0((_bgzf_file_t)VAR_0->fp);
  VAR_0->block_offset = VAR_0->block_length = 0;
 }
 return VAR_3;
}
