
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int quirks; } ;
struct sysc {TYPE_1__ cfg; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct sysc *VAR_2, struct device *VAR_3)
{
 if (VAR_2->cfg.quirks & VAR_0)
  FUNC_0(VAR_3, &VAR_1);
}
