
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int sched_priority; } ;
typedef int p ;
typedef int cpuset_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct sched_param*,int) ;
 int VAR_2 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int,int *) ;
 scalar_t__ FUNC_6 (int ,int ,struct sched_param*) ;
 scalar_t__ FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(int VAR_3)
{
        cpuset_t VAR_4;
 struct sched_param VAR_5;

        if (VAR_3 == -1)
                return 0;


        FUNC_1(&VAR_4);
        FUNC_0(VAR_3, &VAR_4);

        if (FUNC_5(FUNC_4(), sizeof(cpuset_t), &VAR_4) != 0) {
                FUNC_2("Unable to set affinity: %s", FUNC_8(VAR_2));
        }
 if (FUNC_7(VAR_0, 0, -10)) {;
                FUNC_2("Unable to set priority: %s", FUNC_8(VAR_2));
 }
 FUNC_3(&VAR_5, sizeof(VAR_5));
 VAR_5.sched_priority = 10;

 if (FUNC_6(0, VAR_1, &VAR_5)) {
                FUNC_2("Unable to set scheduler: %s", FUNC_8(VAR_2));
 }
        return 0;
}
