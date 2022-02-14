
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int quirks; } ;
struct sysc {TYPE_1__ cfg; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct device_node* VAR_2 ;
 int FUNC_0 (struct sysc*) ;

__attribute__((used)) static void FUNC_1(struct sysc *VAR_3,
        struct device_node *VAR_4)
{
 FUNC_0(VAR_3);
 if (VAR_4 != VAR_2)
  return;

 VAR_3->cfg.quirks |= VAR_0 |
    VAR_1;
}
