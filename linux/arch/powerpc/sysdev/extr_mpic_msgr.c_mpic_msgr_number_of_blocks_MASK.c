
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef int buf ;


 struct device_node* FUNC_0 (int *,char*) ;
 int FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (char*,int,char*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(void)
{
 unsigned int VAR_0;
 struct device_node *VAR_1;

 VAR_0 = 0;
 VAR_1 = FUNC_0(((void*)0), "aliases");

 if (VAR_1) {
  char VAR_2[32];

  for (;;) {
   FUNC_2(VAR_2, sizeof(VAR_2), "mpic-msgr-block%d", VAR_0);
   if (!FUNC_1(VAR_1, VAR_2, ((void*)0)))
    break;

   VAR_0 += 1;
  }
 }

 return VAR_0;
}
