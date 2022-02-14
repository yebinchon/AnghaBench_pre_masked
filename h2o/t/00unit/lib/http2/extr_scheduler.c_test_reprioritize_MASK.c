
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int node; } ;
struct TYPE_8__ {int * member_0; } ;
struct TYPE_7__ {TYPE_2__ member_0; } ;
struct TYPE_9__ {char* member_1; TYPE_4__ ref; TYPE_1__ member_0; } ;
typedef TYPE_3__ node_t ;
typedef int h2o_http2_scheduler_node_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*,int *,int,int ) ;
 int FUNC_5 (TYPE_4__*,int *,int,int ) ;
 int FUNC_6 (int) ;
 char* VAR_0 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_8(void)
{
    h2o_http2_scheduler_node_t VAR_2;
    node_t VAR_3 = {{{((void*)0)}}, "A"};
    node_t VAR_4 = {{{((void*)0)}}, "B"};
    node_t VAR_5 = {{{((void*)0)}}, "C"};
    node_t VAR_6 = {{{((void*)0)}}, "D"};
    node_t VAR_7 = {{{((void*)0)}}, "E"};
    node_t VAR_8 = {{{((void*)0)}}, "F"};

    FUNC_3(&VAR_2);
    FUNC_4(&VAR_3.ref, &VAR_2, 6, 0);
    FUNC_4(&VAR_4.ref, &VAR_3.ref.node, 5, 0);
    FUNC_4(&VAR_5.ref, &VAR_3.ref.node, 4, 0);
    FUNC_4(&VAR_6.ref, &VAR_5.ref.node, 3, 0);
    FUNC_4(&VAR_7.ref, &VAR_5.ref.node, 2, 0);
    FUNC_4(&VAR_8.ref, &VAR_6.ref.node, 1, 0);

    VAR_0[0] = '\0';
    FUNC_0(&VAR_2);
    FUNC_6(FUNC_7(VAR_0, "(A6(B5C4(D3(F1)E2)))") == 0);

    FUNC_5(&VAR_3.ref, &VAR_6.ref.node, 1, VAR_1);
    VAR_0[0] = '\0';
    FUNC_0(&VAR_2);
    if (!VAR_1) {
        FUNC_6(FUNC_7(VAR_0, "(D3(F1A1(B5C4(E2))))") == 0);
    } else {
        FUNC_6(FUNC_7(VAR_0, "(D3(A1(B5C4(E2)F1)))") == 0);
    }

    FUNC_1(&VAR_3.ref);
    FUNC_1(&VAR_4.ref);
    FUNC_1(&VAR_5.ref);
    FUNC_1(&VAR_6.ref);
    FUNC_1(&VAR_7.ref);
    FUNC_1(&VAR_8.ref);
    FUNC_2(&VAR_2);
}
