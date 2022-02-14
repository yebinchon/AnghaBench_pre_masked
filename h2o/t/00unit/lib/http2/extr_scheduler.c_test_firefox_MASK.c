
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
struct TYPE_9__ {char* member_1; int member_2; TYPE_4__ ref; scalar_t__ still_is_active; int member_3; TYPE_1__ member_0; } ;
typedef TYPE_3__ node_t ;
typedef int h2o_http2_scheduler_node_t ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*,int *,int,int ) ;
 int FUNC_5 (int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int) ;
 char* VAR_2 ;
 scalar_t__ FUNC_7 (char*,char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    h2o_http2_scheduler_node_t VAR_3;
    node_t VAR_4 = {{{((void*)0)}}, "g1", 0, 0};
    node_t VAR_5 = {{{((void*)0)}}, "g2", 0, 0};
    node_t VAR_6 = {{{((void*)0)}}, "g3", 0, 0};
    node_t VAR_7 = {{{((void*)0)}}, "g4", 0, 0};
    node_t VAR_8 = {{{((void*)0)}}, "g5", 0, 0};
    node_t VAR_9 = {{{((void*)0)}}, "r1", 1, 0};
    node_t VAR_10 = {{{((void*)0)}}, "r2", 1, 0};
    node_t VAR_11 = {{{((void*)0)}}, "r3", 1, 0};

    FUNC_3(&VAR_3);


    FUNC_4(&VAR_4, &VAR_3, 201, 0);
    FUNC_4(&VAR_5, &VAR_3, 101, 0);
    FUNC_4(&VAR_6, &VAR_3, 1, 0);
    FUNC_4(&VAR_7, &VAR_6, 1, 0);
    FUNC_4(&VAR_8, &VAR_4, 1, 0);


    FUNC_4(&VAR_9, &VAR_8, 22, 0);
    FUNC_0(&VAR_9);
    VAR_2[0] = '\0';
    VAR_1 = 5;
    FUNC_5(&VAR_3, VAR_0, ((void*)0));
    FUNC_6(FUNC_7(VAR_2, "r1,r1,r1,r1,r1") == 0);


    FUNC_4(&VAR_10, &VAR_4, 22, 0);
    FUNC_0(&VAR_10);
    FUNC_4(&VAR_11, &VAR_4, 22, 0);
    FUNC_0(&VAR_11);
    VAR_2[0] = '\0';
    VAR_1 = 5;
    FUNC_5(&VAR_3, VAR_0, ((void*)0));
    FUNC_6(FUNC_7(VAR_2, "r2,r3,r2,r3,r2") == 0);


    VAR_10 = 0;
    VAR_11 = 0;
    VAR_2[0] = '\0';
    VAR_1 = 5;
    FUNC_5(&VAR_3, VAR_0, ((void*)0));
    FUNC_6(FUNC_7(VAR_2, "r3,r2,r1,r1,r1") == 0);


    FUNC_1(&VAR_10);
    FUNC_1(&VAR_11);
    VAR_2[0] = '\0';
    VAR_1 = 5;
    FUNC_5(&VAR_3, VAR_0, ((void*)0));
    FUNC_6(FUNC_7(VAR_2, "r1,r1,r1,r1,r1") == 0);

    FUNC_1(&VAR_9);

    FUNC_1(&VAR_4);
    FUNC_1(&VAR_5);
    FUNC_1(&VAR_6);
    FUNC_1(&VAR_7);
    FUNC_1(&VAR_8);
    FUNC_2(&VAR_3);
}
