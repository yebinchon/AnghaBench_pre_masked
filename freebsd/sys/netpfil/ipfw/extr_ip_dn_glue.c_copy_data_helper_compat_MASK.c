
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int subtype; } ;
struct TYPE_6__ {scalar_t__ sched_nr; TYPE_2__ oid; } ;
struct dn_schk {TYPE_3__ sch; } ;
struct TYPE_4__ {scalar_t__ fs_nr; } ;
struct dn_fsk {TYPE_1__ fs; } ;
struct copy_args {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct copy_args*,void*) ;
 scalar_t__ FUNC_1 (struct copy_args*,void*) ;

int
FUNC_2(void *VAR_4, void *VAR_5)
{
 struct copy_args *VAR_6 = VAR_5;

 if (VAR_6->type == VAR_1) {
  struct dn_schk *VAR_7 = VAR_4;
  if (VAR_7->sch.oid.subtype != 1 || VAR_7->sch.sched_nr <= VAR_3) {
   return 0;
  }



  if(FUNC_0(VAR_6, VAR_4))
   return VAR_0;
 } else if (VAR_6->type == VAR_2) {
  struct dn_fsk *VAR_8 = VAR_4;
  if (VAR_8->fs.fs_nr >= VAR_3)
   return 0;
  if (FUNC_1(VAR_6, VAR_4))
   return VAR_0;
 }
 return 0;
}
