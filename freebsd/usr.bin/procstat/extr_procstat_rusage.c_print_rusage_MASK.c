
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long ru_maxrss; int ru_stime; int ru_utime; } ;
struct kinfo_proc {char* ki_tid; TYPE_1__ ki_rusage; int ki_comm; int ki_pid; } ;
struct TYPE_5__ {char* ri_name; int ri_scale; int ri_humanize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (long,int ,int ) ;
 int FUNC_3 (char*) ;
 unsigned int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct kinfo_proc*) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int,int ,char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10(struct kinfo_proc *VAR_4)
{
 long *VAR_5;
 unsigned int VAR_6;
 char *VAR_7, *VAR_8;

 FUNC_5(VAR_4);
 FUNC_7("{d:resource/%-14s} {d:usage/%29s}{P:   }\n", "user time",
     FUNC_1(&VAR_4->ki_rusage.ru_utime));
 FUNC_5(VAR_4);
 FUNC_7("{d:resource/%-14s} {d:usage/%29s}{P:   }\n", "system time",
     FUNC_1(&VAR_4->ki_rusage.ru_stime));

 if ((VAR_2 & VAR_1) != 0) {
  FUNC_0(&VAR_8, "%s", VAR_4->ki_tid);
  if (VAR_8 == ((void*)0))
   FUNC_8(1, VAR_0,
       "Failed to allocate memory in print_rusage()");
  FUNC_9(VAR_8);
  FUNC_7("{e:thread_id/%d}", VAR_4->ki_tid);
 } else {
  FUNC_7("{e:process_id/%d}", VAR_4->ki_pid);
  FUNC_7("{e:command/%s}", VAR_4->ki_comm);
 }
 FUNC_7("{e:user time/%s}", FUNC_1(&VAR_4->ki_rusage.ru_utime));
 FUNC_7("{e:system time/%s}", FUNC_1(&VAR_4->ki_rusage.ru_stime));

 VAR_5 = &VAR_4->ki_rusage.ru_maxrss;
 for (VAR_6 = 0; VAR_6 < FUNC_4(VAR_3); VAR_6++) {
  FUNC_5(VAR_4);
  FUNC_0(&VAR_7, "{e:%s/%%D}", VAR_3[VAR_6].ri_name);
  if (VAR_7 == ((void*)0))
   FUNC_8(1, VAR_0,
       "Failed to allocate memory in print_rusage()");
  FUNC_7(VAR_7, *VAR_5);
  FUNC_3(VAR_7);
  FUNC_7("{d:resource/%-32s} {d:usage/%14s}\n",
      VAR_3[VAR_6].ri_name,
      FUNC_2(*VAR_5, VAR_3[VAR_6].ri_humanize,
      VAR_3[VAR_6].ri_scale));
  VAR_5++;
 }
 if ((VAR_2 & VAR_1) != 0) {
  FUNC_6(VAR_8);
  FUNC_3(VAR_8);
 }
}
