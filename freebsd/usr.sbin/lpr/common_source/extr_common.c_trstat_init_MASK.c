
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {char* jobnum; int jobdfnum; int tr_timestr; int tr_start; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,size_t) ;
 int FUNC_1 (char*,int ,int) ;
 char* FUNC_2 (char const*,char) ;

void
FUNC_3(struct printer *VAR_1, const char *VAR_2, int VAR_3)
{
 register const char *VAR_4;
 register char *VAR_5, *VAR_6;
 FUNC_1(VAR_1->jobnum, 0, sizeof(VAR_1->jobnum));
 VAR_1->jobnum[0] = '0';
 VAR_4 = FUNC_2(VAR_2, '/');
 if (VAR_4 == ((void*)0))
  VAR_4 = VAR_2;
 VAR_5 = &(VAR_1->jobnum[0]);
 VAR_6 = VAR_5 + 5;
 while (*VAR_4 != '\0' && (*VAR_4 < '0' || *VAR_4 > '9'))
  VAR_4++;
 while (*VAR_4 >= '0' && *VAR_4 <= '9' && VAR_5 < VAR_6)
  *(VAR_5++) = *(VAR_4++);



 VAR_1->jobdfnum = VAR_3;
 FUNC_0(&VAR_1->tr_start, VAR_1->tr_timestr, (size_t)VAR_0);

 return;
}
