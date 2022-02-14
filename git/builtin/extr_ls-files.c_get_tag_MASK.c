
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {int ce_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char*,char const*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char FUNC_2 (char const) ;

__attribute__((used)) static const char *FUNC_3(const struct cache_entry *VAR_4, const char *VAR_5)
{
 static char VAR_6[4];

 if (VAR_5 && *VAR_5 && ((VAR_3 && (VAR_4->ce_flags & VAR_1)) ||
  (VAR_2 && (VAR_4->ce_flags & VAR_0)))) {
  FUNC_1(VAR_6, VAR_5, 3);

  if (FUNC_0(VAR_5[0])) {
   VAR_6[0] = FUNC_2(VAR_5[0]);
  } else if (VAR_5[0] == '?') {
   VAR_6[0] = '!';
  } else {
   VAR_6[0] = 'v';
   VAR_6[1] = VAR_5[0];
   VAR_6[2] = ' ';
   VAR_6[3] = 0;
  }

  VAR_5 = VAR_6;
 }

 return VAR_5;
}
