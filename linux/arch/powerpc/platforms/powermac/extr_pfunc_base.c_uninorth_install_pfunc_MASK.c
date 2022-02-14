
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int FUNC_0 (char*,struct device_node*) ;
 int VAR_0 ;
 struct device_node* FUNC_1 (struct device_node*,struct device_node*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct device_node*,int *,int ,int ,int *) ;
 int FUNC_4 (struct device_node*,int *,int *) ;
 struct device_node* VAR_1 ;
 int VAR_2 ;
 struct device_node* VAR_3 ;

__attribute__((used)) static void FUNC_5(void)
{
 struct device_node *VAR_4;

 FUNC_0("Installing functions for UniN %pOF\n",
     VAR_3);




 FUNC_4(VAR_3, &VAR_2, ((void*)0));
 FUNC_3(VAR_3, ((void*)0), 0, VAR_0, ((void*)0));





 for (VAR_4 = ((void*)0); (VAR_4 = FUNC_1(VAR_3, VAR_4)) != ((void*)0);)
  if (FUNC_2(VAR_4, "hw-clock")) {
   VAR_1 = VAR_4;
   break;
  }
 if (VAR_1) {
  FUNC_0("Installing functions for UniN clock %pOF\n",
      VAR_1);
  FUNC_4(VAR_1, &VAR_2, ((void*)0));
  FUNC_3(VAR_1, ((void*)0), 0, VAR_0,
     ((void*)0));
 }
}
