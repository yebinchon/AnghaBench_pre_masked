
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spin_wait {int node_id; struct spin_wait* prev; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(int VAR_2, struct spin_wait *VAR_3)
{
 if (VAR_2 & VAR_0)
  return VAR_2 & VAR_0;
 if (VAR_3 == ((void*)0) || VAR_3->prev == ((void*)0))
  return 0;
 while (VAR_3->prev)
  VAR_3 = VAR_3->prev;
 return VAR_3->node_id >> VAR_1;
}
