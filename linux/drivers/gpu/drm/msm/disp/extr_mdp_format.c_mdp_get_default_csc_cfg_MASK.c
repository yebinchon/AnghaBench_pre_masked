
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csc_cfg {int dummy; } ;
typedef enum csc_type { ____Placeholder_csc_type } csc_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct csc_cfg* VAR_1 ;

struct csc_cfg *FUNC_1(enum csc_type VAR_2)
{
 if (FUNC_0(VAR_2 >= VAR_0))
  return ((void*)0);

 return &VAR_1[VAR_2];
}
