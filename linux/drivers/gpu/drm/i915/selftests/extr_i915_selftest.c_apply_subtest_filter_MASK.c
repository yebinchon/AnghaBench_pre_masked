
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int filter; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int ) ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 char* FUNC_4 (char**,char*) ;

__attribute__((used)) static bool FUNC_5(const char *VAR_2, const char *VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6;
 bool VAR_7 = 1;

 VAR_4 = FUNC_1(VAR_1.filter, VAR_0);
 for (VAR_5 = VAR_4; (VAR_6 = FUNC_4(&VAR_5, ","));) {
  bool VAR_8 = 1;
  char *VAR_9;

  if (*VAR_6 == '!') {
   VAR_8 = 0;
   VAR_6++;
  }

  if (*VAR_6 == '\0')
   continue;

  VAR_9 = FUNC_2(VAR_6, '/');
  if (VAR_9) {
   *VAR_9++ = '\0';
   if (FUNC_3(VAR_6, VAR_2)) {
    if (VAR_8)
     VAR_7 = 0;
    continue;
   }
   VAR_6 = VAR_9;
  }

  if (FUNC_3(VAR_6, VAR_3)) {
   if (VAR_8)
    VAR_7 = 0;
   continue;
  }

  VAR_7 = VAR_8;
  break;
 }
 FUNC_0(VAR_4);

 return VAR_7;
}
