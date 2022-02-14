
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct checkout_index_entry {int member_0; int member_2; char* member_3; int member_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct checkout_index_entry*,int) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct checkout_index_entry VAR_4[] = {
  { 0100644, VAR_0, 1, "conflicting.txt" },
  { 0100644, VAR_1, 2, "conflicting.txt" },
  { 0100644, VAR_2, 3, "conflicting.txt" },
 };

 FUNC_1(VAR_4, 3);
 FUNC_0(FUNC_2(VAR_3));
}
