
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct checkout_index_entry {int member_0; int member_2; char* member_3; int member_1; } ;
typedef int git_checkout_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct checkout_index_entry*,int) ;
 int FUNC_2 (char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ) ;

void FUNC_5(void)
{
 git_checkout_options VAR_7 = VAR_4;

 struct checkout_index_entry VAR_8[] = {
  { 0100644, VAR_0, 1, "automergeable.txt" },
  { 0100644, VAR_2, 2, "automergeable.txt" },
  { 0100644, VAR_3, 3, "automergeable.txt" },
 };

 FUNC_1(VAR_8, 3);
 FUNC_0(FUNC_4(VAR_5));

 FUNC_0(FUNC_3(VAR_6, VAR_5, &VAR_7));

 FUNC_2("automergeable.txt", VAR_1);
}
