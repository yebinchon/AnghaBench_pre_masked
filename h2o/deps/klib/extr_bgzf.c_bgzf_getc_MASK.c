
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int _bgzf_file_t ;
struct TYPE_4__ {scalar_t__ block_offset; scalar_t__ block_length; scalar_t__ fp; int block_address; scalar_t__ uncompressed_block; } ;
typedef TYPE_1__ BGZF ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

int FUNC_2(BGZF *VAR_0)
{
 int VAR_1;
 if (VAR_0->block_offset >= VAR_0->block_length) {
  if (FUNC_1(VAR_0) != 0) return -2;
  if (VAR_0->block_length == 0) return -1;
 }
 VAR_1 = ((unsigned char*)VAR_0->uncompressed_block)[VAR_0->block_offset++];
    if (VAR_0->block_offset == VAR_0->block_length) {
        VAR_0->block_address = FUNC_0((_bgzf_file_t)VAR_0->fp);
        VAR_0->block_offset = 0;
        VAR_0->block_length = 0;
    }
 return VAR_1;
}
