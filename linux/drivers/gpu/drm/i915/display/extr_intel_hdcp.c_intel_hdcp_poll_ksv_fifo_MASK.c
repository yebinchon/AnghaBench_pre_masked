
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_hdcp_shim {int (* read_ksv_ready ) (struct intel_digital_port*,int*) ;} ;
struct intel_digital_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int,int) ;
 int FUNC_1 (struct intel_digital_port*,int*) ;

__attribute__((used)) static int FUNC_2(struct intel_digital_port *VAR_1,
        const struct intel_hdcp_shim *VAR_2)
{
 int VAR_3, VAR_4;
 bool VAR_5;


 VAR_3 = FUNC_0(VAR_4 = VAR_2->read_ksv_ready(VAR_1,
        &VAR_5),
    VAR_4 || VAR_5, 5 * 1000 * 1000, 1000,
    100 * 1000);
 if (VAR_3)
  return VAR_3;
 if (VAR_4)
  return VAR_4;
 if (!VAR_5)
  return -VAR_0;

 return 0;
}
