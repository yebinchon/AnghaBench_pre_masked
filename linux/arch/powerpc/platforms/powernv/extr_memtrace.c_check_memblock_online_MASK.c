
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_block {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct memory_block *VAR_1, void *VAR_2)
{
 if (VAR_1->state != VAR_0)
  return -1;

 return 0;
}
