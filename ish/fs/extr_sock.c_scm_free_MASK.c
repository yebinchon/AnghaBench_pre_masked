
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm {unsigned int num_fds; int * fds; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct scm*) ;

__attribute__((used)) static void FUNC_2(struct scm *VAR_0) {
    for (unsigned VAR_1 = 0; VAR_1 < VAR_0->num_fds; VAR_1++)
        FUNC_0(VAR_0->fds[VAR_1]);
    FUNC_1(VAR_0);
}
