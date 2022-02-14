
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char open_mode; scalar_t__ block_offset; int block_address; int errcode; int fp; int compressed_block; } ;
typedef TYPE_1__ BGZF ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int ,int,int,int ) ;

int FUNC_3(BGZF *VAR_1)
{
 FUNC_0(VAR_1->open_mode == 'w');
 while (VAR_1->block_offset > 0) {
  int VAR_2;
  VAR_2 = FUNC_1(VAR_1, VAR_1->block_offset);
  if (VAR_2 < 0) return -1;
  if (FUNC_2(VAR_1->compressed_block, 1, VAR_2, VAR_1->fp) != VAR_2) {
   VAR_1->errcode |= VAR_0;
   return -1;
  }
  VAR_1->block_address += VAR_2;
 }
 return 0;
}
