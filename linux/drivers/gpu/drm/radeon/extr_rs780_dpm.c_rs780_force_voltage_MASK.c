
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int current_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct igp_ps {scalar_t__ max_voltage; scalar_t__ min_voltage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ) ;
 struct igp_ps* FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_8, u16 VAR_9)
{
 struct igp_ps *VAR_10 = FUNC_2(VAR_8->pm.dpm.current_ps);

 if ((VAR_10->max_voltage == VAR_5) &&
     (VAR_10->min_voltage == VAR_5))
  return;

 FUNC_1(VAR_3, VAR_6, ~VAR_6);

 FUNC_3(1);

 FUNC_1(VAR_1,
   FUNC_0(VAR_9),
   ~VAR_7);

 FUNC_1(VAR_1,
   VAR_0, ~VAR_0);

 FUNC_1(VAR_2, 0,
  ~VAR_4);

 FUNC_3(1);

 FUNC_1(VAR_3, 0, ~VAR_6);
}
