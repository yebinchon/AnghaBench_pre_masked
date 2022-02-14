
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; int uahash; int ip; int id; } ;
struct TYPE_7__ {int type; int str; TYPE_1__ p; } ;
typedef TYPE_2__ lev_antispam_add_pattern_v1_t ;
typedef int flags_t ;
struct TYPE_8__ {int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_3__ antispam_pattern_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__,int,int ,int,char*) ;

__attribute__((used)) static bool FUNC_1 (lev_antispam_add_pattern_v1_t* VAR_4, bool VAR_5) {
  flags_t VAR_6 = 0;
  VAR_4->p.flags &= 3;
  if (VAR_4->p.flags == VAR_3) {
    VAR_6 |= VAR_1;
  } else if (VAR_4->p.flags == VAR_2) {
    VAR_6 |= VAR_0;
  }
  antispam_pattern_t VAR_7 = {VAR_4->p.id, VAR_4->p.ip, VAR_4->p.uahash, VAR_6};
  return FUNC_0 (VAR_7, (VAR_4->type & 0xFFFF), VAR_4->str, VAR_5, "v1");
}
