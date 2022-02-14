
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_hdcp_shim {int (* read_bksv ) (struct intel_digital_port*,int *) ;} ;
struct intel_digital_port {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct intel_digital_port*,int *) ;

__attribute__((used)) static
int FUNC_3(struct intel_digital_port *VAR_1,
          const struct intel_hdcp_shim *VAR_2, u8 *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 2;


 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_4 = VAR_2->read_bksv(VAR_1, VAR_3);
  if (VAR_4)
   return VAR_4;
  if (FUNC_1(VAR_3))
   break;
 }
 if (VAR_5 == VAR_6) {
  FUNC_0("Bksv is invalid\n");
  return -VAR_0;
 }

 return 0;
}
