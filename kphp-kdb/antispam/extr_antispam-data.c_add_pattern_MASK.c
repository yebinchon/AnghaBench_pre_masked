
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ flags; int uahash; int ip; int id; } ;
typedef TYPE_1__ antispam_pattern_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,char*,int ,int ,int ,unsigned int,int,char*,char*,int) ;
 int VAR_3 ;

__attribute__((used)) static inline bool FUNC_3 (antispam_pattern_t VAR_4, int VAR_5, char* VAR_6, bool VAR_7, char *VAR_8) {
  FUNC_1 (VAR_6[VAR_5] == 0);
  if (FUNC_0 (VAR_4, VAR_6, VAR_7)) {
    if (VAR_3 >= 3) {
      FUNC_2 ("$2%s pattern_%s[%10d]$3 %10u,%10u,%5u,$1|$3%.*s%s$1| = %d$^\n",
        (VAR_7 ? "set" : "add"), VAR_8, VAR_4.id, VAR_4.ip, VAR_4.uahash, (unsigned)VAR_4.flags,
        (VAR_5 <= VAR_1 ? VAR_5 : VAR_1 - 3),
        VAR_6, (VAR_5 <= VAR_1 ? "" : "..."), VAR_5);
    }
    return VAR_2;
  }
  if (VAR_3 >= 3) {
    FUNC_2 ("$5%s pattern_%s[%10d] %10u,%10u,%5u,|%.*s%s| = %d (rejected: possibly wrong id)$^\n",
      (VAR_7 ? "set" : "add"), VAR_8, VAR_4.id, VAR_4.ip, VAR_4.uahash, (unsigned)VAR_4.flags,
      (VAR_5 <= VAR_1 ? VAR_5 : VAR_1 - 3),
      VAR_6, (VAR_5 <= VAR_1 ? "" : "..."), VAR_5);
  }
  return VAR_0;
}
