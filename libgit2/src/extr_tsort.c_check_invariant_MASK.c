
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsort_run {int length; } ;
typedef int ssize_t ;



__attribute__((used)) static int FUNC_0(struct tsort_run *VAR_0, ssize_t VAR_1)
{
 if (VAR_1 < 2)
  return 1;

 else if (VAR_1 == 2) {
  const ssize_t VAR_2 = VAR_0[VAR_1 - 2].length;
  const ssize_t VAR_3 = VAR_0[VAR_1 - 1].length;
  return (VAR_2 > VAR_3);
 } else {
  const ssize_t VAR_4 = VAR_0[VAR_1 - 3].length;
  const ssize_t VAR_5 = VAR_0[VAR_1 - 2].length;
  const ssize_t VAR_6 = VAR_0[VAR_1 - 1].length;
  return !((VAR_4 <= VAR_5 + VAR_6) || (VAR_5 <= VAR_6));
 }
}
