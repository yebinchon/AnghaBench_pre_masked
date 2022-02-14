
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_header {struct file_header* si; int * fr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct file_header*) ;
 int FUNC_2 (struct file_header*) ;

__attribute__((used)) static void
FUNC_3(struct file_header **VAR_0)
{

 if (VAR_0 && *VAR_0) {
  if ((*VAR_0)->fr) {
   FUNC_0((*VAR_0)->fr);
   (*VAR_0)->fr = ((void*)0);
  }
  if ((*VAR_0)->si) {
   FUNC_2((*VAR_0)->si);
   FUNC_1((*VAR_0)->si);
   (*VAR_0)->si = ((void*)0);
  }
  FUNC_1(*VAR_0);
  *VAR_0 = ((void*)0);
 }
}
