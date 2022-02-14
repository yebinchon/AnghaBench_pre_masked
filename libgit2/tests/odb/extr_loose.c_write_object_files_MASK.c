
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int blen; int bytes; int file; int dir; } ;
typedef TYPE_1__ object_data ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int ,int ) ;

__attribute__((used)) static void FUNC_6(object_data *VAR_5)
{
 int VAR_6;

 if (FUNC_4(VAR_5->dir, VAR_1) < 0)
  FUNC_0(VAR_4 == VAR_0);

 FUNC_0((VAR_6 = FUNC_3(VAR_5->file, VAR_2 | VAR_3)) >= 0);
 FUNC_1(FUNC_5(VAR_6, VAR_5->bytes, VAR_5->blen));

 FUNC_2(VAR_6);
}
