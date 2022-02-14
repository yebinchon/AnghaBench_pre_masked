
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypt_find_op {int crid; char* name; } ;
typedef int * device_t ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,size_t) ;

__attribute__((used)) static int
FUNC_4(struct crypt_find_op *VAR_1)
{
 device_t VAR_2;
 size_t VAR_3 = sizeof VAR_1->name;

 if (VAR_1->crid != -1) {
  VAR_2 = FUNC_0(VAR_1->crid);
  if (VAR_2 == ((void*)0))
   return (VAR_0);
  FUNC_3(VAR_1->name, FUNC_2(VAR_2), VAR_3);
  VAR_1->name[VAR_3 - 1] = '\x0';
 } else {
  VAR_1->name[VAR_3 - 1] = '\x0';
  VAR_1->crid = FUNC_1(VAR_1->name);
  if (VAR_1->crid == -1)
   return (VAR_0);
 }
 return (0);
}
