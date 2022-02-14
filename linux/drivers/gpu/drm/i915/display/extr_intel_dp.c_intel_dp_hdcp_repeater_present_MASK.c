
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_digital_port {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct intel_digital_port*,int*) ;

__attribute__((used)) static
int FUNC_1(struct intel_digital_port *VAR_1,
       bool *VAR_2)
{
 ssize_t VAR_3;
 u8 VAR_4;

 VAR_3 = FUNC_0(VAR_1, &VAR_4);
 if (VAR_3)
  return VAR_3;

 *VAR_2 = VAR_4 & VAR_0;
 return 0;
}
