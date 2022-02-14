
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mce_bank {int ctl; int init; } ;
struct TYPE_2__ {int (* status ) (int) ;int (* ctl ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct mce_bank* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct mce_bank *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_3(VAR_1); VAR_4++) {
  struct mce_bank *VAR_5 = &VAR_3[VAR_4];

  if (!VAR_5->init)
   continue;
  FUNC_4(VAR_2.ctl(VAR_4), VAR_5->ctl);
  FUNC_4(VAR_2.status(VAR_4), 0);
 }
}
