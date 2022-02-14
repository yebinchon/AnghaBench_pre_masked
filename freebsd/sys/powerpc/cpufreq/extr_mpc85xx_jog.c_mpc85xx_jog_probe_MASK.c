
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_compat_data {int * ocd_str; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct ofw_compat_data* FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1)
{
 struct ofw_compat_data *VAR_2;

 VAR_2 = FUNC_1();
 if (VAR_2 == ((void*)0) || VAR_2->ocd_str == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_1, "Freescale CPU Jogger");
 return (0);
}
