
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rmt_start; } ;
struct hfi1_devdata {TYPE_1__ vnic; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct hfi1_devdata *VAR_1, int VAR_2)
{
 return (VAR_1->vnic.rmt_start + VAR_2) > VAR_0;
}
