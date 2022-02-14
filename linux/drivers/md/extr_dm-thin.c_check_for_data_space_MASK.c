
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {int pmd; } ;
typedef scalar_t__ dm_block_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct pool*) ;
 int FUNC_2 (struct pool*) ;
 int FUNC_3 (struct pool*,int ) ;

__attribute__((used)) static void FUNC_4(struct pool *VAR_2)
{
 int VAR_3;
 dm_block_t VAR_4;

 if (FUNC_1(VAR_2) != VAR_0)
  return;

 VAR_3 = FUNC_0(VAR_2->pmd, &VAR_4);
 if (VAR_3)
  return;

 if (VAR_4) {
  FUNC_3(VAR_2, VAR_1);
  FUNC_2(VAR_2);
 }
}
