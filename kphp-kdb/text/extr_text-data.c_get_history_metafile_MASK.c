
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int history_mf; } ;
typedef TYPE_1__ user_t ;
struct TYPE_6__ {char* data; } ;
typedef TYPE_2__ core_mf_t ;


 TYPE_2__* FUNC_0 (int ) ;

inline char *FUNC_1 (user_t *VAR_0) {
  core_mf_t *VAR_1 = FUNC_0 (VAR_0->history_mf);
  return VAR_1 ? VAR_1->data : 0;
}
