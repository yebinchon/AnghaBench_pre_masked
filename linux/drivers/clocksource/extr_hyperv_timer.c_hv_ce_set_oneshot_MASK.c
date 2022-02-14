
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union hv_stimer_config {int enable; int auto_enable; int direct_mode; scalar_t__ as_uint64; int sintx; int apic_vector; } ;
struct clock_event_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct clock_event_device *VAR_4)
{
 union hv_stimer_config VAR_5;

 VAR_5.as_uint64 = 0;
 VAR_5.enable = 1;
 VAR_5.auto_enable = 1;
 if (VAR_0) {




  VAR_5.direct_mode = 1;
  VAR_5.apic_vector = VAR_3;
  FUNC_0(VAR_1);
 } else {




  VAR_5.direct_mode = 0;
  VAR_5.sintx = VAR_2;
 }
 FUNC_1(0, VAR_5.as_uint64);
 return 0;
}
