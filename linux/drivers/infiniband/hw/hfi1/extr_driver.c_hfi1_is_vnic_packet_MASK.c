
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfi1_packet {int ebuf; TYPE_1__* rcd; } ;
struct TYPE_2__ {scalar_t__ is_vnic; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(struct hfi1_packet *VAR_2)
{

 if (VAR_2->rcd->is_vnic)
  return 1;

 if ((FUNC_0(VAR_2->ebuf) == VAR_0) &&
     (FUNC_1(VAR_2->ebuf) == VAR_1))
  return 1;

 return 0;
}
