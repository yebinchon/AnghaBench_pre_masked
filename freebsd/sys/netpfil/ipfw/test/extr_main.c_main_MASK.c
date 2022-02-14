
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
struct cfg_s {int ac; char** av; double _enqueue; int flows; scalar_t__ wfi; scalar_t__* q_wfi; char* fs_config; scalar_t__ dequeue; struct timeval time; int name; int th_max; int th_min; } ;
typedef int c ;


 int FUNC_0 (char*,int ,int,...) ;
 int FUNC_1 (int,char*,int,...) ;
 int FUNC_2 (struct cfg_s*,int) ;
 int FUNC_3 (struct cfg_s*) ;
 int FUNC_4 (struct timeval*,int *) ;
 int FUNC_5 (struct cfg_s*) ;
 int FUNC_6 (struct cfg_s*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (struct timeval*,struct timeval*,struct timeval*) ;

int
FUNC_9(int VAR_0, char *VAR_1[])
{
 struct cfg_s VAR_2;
 double VAR_3;
 int VAR_4;
 char VAR_5[40];

 FUNC_2(&VAR_2, sizeof(VAR_2));
 VAR_2.ac = VAR_0;
 VAR_2.av = VAR_1;
 FUNC_5(&VAR_2);
 FUNC_4(&VAR_2.time, ((void*)0));
 FUNC_0("th_min %d th_max %d", VAR_2.th_min, VAR_2.th_max);

 FUNC_6(&VAR_2);
 {
  struct timeval VAR_6;
  FUNC_4(&VAR_6, ((void*)0));
  FUNC_8(&VAR_6, &VAR_2.time, &VAR_2.time);
 }
 VAR_3 = VAR_2.time.tv_sec*1000000 + VAR_2.time.tv_usec;
 VAR_3 *= 1000;
 VAR_3 /= VAR_2._enqueue;
 FUNC_7(VAR_5, "1::%d", VAR_2.flows);
 for (VAR_4 = 0; VAR_4 < VAR_2.flows; VAR_4++) {
  if (VAR_2.wfi < VAR_2.q_wfi[VAR_4])
   VAR_2.wfi = VAR_2.q_wfi[VAR_4];
 }
 FUNC_0("sched=%-12s\ttime=%d.%03d sec (%.0f nsec) enq %lu %lu deq\n"
    "\twfi=%.02f\tflow=%-16s",
    VAR_2.name, (int)VAR_2.time.tv_sec, (int)VAR_2.time.tv_usec / 1000, VAR_3,
    (unsigned long)VAR_2._enqueue, (unsigned long)VAR_2.dequeue, VAR_2.wfi,
    VAR_2.fs_config ? VAR_2.fs_config : VAR_5);
 FUNC_3(&VAR_2);
 FUNC_1(1, "done ac %d av %p", VAR_0, VAR_1);
 for (VAR_4=0; VAR_4 < VAR_0; VAR_4++)
  FUNC_1(1, "arg %d %s", VAR_4, VAR_1[VAR_4]);
 return 0;
}
