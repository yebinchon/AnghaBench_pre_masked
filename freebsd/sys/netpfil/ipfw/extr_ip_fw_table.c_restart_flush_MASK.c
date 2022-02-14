
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tableop_state {void* tc; int modified; } ;
struct op_state {int dummy; } ;



__attribute__((used)) static void
FUNC_0(void *VAR_0, struct op_state *VAR_1)
{
 struct tableop_state *VAR_2;

 VAR_2 = (struct tableop_state *)VAR_1;

 if (VAR_2->tc != VAR_0)
  return;


 VAR_2->modified = 1;
}
