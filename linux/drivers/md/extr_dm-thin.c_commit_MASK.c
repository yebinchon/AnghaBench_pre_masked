
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {int pmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pool*) ;
 int FUNC_1 (struct pool*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct pool*) ;
 int FUNC_4 (struct pool*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct pool *VAR_2)
{
 int VAR_3;

 if (FUNC_3(VAR_2) >= VAR_1)
  return -VAR_0;

 VAR_3 = FUNC_2(VAR_2->pmd);
 if (VAR_3)
  FUNC_4(VAR_2, "dm_pool_commit_metadata", VAR_3);
 else {
  FUNC_1(VAR_2);
  FUNC_0(VAR_2);
 }

 return VAR_3;
}
