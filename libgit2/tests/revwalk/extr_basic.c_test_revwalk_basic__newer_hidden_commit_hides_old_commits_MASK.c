
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*) ;

void FUNC_8(void)
{
 git_oid VAR_2;

 FUNC_7("revwalk.git");

 FUNC_2(FUNC_6(VAR_1, "refs/heads/D"));
 FUNC_2(FUNC_4(VAR_1, "refs/heads/B"));
 FUNC_2(FUNC_4(VAR_1, "refs/heads/A"));
 FUNC_2(FUNC_4(VAR_1, "refs/heads/E"));

 FUNC_2(FUNC_5(&VAR_2, VAR_1));
 FUNC_0(FUNC_3(&VAR_2, "b82cee5004151ae0c4f82b69fb71b87477664b6f"));
 FUNC_2(FUNC_5(&VAR_2, VAR_1));
 FUNC_0(FUNC_3(&VAR_2, "790ba0facf6fd103699a5c40cd19dad277ff49cd"));

 FUNC_1(VAR_0, FUNC_5(&VAR_2, VAR_1));
}
