
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_transaction {int split_timeout_timer; scalar_t__ is_split_transaction; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct fw_transaction *VAR_0)
{
 if (VAR_0->is_split_transaction)
  return FUNC_0(&VAR_0->split_timeout_timer);
 else
  return 1;
}
