
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * member_0; } ;
struct TYPE_4__ {TYPE_2__ member_0; } ;
struct TYPE_6__ {char* member_1; int member_2; int ref; int member_3; TYPE_1__ member_0; } ;
typedef TYPE_3__ node_t ;
typedef int h2o_http2_scheduler_node_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int,int ) ;
 int FUNC_6 (int *,int *,int,int) ;
 int FUNC_7 (int) ;
 char* VAR_0 ;
 scalar_t__ FUNC_8 (char*,char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    h2o_http2_scheduler_node_t VAR_1;
    node_t VAR_2 = {{{((void*)0)}}, "A", 1, 0};
    node_t VAR_3 = {{{((void*)0)}}, "B", 1, 0};
    node_t VAR_4 = {{{((void*)0)}}, "C", 1, 0};

    FUNC_4(&VAR_1);


    FUNC_5(&VAR_2.ref, &VAR_1, 16, 0);
    FUNC_1(&VAR_2.ref);
    FUNC_5(&VAR_3.ref, &VAR_1, 16, 0);
    FUNC_1(&VAR_3.ref);
    FUNC_5(&VAR_4.ref, &VAR_1, 16, 0);
    FUNC_1(&VAR_4.ref);

    VAR_0[0] = '\0';
    FUNC_0(&VAR_1);
    FUNC_7(FUNC_8(VAR_0, "(A16B16C16)") == 0);

    FUNC_6(&VAR_3.ref, &VAR_1, 1, 1);

    VAR_0[0] = '\0';
    FUNC_0(&VAR_1);
    FUNC_7(FUNC_8(VAR_0, "(B1(A16C16))") == 0);

    FUNC_2(&VAR_2.ref);
    FUNC_2(&VAR_3.ref);
    FUNC_2(&VAR_4.ref);
    FUNC_3(&VAR_1);
}
