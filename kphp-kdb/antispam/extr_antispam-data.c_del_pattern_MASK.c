
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
typedef TYPE_1__ lev_antispam_del_pattern_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_2 (lev_antispam_del_pattern_t* VAR_3) {
  if (FUNC_0 (VAR_3->id)) {
    if (VAR_2 >= 3) {
      FUNC_1 ("$1del pattern[%10d]$^\n", VAR_3->id);
    }
    return VAR_1;
  }
  if (VAR_2 >= 3) {
    FUNC_1 ("$5del pattern[%10d] (rejected: possibly wrong id)$^\n", VAR_3->id);
  }
  return VAR_0;
}
