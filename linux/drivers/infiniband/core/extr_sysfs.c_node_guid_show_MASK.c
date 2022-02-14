
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int node_guid; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int __be16 ;


 int FUNC_0 (int ) ;
 struct ib_device* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 struct ib_device *VAR_3 = FUNC_1(VAR_0);

 return FUNC_2(VAR_2, "%04x:%04x:%04x:%04x\n",
         FUNC_0(((__be16 *) &VAR_3->node_guid)[0]),
         FUNC_0(((__be16 *) &VAR_3->node_guid)[1]),
         FUNC_0(((__be16 *) &VAR_3->node_guid)[2]),
         FUNC_0(((__be16 *) &VAR_3->node_guid)[3]));
}
