
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapdss_comp_node {int dss_core_component; char const* compat; int list; struct device_node* node; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct omapdss_comp_node* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (struct device_node*,char*) ;
 struct device_node* FUNC_4 (struct device_node*,struct device_node*) ;
 struct device_node* FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct device_node*,char*,char const**) ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (struct device_node*) ;

__attribute__((used)) static void FUNC_9(struct device *VAR_2, struct device_node *VAR_3,
    bool VAR_4)
{
 struct omapdss_comp_node *VAR_5;
 struct device_node *VAR_6;
 const char *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_7(VAR_3, "compatible", &VAR_7);
 if (VAR_8 < 0)
  return;

 VAR_5 = FUNC_0(VAR_2, sizeof(*VAR_5), VAR_0);
 if (VAR_5) {
  VAR_5->node = VAR_3;
  VAR_5->dss_core_component = VAR_4;
  VAR_5->compat = VAR_7;
  FUNC_1(&VAR_5->list, &VAR_1);
 }





 VAR_6 = FUNC_3(VAR_3, "ports");
 if (!VAR_6)
  VAR_6 = FUNC_3(VAR_3, "port");
 if (!VAR_6)
  return;

 FUNC_6(VAR_6);

 VAR_6 = ((void*)0);
 while ((VAR_6 = FUNC_4(VAR_3, VAR_6)) != ((void*)0)) {
  struct device_node *VAR_9 = FUNC_5(VAR_6);

  if (!VAR_9)
   continue;

  if (!FUNC_2(VAR_9) || FUNC_8(VAR_9)) {
   FUNC_6(VAR_9);
   continue;
  }

  FUNC_9(VAR_2, VAR_9, 0);
 }
}
