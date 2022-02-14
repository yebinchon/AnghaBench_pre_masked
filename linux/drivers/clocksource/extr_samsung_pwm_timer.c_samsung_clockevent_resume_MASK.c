
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct clock_event_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ has_tint_cstat; } ;
struct TYPE_4__ {int event_id; scalar_t__ base; TYPE_1__ variant; int tdiv; int tscaler_div; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct clock_event_device *VAR_2)
{
 FUNC_1(VAR_1.event_id, VAR_1.tscaler_div);
 FUNC_0(VAR_1.event_id, VAR_1.tdiv);

 if (VAR_1.variant.has_tint_cstat) {
  u32 VAR_3 = (1 << VAR_1.event_id);
  FUNC_2(VAR_3 | (VAR_3 << 5), VAR_1.base + VAR_0);
 }
}
