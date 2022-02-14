
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct thread {int td_name; } ;
struct proc {int dummy; } ;
struct TYPE_8__ {int sg_minthreads; scalar_t__ sg_threadcount; int sg_lock; int sg_lastcreatetime; void* sg_maxthreads; } ;
struct TYPE_7__ {char* sp_name; int sp_groupcount; int sp_maxthreads; int sp_minthreads; TYPE_2__* sp_groups; struct proc* sp_proc; int sp_state; } ;
typedef TYPE_1__ SVCPOOL ;
typedef TYPE_2__ SVCGROUP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct proc* VAR_3 ;
 struct thread* VAR_4 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,int *,int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,char*,char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int VAR_6 ;

void
FUNC_8(SVCPOOL *VAR_7)
{
 int VAR_8, VAR_9;
 struct proc *VAR_10;
 struct thread *VAR_11;
 SVCGROUP *VAR_12;

 VAR_10 = VAR_3;
 VAR_11 = VAR_4;
 FUNC_5(VAR_11->td_name, sizeof(VAR_11->td_name),
     "%s: master", VAR_7->sp_name);
 VAR_7->sp_state = VAR_0;
 VAR_7->sp_proc = VAR_10;


 VAR_7->sp_groupcount = FUNC_0(1, FUNC_1(VAR_1,
     FUNC_1(VAR_7->sp_maxthreads / 2, VAR_5) / 6));
 for (VAR_8 = 0; VAR_8 < VAR_7->sp_groupcount; VAR_8++) {
  VAR_12 = &VAR_7->sp_groups[VAR_8];
  VAR_12->sg_minthreads = FUNC_0(1,
      VAR_7->sp_minthreads / VAR_7->sp_groupcount);
  VAR_12->sg_maxthreads = FUNC_0(1,
      VAR_7->sp_maxthreads / VAR_7->sp_groupcount);
  VAR_12->sg_lastcreatetime = VAR_6;
 }


 VAR_7->sp_groups[0].sg_threadcount++;
 for (VAR_8 = 0; VAR_8 < VAR_7->sp_groupcount; VAR_8++) {
  VAR_12 = &VAR_7->sp_groups[VAR_8];
  for (VAR_9 = ((VAR_8 == 0) ? 1 : 0); VAR_9 < VAR_12->sg_minthreads; VAR_9++)
   FUNC_6(VAR_12);
 }
 FUNC_7(&VAR_7->sp_groups[0], VAR_2);


 for (VAR_8 = 0; VAR_8 < VAR_7->sp_groupcount; VAR_8++) {
  VAR_12 = &VAR_7->sp_groups[VAR_8];
  FUNC_3(&VAR_12->sg_lock);
  while (VAR_12->sg_threadcount > 0)
   FUNC_2(VAR_12, &VAR_12->sg_lock, 0, "svcexit", 0);
  FUNC_4(&VAR_12->sg_lock);
 }
}
