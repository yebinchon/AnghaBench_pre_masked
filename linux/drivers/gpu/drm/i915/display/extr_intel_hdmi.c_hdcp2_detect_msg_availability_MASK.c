
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_digital_port {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (struct intel_digital_port*,int*) ;

__attribute__((used)) static inline
int FUNC_4(struct intel_digital_port *VAR_2,
      u8 VAR_3, bool *VAR_4,
      ssize_t *VAR_5)
{
 u8 VAR_6[VAR_0];
 int VAR_7;

 VAR_7 = FUNC_3(VAR_2, VAR_6);
 if (VAR_7 < 0) {
  FUNC_0("rx_status read failed. Err %d\n", VAR_7);
  return VAR_7;
 }

 *VAR_5 = ((FUNC_1(VAR_6[1]) << 8) |
    VAR_6[0]);

 if (VAR_3 == VAR_1)
  *VAR_4 = (FUNC_2(VAR_6[1]) &&
        *VAR_5);
 else
  *VAR_4 = *VAR_5;

 return 0;
}
