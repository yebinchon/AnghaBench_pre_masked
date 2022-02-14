
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char open_mode; struct TYPE_8__* compressed_block; struct TYPE_8__* uncompressed_block; int fp; int errcode; } ;
typedef TYPE_1__ BGZF ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int,int,int ) ;

int FUNC_8(BGZF* VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 if (VAR_1 == 0) return -1;
 if (VAR_1->open_mode == 'w') {
  if (FUNC_1(VAR_1) != 0) return -1;
  VAR_4 = FUNC_2(VAR_1, 0);
  VAR_3 = FUNC_7(VAR_1->compressed_block, 1, VAR_4, VAR_1->fp);
  if (FUNC_4(VAR_1->fp) != 0) {
   VAR_1->errcode |= VAR_0;
   return -1;
  }
 }
 VAR_2 = VAR_1->open_mode == 'w'? FUNC_3(VAR_1->fp) : FUNC_0(VAR_1->fp);
 if (VAR_2 != 0) return -1;
 FUNC_5(VAR_1->uncompressed_block);
 FUNC_5(VAR_1->compressed_block);
 FUNC_6(VAR_1);
 FUNC_5(VAR_1);
 return 0;
}
