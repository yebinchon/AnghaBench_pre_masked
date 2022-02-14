
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int max; int min; } ;
struct intel_panel {TYPE_1__ backlight; } ;
struct intel_connector {struct intel_panel panel; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline u32 FUNC_2(struct intel_connector *VAR_0,
       u32 VAR_1, u32 VAR_2)
{
 struct intel_panel *VAR_3 = &VAR_0->panel;
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_1, 0, VAR_2, 0, VAR_3->backlight.max);
 VAR_4 = FUNC_0(VAR_4, VAR_3->backlight.min, VAR_3->backlight.max);

 return VAR_4;
}
