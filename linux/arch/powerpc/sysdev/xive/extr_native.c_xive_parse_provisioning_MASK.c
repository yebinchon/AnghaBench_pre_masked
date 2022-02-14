
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (char*,int ,int ,int ,int *) ;
 int FUNC_3 (struct device_node*,char*,int) ;
 scalar_t__ FUNC_4 (struct device_node*,char*,int *) ;
 int FUNC_5 (struct device_node*,char*,int ,int) ;
 int FUNC_6 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_7(struct device_node *VAR_5)
{
 int VAR_6;

 if (FUNC_4(VAR_5, "ibm,xive-provision-page-size",
     &VAR_4) < 0)
  return 1;
 VAR_6 = FUNC_3(VAR_5, "ibm,xive-provision-chips", 4);
 if (VAR_6 < 0) {
  FUNC_6("Error %d getting provision chips array\n", VAR_6);
  return 0;
 }
 VAR_2 = VAR_6;
 if (VAR_6 == 0)
  return 1;

 VAR_3 = FUNC_1(4, VAR_2,
           VAR_0);
 if (FUNC_0(!VAR_3))
  return 0;

 VAR_6 = FUNC_5(VAR_5, "ibm,xive-provision-chips",
     VAR_3,
     VAR_2);
 if (VAR_6 < 0) {
  FUNC_6("Error %d reading provision chips array\n", VAR_6);
  return 0;
 }

 VAR_1 = FUNC_2("xive-provision",
       VAR_4,
       VAR_4,
       0, ((void*)0));
 if (!VAR_1) {
  FUNC_6("Failed to allocate provision cache\n");
  return 0;
 }
 return 1;
}
