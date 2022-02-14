
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int emit_config_values; int set_config_value; int allow_migrations; int tick; int residency; int get_hint; int invalidate_mapping; int load_mapping; int clear_dirty; int set_dirty; int complete_background_work; int get_background_work; int lookup_with_work; int lookup; int destroy; } ;
struct smq_policy {TYPE_1__ policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_0(struct smq_policy *VAR_15, bool VAR_16)
{
 VAR_15->policy.destroy = VAR_5;
 VAR_15->policy.lookup = VAR_10;
 VAR_15->policy.lookup_with_work = VAR_11;
 VAR_15->policy.get_background_work = VAR_6;
 VAR_15->policy.complete_background_work = VAR_4;
 VAR_15->policy.set_dirty = VAR_13;
 VAR_15->policy.clear_dirty = VAR_3;
 VAR_15->policy.load_mapping = VAR_9;
 VAR_15->policy.invalidate_mapping = VAR_8;
 VAR_15->policy.get_hint = VAR_7;
 VAR_15->policy.residency = VAR_12;
 VAR_15->policy.tick = VAR_14;
 VAR_15->policy.allow_migrations = VAR_2;

 if (VAR_16) {
  VAR_15->policy.set_config_value = VAR_1;
  VAR_15->policy.emit_config_values = VAR_0;
 }
}
