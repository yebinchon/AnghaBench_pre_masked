
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pat {size_t len; char const* pat; } ;
struct TYPE_3__ {size_t rm_so; size_t rm_eo; } ;
typedef TYPE_1__ regmatch_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,char const*) ;
 unsigned long FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,size_t) ;
 char* FUNC_4 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_5(const struct pat *VAR_4, const char *VAR_5, size_t VAR_6,
    regmatch_t VAR_7[])
{
 char *(*VAR_8)(const char *, const char *);
 char *VAR_9, *VAR_10;
 const char *VAR_11;
 size_t VAR_12, VAR_13, VAR_14, VAR_15;

 if (VAR_3 & VAR_1)
  VAR_8 = FUNC_1;
 else
  VAR_8 = FUNC_4;
 VAR_12 = 0;
 VAR_14 = VAR_7[0].rm_so;
 VAR_15 = VAR_7[0].rm_eo;
 if (VAR_14 >= VAR_15)
  return (VAR_2);
 VAR_10 = FUNC_3(VAR_5, VAR_15);
 if (VAR_10 == ((void*)0))
  return (VAR_0);
 for (VAR_13 = 0; VAR_14 < VAR_15;) {
  VAR_11 = (VAR_10 + VAR_14);
  if ((unsigned long)VAR_4->len > FUNC_2(VAR_11))
   break;
  VAR_9 = VAR_8(VAR_11, VAR_4->pat);




  if (VAR_9 == ((void*)0))
   break;
  ++VAR_13;

  if (VAR_6 > 0) {
   VAR_7[VAR_12].rm_so = VAR_14 + (VAR_9 - VAR_11);
   VAR_7[VAR_12].rm_eo = VAR_7[VAR_12].rm_so + VAR_4->len;
   if (++VAR_12 == VAR_6)
    break;
   VAR_14 = VAR_7[VAR_12].rm_so + 1;
  } else

   break;
 }
 FUNC_0(VAR_10);
 if (VAR_13 > 0 && VAR_6 > 0)
  for (VAR_13 = VAR_12; VAR_13 < VAR_6; ++VAR_13)
   VAR_7[VAR_13].rm_so = VAR_7[VAR_13].rm_eo = -1;

 return (VAR_13 > 0 ? 0 : VAR_2);
}
