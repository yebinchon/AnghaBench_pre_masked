
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum cpu_sets { ____Placeholder_cpu_sets } cpu_sets ;
typedef int device_t ;
typedef int cpuset_t ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;


 int FUNC_1 (int ,int ,int,size_t,int *) ;
 int * VAR_1 ;
 int FUNC_2 (int ,int*) ;

int
FUNC_3(device_t VAR_2, device_t VAR_3, enum cpu_sets VAR_4, size_t VAR_5,
    cpuset_t *VAR_6)
{
 int VAR_7, VAR_8;

 VAR_8 = FUNC_2(VAR_3, &VAR_7);
 if (VAR_8)
  return (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6));

 switch (VAR_4) {
 case 128:
  if (VAR_5 != sizeof(cpuset_t))
   return (VAR_0);
  *VAR_6 = VAR_1[VAR_7];
  return (0);
 case 129:
  VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  if (VAR_8 != 0)
   return (VAR_8);
  if (VAR_5 != sizeof(cpuset_t))
   return (VAR_0);
  FUNC_0(VAR_6, &VAR_1[VAR_7]);
  return (0);
 default:
  return (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6));
 }
 return (0);
}
