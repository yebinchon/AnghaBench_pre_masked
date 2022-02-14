
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;


 int FUNC_0 (int*,struct tm*) ;
 int FUNC_1 (struct tm*) ;

__attribute__((used)) static int FUNC_2(time_t VAR_0, struct tm *VAR_1)
{
 time_t VAR_2;
 int VAR_3, VAR_4;

 FUNC_0(&VAR_0, VAR_1);
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == -1)
  return 0;
 if (VAR_2 < VAR_0) {
  VAR_4 = -1;
  VAR_3 = VAR_0 - VAR_2;
 } else {
  VAR_4 = 1;
  VAR_3 = VAR_2 - VAR_0;
 }
 VAR_3 /= 60;
 VAR_3 = (VAR_3 % 60) + ((VAR_3 / 60) * 100);
 return VAR_3 * VAR_4;
}
