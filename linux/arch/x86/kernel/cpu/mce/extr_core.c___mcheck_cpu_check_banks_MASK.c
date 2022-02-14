
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mce_bank {int init; } ;
struct TYPE_2__ {int (* ctl ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 struct mce_bank* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 struct mce_bank *VAR_3 = FUNC_2(VAR_0);
 u64 VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_3(VAR_1); VAR_5++) {
  struct mce_bank *VAR_6 = &VAR_3[VAR_5];

  if (!VAR_6->init)
   continue;

  FUNC_0(VAR_2.ctl(VAR_5), VAR_4);
  VAR_6->init = !!VAR_4;
 }
}
