
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enum_type {int * name; } ;


 int VAR_0 ;
 struct enum_type* FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct enum_type*) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;

struct enum_type *
FUNC_5(char *VAR_2)
{
 struct enum_type *VAR_3;

 if ((VAR_3 = FUNC_0(1, sizeof(struct enum_type))) == ((void*)0)) {
  FUNC_4(VAR_0, "malloc() failed: %s", FUNC_3(VAR_1));
  return (((void*)0));
 }

 if ((VAR_3->name = FUNC_2(VAR_2)) == ((void*)0)) {
  FUNC_4(VAR_0, "malloc() failed: %s", FUNC_3(VAR_1));
  FUNC_1(VAR_3);
  return (((void*)0));
 }

 return (VAR_3);
}
