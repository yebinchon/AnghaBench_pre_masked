
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int quirks; } ;
struct sysc {int dev; TYPE_1__ cfg; } ;
struct property {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_5__ {char* name; int mask; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*,char const*) ;
 struct property* FUNC_2 (struct device_node*,char const*,int*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct sysc *VAR_1, struct device_node *VAR_2,
      bool VAR_3)
{
 const struct property *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  const char *VAR_7 = VAR_0[VAR_5].name;

  VAR_4 = FUNC_2(VAR_2, VAR_7, &VAR_6);
  if (!VAR_4)
   continue;

  VAR_1->cfg.quirks |= VAR_0[VAR_5].mask;
  if (VAR_3) {
   FUNC_1(VAR_1->dev,
     "dts flag should be at module level for %s\n",
     VAR_7);
  }
 }
}
