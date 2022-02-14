
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct id {size_t val; scalar_t__ pentry; } ;
struct TYPE_2__ {int * entry; } ;


 struct id* FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct id *VAR_1)
{
 if (VAR_1 && VAR_1->val != 0 &&
     FUNC_0(VAR_0.entry[VAR_1->val]) == VAR_1 &&
     VAR_1->pentry == FUNC_1(&VAR_0.entry[VAR_1->val]))
  return VAR_1->val;
 return -1;
}
