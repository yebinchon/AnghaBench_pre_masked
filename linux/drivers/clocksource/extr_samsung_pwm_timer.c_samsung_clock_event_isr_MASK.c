
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;
struct TYPE_3__ {scalar_t__ has_tint_cstat; } ;
struct TYPE_4__ {int event_id; scalar_t__ base; TYPE_1__ variant; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct clock_event_device *VAR_5 = VAR_4;

 if (VAR_2.variant.has_tint_cstat) {
  u32 VAR_6 = (1 << VAR_2.event_id);
  FUNC_1(VAR_6 | (VAR_6 << 5), VAR_2.base + VAR_1);
 }

 VAR_5->event_handler(VAR_5);

 return VAR_0;
}
