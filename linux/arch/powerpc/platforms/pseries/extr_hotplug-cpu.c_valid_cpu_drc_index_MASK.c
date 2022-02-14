
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,char*,int ,scalar_t__*) ;

__attribute__((used)) static bool FUNC_1(struct device_node *VAR_0, u32 VAR_1)
{
 bool VAR_2 = 0;
 int VAR_3, VAR_4;

 VAR_4 = 0;
 while (!VAR_2) {
  u32 VAR_5;

  VAR_3 = FUNC_0(VAR_0, "ibm,drc-indexes",
      VAR_4++, &VAR_5);
  if (VAR_3)
   break;

  if (VAR_5 == VAR_1)
   VAR_2 = 1;
 }

 return VAR_2;
}
