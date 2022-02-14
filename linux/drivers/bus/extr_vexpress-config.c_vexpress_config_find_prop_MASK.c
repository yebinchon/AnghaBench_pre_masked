
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;
 scalar_t__ FUNC_3 (struct device_node*,char const*,scalar_t__*) ;

__attribute__((used)) static void FUNC_4(struct device_node *VAR_0,
  const char *VAR_1, u32 *VAR_2)
{

 *VAR_2 = 0;

 FUNC_1(VAR_0);
 while (VAR_0) {
  if (FUNC_3(VAR_0, VAR_1, VAR_2) == 0) {
   FUNC_2(VAR_0);
   return;
  }
  VAR_0 = FUNC_0(VAR_0);
 }
}
