
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ssize_t ;
struct TYPE_4__ {char open_mode; int block_offset; int * uncompressed_block; } ;
typedef TYPE_1__ BGZF ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int const*,int) ;

ssize_t FUNC_3(BGZF *VAR_1, const void *VAR_2, ssize_t VAR_3)
{
 const uint8_t *VAR_4 = VAR_2;
 int VAR_5 = VAR_0, VAR_6;
 FUNC_0(VAR_1->open_mode == 'w');
 VAR_4 = VAR_2;
 VAR_6 = 0;
 while (VAR_6 < VAR_3) {
  uint8_t* VAR_7 = VAR_1->uncompressed_block;
  int VAR_8 = VAR_5 - VAR_1->block_offset < VAR_3 - VAR_6? VAR_5 - VAR_1->block_offset : VAR_3 - VAR_6;
  FUNC_2(VAR_7 + VAR_1->block_offset, VAR_4, VAR_8);
  VAR_1->block_offset += VAR_8;
  VAR_4 += VAR_8;
  VAR_6 += VAR_8;
  if (VAR_1->block_offset == VAR_5 && FUNC_1(VAR_1)) break;
 }
 return VAR_6;
}
