
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; int cmd; } ;
struct TYPE_4__ {TYPE_1__ cmd; int page; } ;
struct ili9881c_instr {scalar_t__ op; TYPE_2__ arg; } ;
struct ili9881c {int dsi; int reset; int power; } ;
struct drm_panel {int dummy; } ;


 unsigned int FUNC_0 (struct ili9881c_instr*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 struct ili9881c_instr* VAR_3 ;
 int FUNC_2 (struct ili9881c*,int ,int ) ;
 int FUNC_3 (struct ili9881c*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int) ;
 struct ili9881c* FUNC_7 (struct drm_panel*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct drm_panel *VAR_4)
{
 struct ili9881c *VAR_5 = FUNC_7(VAR_4);
 unsigned int VAR_6;
 int VAR_7;


 VAR_7 = FUNC_8(VAR_5->power);
 if (VAR_7)
  return VAR_7;
 FUNC_6(5);


 FUNC_1(VAR_5->reset, 1);
 FUNC_6(20);

 FUNC_1(VAR_5->reset, 0);
 FUNC_6(20);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {
  const struct ili9881c_instr *VAR_8 = &VAR_3[VAR_6];

  if (VAR_8->op == VAR_1)
   VAR_7 = FUNC_3(VAR_5, VAR_8->arg.page);
  else if (VAR_8->op == VAR_0)
   VAR_7 = FUNC_2(VAR_5, VAR_8->arg.cmd.cmd,
            VAR_8->arg.cmd.data);

  if (VAR_7)
   return VAR_7;
 }

 VAR_7 = FUNC_3(VAR_5, 0);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_5->dsi, VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_4(VAR_5->dsi);
 if (VAR_7)
  return VAR_7;

 return 0;
}
