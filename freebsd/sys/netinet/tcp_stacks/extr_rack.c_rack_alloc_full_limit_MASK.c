
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rc_num_maps_alloced; } ;
struct tcp_rack {scalar_t__ do_detection; int alloc_limit_reported; TYPE_1__ r_ctl; } ;
struct rack_sendmap {int dummy; } ;


 int FUNC_0 (int ,int) ;
 struct rack_sendmap* FUNC_1 (struct tcp_rack*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct rack_sendmap *
FUNC_2(struct tcp_rack *VAR_3)
{
 if ((VAR_1 > 0) &&
     (VAR_3->do_detection == 0) &&
     (VAR_3->r_ctl.rc_num_maps_alloced >= VAR_1)) {
  FUNC_0(VAR_2, 1);
  if (!VAR_3->alloc_limit_reported) {
   VAR_3->alloc_limit_reported = 1;
   FUNC_0(VAR_0, 1);
  }
  return (((void*)0));
 }
 return (FUNC_1(VAR_3));
}
