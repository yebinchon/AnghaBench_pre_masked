
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_header {int dummy; } ;


 scalar_t__ FUNC_0 (struct file_header*,struct file_header*) ;
 int FUNC_1 (struct file_header**,size_t,size_t) ;

__attribute__((used)) static void
FUNC_2(struct file_header **VAR_0, size_t VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 size_t VAR_4;

 VAR_3 = VAR_1 + VAR_1 + 1;
 VAR_4 = VAR_3 + 1;

 if (VAR_3 < VAR_2) {
  size_t VAR_5;

  VAR_5 = VAR_3;

  if ((VAR_4 < VAR_2) &&
      (FUNC_0(VAR_0[VAR_3],
      VAR_0[VAR_4]) > 0))
   VAR_5 = VAR_4;
  if (FUNC_0(VAR_0[VAR_1], VAR_0[VAR_5]) > 0) {
   FUNC_1(VAR_0, VAR_1, VAR_5);
   FUNC_2(VAR_0, VAR_5, VAR_2);
  }
 }
}
