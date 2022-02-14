
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 int FUNC_0 (char*,int,char*,double) ;
 char* FUNC_1 (int) ;

char *
FUNC_2 (unsigned long long VAR_5)
{
  char *VAR_6 = FUNC_1 (sizeof (char) * 11);
  if (VAR_5 >= VAR_0)
    FUNC_0 (VAR_6, 11, "%.2f  d", (double) (VAR_5) / VAR_0);
  else if (VAR_5 >= VAR_1)
    FUNC_0 (VAR_6, 11, "%.2f hr", (double) (VAR_5) / VAR_1);
  else if (VAR_5 >= VAR_3)
    FUNC_0 (VAR_6, 11, "%.2f mn", (double) (VAR_5) / VAR_3);
  else if (VAR_5 >= VAR_4)
    FUNC_0 (VAR_6, 11, "%.2f  s", (double) (VAR_5) / VAR_4);
  else if (VAR_5 >= VAR_2)
    FUNC_0 (VAR_6, 11, "%.2f ms", (double) (VAR_5) / VAR_2);
  else
    FUNC_0 (VAR_6, 11, "%.2f us", (double) (VAR_5));

  return VAR_6;
}
