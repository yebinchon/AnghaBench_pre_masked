
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lgr_info {int level; int stfle_fac_list; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct lgr_info*) ;
 int FUNC_2 (struct lgr_info*) ;
 int FUNC_3 (struct lgr_info*) ;
 int FUNC_4 (struct lgr_info*,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct lgr_info *VAR_0)
{
 int VAR_1;

 FUNC_4(VAR_0, 0, sizeof(*VAR_0));
 FUNC_5(VAR_0->stfle_fac_list, FUNC_0(VAR_0->stfle_fac_list));
 VAR_1 = FUNC_6(((void*)0), 0, 0, 0);
 VAR_0->level = VAR_1;
 if (VAR_1 >= 1)
  FUNC_1(VAR_0);
 if (VAR_1 >= 2)
  FUNC_2(VAR_0);
 if (VAR_1 >= 3)
  FUNC_3(VAR_0);
}
