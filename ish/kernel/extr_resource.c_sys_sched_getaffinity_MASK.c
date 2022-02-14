
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task {int dummy; } ;
typedef scalar_t__ pid_t_ ;
typedef int int_t ;
typedef int dword_t ;
typedef int cpuset ;
typedef int addr_t ;


 int FUNC_0 (char*,scalar_t__,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int) ;
 struct task* FUNC_4 (scalar_t__) ;
 int VAR_3 ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,char*,int) ;

int_t FUNC_8(pid_t_ VAR_4, dword_t VAR_5, addr_t VAR_6) {
    FUNC_0("sched_getaffinity(%d, %d, %#x)", VAR_4, VAR_5, VAR_6);
    if (VAR_4 != 0) {
        FUNC_2(&VAR_3);
        struct task *VAR_7 = FUNC_4(VAR_4);
        FUNC_6(&VAR_3);
        if (VAR_7 == ((void*)0))
            return VAR_1;
    }

    unsigned VAR_8 = FUNC_5(VAR_2);
    if (VAR_8 > VAR_5 * 8)
        VAR_8 = VAR_5 * 8;
    char VAR_9[VAR_5];
    FUNC_3(VAR_9, 0, sizeof(VAR_9));
    for (unsigned VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
        FUNC_1(VAR_10, VAR_9);
    if (FUNC_7(VAR_6, VAR_9, VAR_5))
        return VAR_0;
    return 0;
}
