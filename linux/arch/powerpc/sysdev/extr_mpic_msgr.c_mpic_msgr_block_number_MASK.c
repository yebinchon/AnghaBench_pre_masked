
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int value; } ;
struct device_node {int dummy; } ;
typedef int buf ;


 unsigned int FUNC_0 () ;
 struct device_node* FUNC_1 (int *,char*) ;
 struct device_node* FUNC_2 (int ) ;
 struct property* FUNC_3 (struct device_node*,char*,int *) ;
 int FUNC_4 (char*,int,char*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct device_node *VAR_0)
{
 struct device_node *VAR_1;
 unsigned int VAR_2, VAR_3;
 char VAR_4[64];

 VAR_3 = FUNC_0();
 VAR_1 = FUNC_1(((void*)0), "aliases");
 if (!VAR_1)
  return -1;

 for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2) {
  struct property *VAR_5;

  FUNC_4(VAR_4, sizeof(VAR_4), "mpic-msgr-block%d", VAR_2);
  VAR_5 = FUNC_3(VAR_1, VAR_4, ((void*)0));
  if (VAR_0 == FUNC_2(VAR_5->value))
   break;
 }

 return VAR_2 == VAR_3 ? -1 : VAR_2;
}
