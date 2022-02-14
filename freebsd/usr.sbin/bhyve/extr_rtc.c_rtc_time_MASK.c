
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct vmctx {int dummy; } ;
struct tm {int dummy; } ;


 int FUNC_0 (int *,struct tm*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tm*) ;

__attribute__((used)) static time_t
FUNC_3(struct vmctx *VAR_0, int VAR_1)
{
 struct tm VAR_2;
 time_t VAR_3;

 FUNC_1(&VAR_3);
 if (VAR_1) {
  FUNC_0(&VAR_3, &VAR_2);
  VAR_3 = FUNC_2(&VAR_2);
 }
 return (VAR_3);
}
