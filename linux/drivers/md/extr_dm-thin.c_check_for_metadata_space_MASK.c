
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {int pmd; } ;
typedef int dm_block_t ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct pool*) ;
 int FUNC_3 (struct pool*,int ) ;

__attribute__((used)) static void FUNC_4(struct pool *VAR_1)
{
 int VAR_2;
 const char *VAR_3 = ((void*)0);
 dm_block_t VAR_4;

 VAR_2 = FUNC_1(VAR_1->pmd, &VAR_4);
 if (VAR_2)
  VAR_3 = "Could not get free metadata blocks";
 else if (!VAR_4)
  VAR_3 = "No free metadata blocks";

 if (VAR_3 && !FUNC_2(VAR_1)) {
  FUNC_0("%s", VAR_3);
  FUNC_3(VAR_1, VAR_0);
 }
}
