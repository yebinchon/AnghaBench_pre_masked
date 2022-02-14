
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (unsigned long long) ;
 double FUNC_1 (unsigned long long) ;
 double FUNC_2 (unsigned long long) ;
 double FUNC_3 (unsigned long long) ;
 double FUNC_4 (unsigned long long) ;
 int FUNC_5 (char*,int,char*,double) ;
 char* FUNC_6 (int) ;

char *
FUNC_7 (unsigned long long VAR_0)
{
  char *VAR_1 = FUNC_6 (sizeof (char) * 12);
  if (VAR_0 >= (1ULL << 50))
    FUNC_5 (VAR_1, 12, "%.2f PiB", (double) (VAR_0) / FUNC_3 (1ULL));
  else if (VAR_0 >= (1ULL << 40))
    FUNC_5 (VAR_1, 12, "%.2f TiB", (double) (VAR_0) / FUNC_4 (1ULL));
  else if (VAR_0 >= (1ULL << 30))
    FUNC_5 (VAR_1, 12, "%.2f GiB", (double) (VAR_0) / FUNC_0 (1ULL));
  else if (VAR_0 >= (1ULL << 20))
    FUNC_5 (VAR_1, 12, "%.2f MiB", (double) (VAR_0) / FUNC_2 (1ULL));
  else if (VAR_0 >= (1ULL << 10))
    FUNC_5 (VAR_1, 12, "%.2f KiB", (double) (VAR_0) / FUNC_1 (1ULL));
  else
    FUNC_5 (VAR_1, 12, "%.1f   B", (double) (VAR_0));

  return VAR_1;
}
