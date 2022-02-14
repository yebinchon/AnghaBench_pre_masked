
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pid; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,long,long) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,long) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (int ) ;
 long FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,long) ;

__attribute__((used)) static void FUNC_6(long VAR_4)
{
 long VAR_5;

 if (FUNC_2(VAR_3, VAR_4)) {
  FUNC_5(VAR_3, VAR_4);
  return;
 }
 VAR_5 = FUNC_4(FUNC_3(VAR_2));
 FUNC_0(VAR_0,
       "%d: nice value %ld not allowed use %ld instead\n",
        VAR_3->pid, VAR_4, VAR_5);
 FUNC_5(VAR_3, VAR_5);
 if (VAR_5 <= VAR_1)
  return;
 FUNC_1("%d RLIMIT_NICE not set\n", VAR_3->pid);
}
