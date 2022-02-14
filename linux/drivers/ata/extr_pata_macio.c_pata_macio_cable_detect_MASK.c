
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pata_macio_priv {scalar_t__ kind; struct device_node* node; } ;
struct device_node {int dummy; } ;
struct ata_port {struct pata_macio_priv* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct device_node*,char*) ;
 struct device_node* FUNC_1 (char*) ;
 char* FUNC_2 (struct device_node*,char*,int *) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct ata_port *VAR_7)
{
 struct pata_macio_priv *VAR_8 = VAR_7->private_data;


 if (VAR_8->kind == VAR_4 ||
     VAR_8->kind == VAR_6 ||
     VAR_8->kind == VAR_3 ||
     VAR_8->kind == VAR_5) {
  const char* VAR_9 = FUNC_2(VAR_8->node, "cable-type",
          ((void*)0));
  struct device_node *VAR_10 = FUNC_1("/");
  const char *VAR_11 = FUNC_2(VAR_10, "model", ((void*)0));

  FUNC_3(VAR_10);

  if (VAR_9 && !FUNC_4(VAR_9, "80-", 3)) {




   if (!FUNC_4(VAR_11, "PowerBook", 9))
    return VAR_1;
   else
    return VAR_2;
  }
 }





 if (FUNC_0(VAR_8->node, "K2-UATA") ||
     FUNC_0(VAR_8->node, "shasta-ata"))
  return VAR_2;


 return VAR_0;
}
