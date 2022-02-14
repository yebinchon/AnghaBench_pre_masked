
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct qib_devdata {int flags; TYPE_1__* cspec; } ;
struct TYPE_2__ {int * cregbase; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline u32 FUNC_1(const struct qib_devdata *VAR_1, u16 VAR_2)
{
 if (!VAR_1->cspec->cregbase || !(VAR_1->flags & VAR_0))
  return 0;
 return FUNC_0(&VAR_1->cspec->cregbase[VAR_2]);
}
