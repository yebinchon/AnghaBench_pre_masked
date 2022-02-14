
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snapshot {char* start; char* eof; } ;


 int FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (char const*,char const*) ;
 char* FUNC_2 (char const*,char const*) ;

__attribute__((used)) static const char *FUNC_3(struct snapshot *VAR_0,
        const char *VAR_1, int VAR_2)
{
 const char *VAR_3 = VAR_0->start;





 const char *VAR_4 = VAR_0->eof;

 while (VAR_3 != VAR_4) {
  const char *VAR_5, *VAR_6;
  int VAR_7;

  VAR_5 = VAR_3 + (VAR_4 - VAR_3) / 2;
  VAR_6 = FUNC_2(VAR_3, VAR_5);
  VAR_7 = FUNC_0(VAR_6, VAR_1);
  if (VAR_7 < 0) {
   VAR_3 = FUNC_1(VAR_5, VAR_4);
  } else if (VAR_7 > 0) {
   VAR_4 = VAR_6;
  } else {
   return VAR_6;
  }
 }

 if (VAR_2)
  return ((void*)0);
 else
  return VAR_3;
}
