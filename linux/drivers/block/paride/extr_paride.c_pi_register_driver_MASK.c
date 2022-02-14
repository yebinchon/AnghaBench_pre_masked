
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport_driver {char* name; int devmodel; int probe; } ;


 int VAR_0 ;
 int FUNC_0 (struct parport_driver*) ;
 struct parport_driver* FUNC_1 (int,int ) ;
 int FUNC_2 (struct parport_driver*) ;
 int VAR_1 ;

void *FUNC_3(char *VAR_2)
{
 struct parport_driver *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->name = VAR_2;
 VAR_3->probe = VAR_1;
 VAR_3->devmodel = 1;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }
 return (void *)VAR_3;
}
