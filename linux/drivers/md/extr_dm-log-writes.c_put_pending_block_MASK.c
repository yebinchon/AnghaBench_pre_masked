
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_writes_c {int wait; int pending_blocks; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct log_writes_c *VAR_0)
{
 if (FUNC_0(&VAR_0->pending_blocks)) {
  FUNC_1();
  if (FUNC_2(&VAR_0->wait))
   FUNC_3(&VAR_0->wait);
 }
}
