
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_digital_port {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct intel_digital_port*,int ,int *,int ) ;

__attribute__((used)) static
int FUNC_2(struct intel_digital_port *VAR_2,
     u8 *VAR_3)
{
 int VAR_4;
 VAR_4 = FUNC_1(VAR_2, VAR_1,
       VAR_3, VAR_0);
 if (VAR_4)
  FUNC_0("Read bstatus over DDC failed (%d)\n", VAR_4);
 return VAR_4;
}
