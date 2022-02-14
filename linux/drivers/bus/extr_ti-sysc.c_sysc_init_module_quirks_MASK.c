
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int quirks; } ;
struct sysc {void* module_disable_quirk; void* reset_done_quirk; TYPE_1__ cfg; int module_enable_quirk; int clk_disable_quirk; int clk_enable_quirk; int name; scalar_t__ legacy_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;

__attribute__((used)) static void FUNC_0(struct sysc *VAR_9)
{
 if (VAR_9->legacy_mode || !VAR_9->name)
  return;

 if (VAR_9->cfg.quirks & VAR_0) {
  VAR_9->clk_enable_quirk = VAR_5;

  return;
 }

 if (VAR_9->cfg.quirks & VAR_1) {
  VAR_9->clk_enable_quirk = VAR_6;
  VAR_9->clk_disable_quirk = VAR_4;

  return;
 }

 if (VAR_9->cfg.quirks & VAR_2)
  VAR_9->module_enable_quirk = VAR_7;

 if (VAR_9->cfg.quirks & VAR_3) {
  VAR_9->reset_done_quirk = VAR_8;
  VAR_9->module_disable_quirk = VAR_8;
 }
}
