
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(void)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_1);
 if (VAR_2) {
  FUNC_0("Unable to register transient exception store type");
  return VAR_2;
 }

 VAR_2 = FUNC_1(&VAR_0);
 if (VAR_2) {
  FUNC_0("Unable to register old-style transient "
         "exception store type");
  FUNC_2(&VAR_1);
  return VAR_2;
 }

 return VAR_2;
}
