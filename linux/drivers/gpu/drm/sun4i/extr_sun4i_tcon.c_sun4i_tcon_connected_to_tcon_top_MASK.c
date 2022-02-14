
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct device_node* FUNC_1 (struct device_node*,int ,int) ;
 scalar_t__ FUNC_2 (int ,struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_4(struct device_node *VAR_2)
{
 struct device_node *VAR_3;
 bool VAR_4 = 0;

 VAR_3 = FUNC_1(VAR_2, 0, -1);
 if (VAR_3) {
  VAR_4 = !!(FUNC_0(VAR_0) &&
    FUNC_2(VAR_1, VAR_3));
  FUNC_3(VAR_3);
 }

 return VAR_4;
}
