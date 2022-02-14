
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int virt_addr_t ;
typedef int u_int8_t ;
typedef size_t u_int32_t ;
typedef size_t u_int ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(virt_addr_t VAR_1,
     u_int8_t VAR_2, u_int8_t * VAR_3, u_int32_t VAR_4)
{
 u_int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_3[VAR_5] = FUNC_1(VAR_1, VAR_2);
  ++VAR_2;
  FUNC_0(VAR_0);
 }
}
