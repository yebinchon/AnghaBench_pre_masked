
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iwdp_ifs_struct {int dummy; } ;
typedef TYPE_2__* iwdp_ifs_t ;
struct TYPE_5__ {int type; } ;
struct TYPE_6__ {TYPE_1__ type; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

iwdp_ifs_t FUNC_2() {
  iwdp_ifs_t VAR_1 = (iwdp_ifs_t)FUNC_0(sizeof(struct iwdp_ifs_struct));
  if (VAR_1) {
    FUNC_1(VAR_1, 0, sizeof(struct iwdp_ifs_struct));
    VAR_1->type.type = VAR_0;
  }
  return VAR_1;
}
