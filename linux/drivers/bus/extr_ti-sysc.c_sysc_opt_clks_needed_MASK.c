
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int quirks; } ;
struct sysc {TYPE_1__ cfg; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct sysc *VAR_1)
{
 return !!(VAR_1->cfg.quirks & VAR_0);
}
