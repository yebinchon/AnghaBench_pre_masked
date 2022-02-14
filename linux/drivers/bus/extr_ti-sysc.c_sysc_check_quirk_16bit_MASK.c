
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int quirks; } ;
struct sysc {TYPE_1__ cfg; } ;
struct resource {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct resource*) ;

__attribute__((used)) static void FUNC_1(struct sysc *VAR_2, struct resource *VAR_3)
{
 if (FUNC_0(VAR_3) == 8)
  VAR_2->cfg.quirks |= VAR_0 | VAR_1;
}
