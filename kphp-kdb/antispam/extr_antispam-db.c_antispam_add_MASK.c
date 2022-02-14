
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pattern_t ;
struct TYPE_4__ {int id; } ;
typedef TYPE_1__ antispam_pattern_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__,char const*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int * FUNC_2 (int ,int ) ;

bool FUNC_3 (antispam_pattern_t VAR_2, const char *VAR_3, bool VAR_4) {
  pattern_t *VAR_5 = FUNC_2 (VAR_1, VAR_2.id);
  if (VAR_5 != 0) {
    if (!VAR_4) {
      return VAR_0;
    }
    FUNC_1 (VAR_2.id, VAR_5);
  }
  return FUNC_0 (VAR_2, VAR_3);
}
