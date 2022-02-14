
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_writecache {scalar_t__ autocommit_jiffies; int autocommit_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dm_writecache *VAR_1)
{
 if (!FUNC_1(&VAR_1->autocommit_timer))
  FUNC_0(&VAR_1->autocommit_timer, VAR_0 + VAR_1->autocommit_jiffies);
}
