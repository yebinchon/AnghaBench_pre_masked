
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int cmd; } ;
typedef int blk_status_t ;


 int FUNC_0 (struct cache*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static blk_status_t FUNC_3(void *VAR_0)
{
 struct cache *VAR_1 = VAR_0;

 if (FUNC_1(VAR_1->cmd))
  return FUNC_2(FUNC_0(VAR_1, 0));

 return 0;
}
