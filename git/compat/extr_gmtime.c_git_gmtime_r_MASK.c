
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_mday; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tm* FUNC_0 (int const*,struct tm*) ;
 int FUNC_1 (struct tm*,int ,int) ;

struct tm *FUNC_2(const time_t *VAR_2, struct tm *VAR_3)
{
 struct tm *VAR_4;

 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 VAR_4 = FUNC_0(VAR_2, VAR_3);






 if (VAR_4 && !VAR_4->tm_mday) {
  VAR_4 = ((void*)0);
  VAR_1 = VAR_0;
 }

 return VAR_4;
}
