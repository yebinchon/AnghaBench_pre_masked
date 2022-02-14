
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct suffix_match {int len; int start; int conf_pos; } ;


 scalar_t__ FUNC_0 (char const*,char const*) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, const char *VAR_1,
     int VAR_2, int VAR_3, int VAR_4,
     struct suffix_match *VAR_5)
{




 int VAR_6 = VAR_5->len < VAR_2 ? VAR_5->start : VAR_5->start-1;
 int VAR_7;
 for (VAR_7 = VAR_3; VAR_7 <= VAR_6; VAR_7++)
  if (FUNC_0(VAR_0 + VAR_7, VAR_1)) {
   VAR_5->conf_pos = VAR_4;
   VAR_5->start = VAR_7;
   VAR_5->len = VAR_2;
   break;
  }
}
