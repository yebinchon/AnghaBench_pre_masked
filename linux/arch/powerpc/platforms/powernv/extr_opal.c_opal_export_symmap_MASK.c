
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device_node {int dummy; } ;
typedef int __be64 ;
struct TYPE_3__ {int size; int private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const) ;
 struct device_node* FUNC_2 (char*) ;
 int * FUNC_3 (struct device_node*,char*,unsigned int*) ;
 int VAR_0 ;
 int FUNC_4 (char*,int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_5 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(void)
{
 const __be64 *VAR_2;
 unsigned int VAR_3;
 struct device_node *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2("/ibm,opal/firmware");
 if (!VAR_4)
  return;
 VAR_2 = FUNC_3(VAR_4, "symbol-map", &VAR_3);
 if (!VAR_2 || VAR_3 != 2 * sizeof(__be64))
  return;


 VAR_1.private = FUNC_0(FUNC_1(VAR_2[0]));
 VAR_1.size = FUNC_1(VAR_2[1]);

 VAR_5 = FUNC_5(VAR_0, &VAR_1);
 if (VAR_5)
  FUNC_4("Error %d creating OPAL symbols file\n", VAR_5);
}
