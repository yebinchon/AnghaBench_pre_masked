
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_digital_port {int dummy; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct intel_digital_port*,int ,int *,int ) ;

__attribute__((used)) static
int FUNC_3(struct intel_digital_port *VAR_3,
          int VAR_4, u32 *VAR_5)
{
 int VAR_6;

 if (VAR_4 >= VAR_0)
  return -VAR_2;

 VAR_6 = FUNC_2(VAR_3, FUNC_1(VAR_4),
       VAR_5, VAR_1);
 if (VAR_6)
  FUNC_0("Read V'[%d] over DDC failed (%d)\n", VAR_4, VAR_6);
 return VAR_6;
}
