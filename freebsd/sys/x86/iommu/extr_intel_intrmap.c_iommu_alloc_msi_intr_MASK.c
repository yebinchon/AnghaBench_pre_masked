
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vmem_addr_t ;
typedef size_t u_int ;
struct dmar_unit {int irtids; int ir_enabled; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct dmar_unit* FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,size_t,int,size_t*) ;

int
FUNC_3(device_t VAR_3, u_int *VAR_4, u_int VAR_5)
{
 struct dmar_unit *VAR_6;
 vmem_addr_t VAR_7;
 u_int VAR_8, VAR_9;
 int VAR_10;

 VAR_6 = FUNC_1(VAR_3, ((void*)0), ((void*)0));
 if (VAR_6 == ((void*)0) || !VAR_6->ir_enabled) {
  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
   VAR_4[VAR_9] = -1;
  return (VAR_0);
 }

 VAR_10 = FUNC_2(VAR_6->irtids, VAR_5, VAR_1 | VAR_2,
     &VAR_7);
 if (VAR_10 != 0) {
  FUNC_0(VAR_10 != VAR_0,
      ("impossible EOPNOTSUPP from vmem"));
  return (VAR_10);
 }
 VAR_8 = VAR_7;
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  VAR_4[VAR_9] = VAR_8 + VAR_9;
 return (0);
}
