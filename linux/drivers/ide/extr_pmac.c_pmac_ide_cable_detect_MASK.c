
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct device_node {int dummy; } ;
struct TYPE_7__ {struct device_node* node; } ;
typedef TYPE_2__ pmac_ide_hwif_t ;
struct TYPE_6__ {int parent; } ;
struct TYPE_8__ {TYPE_1__ gendev; } ;
typedef TYPE_3__ ide_hwif_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;
 struct device_node* FUNC_2 (char*) ;
 char* FUNC_3 (struct device_node*,char*,int *) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (char const*,char*,int) ;

__attribute__((used)) static u8 FUNC_6(ide_hwif_t *VAR_3)
{
 pmac_ide_hwif_t *VAR_4 = FUNC_0(VAR_3->gendev.parent);
 struct device_node *VAR_5 = VAR_4->node;
 const char *VAR_6 = FUNC_3(VAR_5, "cable-type", ((void*)0));
 struct device_node *VAR_7 = FUNC_2("/");
 const char *VAR_8 = FUNC_3(VAR_7, "model", ((void*)0));

 FUNC_4(VAR_7);

 if (VAR_6 && !FUNC_5(VAR_6, "80-", 3)) {


  if (!FUNC_5(VAR_8, "PowerBook", 9))
   return VAR_1;
  else
   return VAR_2;
 }






 if (FUNC_1(VAR_5, "K2-UATA") ||
     FUNC_1(VAR_5, "shasta-ata"))
  return VAR_2;

 return VAR_0;
}
