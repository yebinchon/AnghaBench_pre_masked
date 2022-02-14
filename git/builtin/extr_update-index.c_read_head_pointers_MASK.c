
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char*,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(void)
{
 if (FUNC_3("HEAD", &VAR_0))
  FUNC_0("No HEAD -- no initial commit yet?");
 if (FUNC_3("MERGE_HEAD", &VAR_1)) {
  FUNC_2(VAR_2, "Not in the middle of a merge.\n");
  FUNC_1(0);
 }
}
