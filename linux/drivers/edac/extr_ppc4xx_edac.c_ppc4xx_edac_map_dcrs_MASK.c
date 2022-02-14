
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef int dcr_host_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct device_node const*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (struct device_node const*,int ) ;
 unsigned int FUNC_3 (struct device_node const*,int ) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static int FUNC_5(const struct device_node *VAR_5,
    dcr_host_t *VAR_6)
{
 unsigned int VAR_7, VAR_8;

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
  return -VAR_0;



 VAR_7 = FUNC_3(VAR_5, 0);
 VAR_8 = FUNC_2(VAR_5, 0);

 if (VAR_7 == 0 || VAR_8 == 0) {
  FUNC_4(VAR_2,
       "Failed to obtain DCR property.\n");
  return -VAR_1;
 }

 if (VAR_8 != VAR_4) {
  FUNC_4(VAR_2,
       "Unexpected DCR length %d, expected %d.\n",
       VAR_8, VAR_4);
  return -VAR_1;
 }



 *VAR_6 = FUNC_1(VAR_5, VAR_7, VAR_8);

 if (!FUNC_0(*VAR_6)) {
  FUNC_4(VAR_3, "Failed to map DCRs.\n");
      return -VAR_1;
 }

 return 0;
}
