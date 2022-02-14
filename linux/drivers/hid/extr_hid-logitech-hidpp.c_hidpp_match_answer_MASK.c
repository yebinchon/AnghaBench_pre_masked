
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ feature_index; scalar_t__ funcindex_clientid; } ;
struct hidpp_report {TYPE_1__ fap; } ;



__attribute__((used)) static inline bool FUNC_0(struct hidpp_report *VAR_0,
  struct hidpp_report *VAR_1)
{
 return (VAR_1->fap.feature_index == VAR_0->fap.feature_index) &&
    (VAR_1->fap.funcindex_clientid == VAR_0->fap.funcindex_clientid);
}
