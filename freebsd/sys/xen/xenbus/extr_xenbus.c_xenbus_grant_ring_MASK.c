
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int grant_ref_t ;
typedef int device_t ;


 int FUNC_0 (int ,unsigned long,int ,int *) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (int ) ;

int
FUNC_3(device_t VAR_0, unsigned long VAR_1, grant_ref_t *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(
  FUNC_2(VAR_0), VAR_1, 0, VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_0, VAR_3, "granting access to ring page");
  return (VAR_3);
 }

 return (0);
}
