
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_header {int dummy; } ;


 scalar_t__ FUNC_0 (struct file_header*,struct file_header*) ;
 int FUNC_1 (struct file_header**,size_t,size_t) ;

__attribute__((used)) static void
FUNC_2(struct file_header **VAR_0, size_t VAR_1)
{

 if (VAR_1 > 0) {
  size_t VAR_2;

  VAR_2 = (VAR_1 - 1) >> 1;

  if (FUNC_0(VAR_0[VAR_1], VAR_0[VAR_2]) < 0) {

   FUNC_1(VAR_0, VAR_1, VAR_2);
   FUNC_2(VAR_0, VAR_2);
  }
 }
}
