
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_card {int br_short; int br_work; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct fw_card*) ;
 int FUNC_2 (struct fw_card*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,int ) ;

void FUNC_4(struct fw_card *VAR_2, bool VAR_3, bool VAR_4)
{

 VAR_2->br_short = VAR_4;


 FUNC_1(VAR_2);
 if (!FUNC_3(VAR_1, &VAR_2->br_work,
    VAR_3 ? FUNC_0(VAR_0, 100) : 0))
  FUNC_2(VAR_2);
}
