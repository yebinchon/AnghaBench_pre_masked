
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_pr_properties {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,struct mfi_pr_properties*,int,int *,int ,int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(int VAR_2, struct mfi_pr_properties *VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_2, VAR_0, VAR_3,
     sizeof(*VAR_3), ((void*)0), 0, ((void*)0)) < 0) {
  VAR_4 = VAR_1;
  FUNC_1("Failed to get patrol read properties");
  return (VAR_4);
 }
 return (0);
}
