
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_2__ {int syscfg; struct device* cpu; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (struct device_node*,char*,int ,unsigned int*) ;
 int FUNC_2 (int ,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_3(void) {
 struct device_node *VAR_3 = VAR_2.cpu->of_node;
 struct device *VAR_4 = VAR_2.cpu;
 unsigned int VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, "st,syscfg",
      VAR_0, &VAR_5);
 if (VAR_7) {
  FUNC_0(VAR_4, "No major number offset provided in %pOF [%d]\n",
   VAR_3, VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_2(VAR_2.syscfg, VAR_5, &VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_4, "Failed to read major number from syscon [%d]\n",
   VAR_7);
  return VAR_7;
 }

 return ((VAR_6 >> VAR_1) & 0xf) + 1;
}
