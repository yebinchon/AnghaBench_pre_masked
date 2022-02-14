
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device_node {int dummy; } ;
typedef int __be64 ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct device_node*,int ,struct resource*) ;
 struct device_node* FUNC_3 (char*) ;
 int * FUNC_4 (struct device_node*,char*,int *) ;
 int FUNC_5 (struct device_node*) ;
 int VAR_1 ;
 unsigned int FUNC_6 (struct resource*) ;
 int FUNC_7 (char*,char*,unsigned int) ;

unsigned long FUNC_8(void)
{
 struct device_node *VAR_2;
 unsigned int VAR_3 = VAR_0;
 struct resource VAR_4;

 VAR_2 = FUNC_3("/ibm,dynamic-reconfiguration-memory");
 if (VAR_2) {
  const __be64 *VAR_5;

  VAR_5 = FUNC_4(VAR_2, "ibm,lmb-size", ((void*)0));
  if (VAR_5)
   VAR_3 = FUNC_0(VAR_5);
  FUNC_5(VAR_2);
 } else if (FUNC_1(VAR_1)) {

  unsigned int VAR_6 = 0;

  VAR_2 = FUNC_3("/memory@0");
  if (VAR_2) {
   if (!FUNC_2(VAR_2, 0, &VAR_4))
    VAR_6 = FUNC_6(&VAR_4);
   FUNC_5(VAR_2);
  }

  if (VAR_6) {



   char VAR_7[64];

   FUNC_7(VAR_7, "/memory@%x", VAR_6);
   VAR_2 = FUNC_3(VAR_7);
   if (VAR_2) {
    if (!FUNC_2(VAR_2, 0, &VAR_4))
     VAR_3 = FUNC_6(&VAR_4);
    FUNC_5(VAR_2);
   }
  }
 }
 return VAR_3;
}
