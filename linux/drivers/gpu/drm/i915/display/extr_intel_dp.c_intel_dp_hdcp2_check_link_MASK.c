
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_digital_port {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct intel_digital_port*,int *) ;

__attribute__((used)) static
int FUNC_4(struct intel_digital_port *VAR_3)
{
 u8 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;

 if (FUNC_2(VAR_4))
  VAR_5 = VAR_1;
 else if (FUNC_0(VAR_4))
  VAR_5 = VAR_0;
 else if (FUNC_1(VAR_4))
  VAR_5 = VAR_2;

 return VAR_5;
}
