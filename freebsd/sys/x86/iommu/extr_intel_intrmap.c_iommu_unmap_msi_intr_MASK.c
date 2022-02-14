
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct dmar_unit {int dummy; } ;
typedef int device_t ;


 struct dmar_unit* FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (struct dmar_unit*,int) ;

int
FUNC_2(device_t VAR_0, u_int VAR_1)
{
 struct dmar_unit *VAR_2;

 if (VAR_1 == -1)
  return (0);
 VAR_2 = FUNC_0(VAR_0, ((void*)0), ((void*)0));
 return (FUNC_1(VAR_2, VAR_1));
}
