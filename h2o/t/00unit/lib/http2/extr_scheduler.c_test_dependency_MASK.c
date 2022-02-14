
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
struct TYPE_9__ {char* member_1; int member_2; int still_is_active; TYPE_4__ ref; int member_3; TYPE_1__ member_0; } ;
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
    node_t VAR_4 = {{{((void*)0)}}, "A", 1, 0};
    node_t VAR_5 = {{{((void*)0)}}, "B", 1, 0};
    node_t VAR_6 = {{{((void*)0)}}, "C", 1, 0};
    node_t VAR_7 = {{{((void*)0)}}, "D", 1, 0};
    FUNC_3(&VAR_3);
    FUNC_4(&VAR_4.ref, &VAR_3, 32, 0);
    FUNC_0(&VAR_4.ref);
    FUNC_4(&VAR_5.ref, &VAR_3, 32, 0);
    FUNC_0(&VAR_5.ref);
    FUNC_4(&VAR_6.ref, &VAR_3, 12, 0);
    FUNC_0(&VAR_6.ref);
    FUNC_4(&VAR_7.ref, &VAR_4.ref.node, 6, 0);
    FUNC_0(&VAR_7.ref);


    VAR_2[0] = '\0';
    VAR_1 = 20;
    FUNC_5(&VAR_3, VAR_0, ((void*)0));
    FUNC_6(FUNC_7(VAR_2, "A,B,A,B,C,A,B,A,B,A,B,C,A,B,A,B,C,A,B,A") == 0);


    VAR_4.still_is_active = 0;
    VAR_2[0] = '\0';
    VAR_1 = 20;
    FUNC_5(&VAR_3, VAR_0, ((void*)0));
    FUNC_6(FUNC_7(VAR_2, "B,A,B,C,D,B,D,B,D,B,C,D,B,D,B,C,D,B,D,B") == 0);


    VAR_5.still_is_active = 0;
    VAR_2[0] = '\0';
    VAR_1 = 20;
    FUNC_5(&VAR_3, VAR_0, ((void*)0));
    FUNC_6(FUNC_7(VAR_2, "D,B,C,D,D,D,C,D,D,C,D,D,D,C,D,D,C,D,D,D") == 0);


    FUNC_1(&VAR_4.ref);
    FUNC_0(&VAR_5.ref);
    VAR_5.still_is_active = 1;
    VAR_2[0] = '\0';
    VAR_1 = 20;
    FUNC_5(&VAR_3, VAR_0, ((void*)0));
    FUNC_6(FUNC_7(VAR_2, "D,C,B,D,B,D,B,C,D,B,D,B,D,C,B,D,B,D,B,C") == 0);

    FUNC_1(&VAR_5.ref);
    FUNC_1(&VAR_6.ref);
    FUNC_1(&VAR_7.ref);
    FUNC_2(&VAR_3);
}
