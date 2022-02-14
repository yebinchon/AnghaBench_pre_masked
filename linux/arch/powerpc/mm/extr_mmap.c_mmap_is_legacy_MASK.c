
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rlimit {scalar_t__ rlim_cur; } ;
struct TYPE_2__ {int personality; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline int FUNC_0(struct rlimit *VAR_4)
{
 if (VAR_2->personality & VAR_0)
  return 1;

 if (VAR_4->rlim_cur == VAR_1)
  return 1;

 return VAR_3;
}
