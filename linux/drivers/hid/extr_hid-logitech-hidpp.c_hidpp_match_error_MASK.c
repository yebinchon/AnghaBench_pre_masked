
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ feature_index; scalar_t__ funcindex_clientid; scalar_t__* params; } ;
struct TYPE_3__ {scalar_t__ sub_id; } ;
struct hidpp_report {TYPE_2__ fap; TYPE_1__ rap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct hidpp_report *VAR_2,
  struct hidpp_report *VAR_3)
{
 return ((VAR_3->rap.sub_id == VAR_1) ||
     (VAR_3->fap.feature_index == VAR_0)) &&
     (VAR_3->fap.funcindex_clientid == VAR_2->fap.feature_index) &&
     (VAR_3->fap.params[0] == VAR_2->fap.funcindex_clientid);
}
