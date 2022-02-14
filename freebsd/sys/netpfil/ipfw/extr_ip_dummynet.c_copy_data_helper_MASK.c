
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int sched_nr; } ;
struct dn_schk {TYPE_4__ sch; struct dn_fsk* fs; int profile; TYPE_4__ link; } ;
struct TYPE_7__ {int fs_nr; } ;
struct dn_fsk {TYPE_3__ fs; } ;
struct copy_args {scalar_t__ type; int flags; int end; int start; TYPE_2__* extra; } ;
struct TYPE_5__ {int len; } ;
struct TYPE_6__ {int* r; TYPE_1__ o; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct copy_args*,struct dn_fsk*,int ) ;
 scalar_t__ FUNC_1 (struct copy_args*,struct dn_schk*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_4__*,char*,int) ;
 scalar_t__ FUNC_3 (struct copy_args*,int ) ;
 int FUNC_4 (struct copy_args*,struct dn_fsk*,int ) ;
 int FUNC_5 (struct copy_args*,struct dn_schk*,int ) ;

__attribute__((used)) static int
FUNC_6(void *VAR_8, void *VAR_9)
{
 struct copy_args *VAR_10 = VAR_9;
 uint32_t *VAR_11 = VAR_10->extra->r;
 uint32_t *VAR_12;
 int VAR_13;

 VAR_12 = (uint32_t *)((char *)(VAR_10->extra) + VAR_10->extra->o.len);

 if (VAR_10->type == VAR_5 || VAR_10->type == VAR_7) {

  struct dn_schk *VAR_14 = VAR_8;

  VAR_13 = VAR_14->sch.sched_nr;
  if (VAR_10->type == VAR_7 && VAR_13 >= VAR_6)
   return 0;
  if (VAR_10->type == VAR_5 && VAR_13 <= VAR_6)
      return 0;


  for (;VAR_11 < VAR_12; VAR_11 += 2) {
   if (VAR_13 < VAR_11[0] || VAR_13 > VAR_11[1])
    continue;

   if (VAR_10->flags & VAR_2) {
    if (FUNC_2(VAR_10->start, VAR_10->end,
        &VAR_14->link, "link", VAR_13))
     return VAR_0;
    if (FUNC_3(VAR_10, VAR_14->profile))
     return VAR_0;
    if (FUNC_0(VAR_10, VAR_14->fs, 0))
     return VAR_0;
   }
   if (VAR_10->flags & VAR_3) {
    if (FUNC_2(VAR_10->start, VAR_10->end,
        &VAR_14->sch, "sched", VAR_13))
     return VAR_0;

    if (FUNC_1(VAR_10, VAR_14, 0))
     return VAR_0;
   }
   if (VAR_10->flags & VAR_1)
    FUNC_5(VAR_10, VAR_14, 0);
   break;
  }
 } else if (VAR_10->type == VAR_4) {

  struct dn_fsk *VAR_15 = VAR_8;

  VAR_13 = VAR_15->fs.fs_nr;
  if (VAR_13 >= VAR_6)
   return 0;

  for (;VAR_11 < VAR_12; VAR_11 += 2) {
   if (VAR_13 < VAR_11[0] || VAR_13 > VAR_11[1])
    continue;
   if (FUNC_0(VAR_10, VAR_15, 0))
    return VAR_0;
   FUNC_4(VAR_10, VAR_15, 0);
   break;
  }
 }
 return 0;
}
