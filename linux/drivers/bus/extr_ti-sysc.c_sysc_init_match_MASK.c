
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysc_capabilities {int mod_quirks; } ;
struct TYPE_2__ {int quirks; } ;
struct sysc {struct sysc_capabilities const* cap; TYPE_1__ cfg; int dev; } ;


 int VAR_0 ;
 struct sysc_capabilities* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct sysc *VAR_1)
{
 const struct sysc_capabilities *VAR_2;

 VAR_2 = FUNC_0(VAR_1->dev);
 if (!VAR_2)
  return -VAR_0;

 VAR_1->cap = VAR_2;
 if (VAR_1->cap)
  VAR_1->cfg.quirks |= VAR_1->cap->mod_quirks;

 return 0;
}
