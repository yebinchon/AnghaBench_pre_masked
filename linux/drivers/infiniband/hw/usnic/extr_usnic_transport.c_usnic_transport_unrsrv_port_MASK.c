
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef enum usnic_transport_type { ____Placeholder_usnic_transport_type } usnic_transport_type ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (int) ;

void FUNC_7(enum usnic_transport_type VAR_3, u16 VAR_4)
{
 if (VAR_3 == VAR_0) {
  FUNC_1(&VAR_2);
  if (!VAR_4) {
   FUNC_5("Unreserved invalid port num 0 for %s\n",
     FUNC_6(VAR_3));
   goto out_roce_custom;
  }

  if (!FUNC_3(VAR_4, VAR_1)) {
   FUNC_5("Unreserving invalid %hu for %s\n",
     VAR_4,
     FUNC_6(VAR_3));
   goto out_roce_custom;
  }
  FUNC_0(VAR_1, VAR_4, 1);
  FUNC_4("Freeing port %hu for %s\n", VAR_4,
    FUNC_6(VAR_3));
out_roce_custom:
  FUNC_2(&VAR_2);
 } else {
  FUNC_5("Freeing invalid port %hu for %d\n", VAR_4, VAR_3);
 }
}
