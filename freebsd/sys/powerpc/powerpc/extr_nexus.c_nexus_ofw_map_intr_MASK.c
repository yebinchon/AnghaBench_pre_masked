
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, device_t VAR_1, phandle_t VAR_2, int VAR_3,
    pcell_t *VAR_4)
{
 u_int VAR_5 = FUNC_0(VAR_2, VAR_4[0]);
 if (VAR_3 > 1)
  FUNC_1(VAR_5, VAR_4[1]);
 return (VAR_5);
}
