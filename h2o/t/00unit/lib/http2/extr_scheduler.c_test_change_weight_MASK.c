
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * member_0; } ;
struct TYPE_4__ {TYPE_2__ member_0; } ;
struct TYPE_6__ {char* member_1; int member_2; int ref; scalar_t__ still_is_active; int member_3; TYPE_1__ member_0; } ;
typedef TYPE_3__ node_t ;
typedef int h2o_http2_scheduler_node_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int,int ) ;
 int FUNC_6 (int *,int *,int,int ) ;
 int FUNC_7 (int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (int) ;
 char* VAR_2 ;
 scalar_t__ FUNC_9 (char*,char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    h2o_http2_scheduler_node_t VAR_3;
    node_t VAR_4 = {{{((void*)0)}}, "A", 1, 0};
    node_t VAR_5 = {{{((void*)0)}}, "B", 1, 0};
    node_t VAR_6 = {{{((void*)0)}}, "C", 1, 0};

    FUNC_4(&VAR_3);


    FUNC_5(&VAR_4.ref, &VAR_3, 16, 0);
    FUNC_1(&VAR_4.ref);
    FUNC_5(&VAR_5.ref, &VAR_3, 16, 0);
    FUNC_1(&VAR_5.ref);
    FUNC_5(&VAR_6.ref, &VAR_3, 16, 0);
    FUNC_1(&VAR_6.ref);
    VAR_2[0] = '\0';
    FUNC_0(&VAR_3);
    FUNC_8(FUNC_9(VAR_2, "(A16B16C16)") == 0);


    VAR_2[0] = '\0';
    VAR_1 = 20;
    FUNC_7(&VAR_3, VAR_0, ((void*)0));
    FUNC_8(FUNC_9(VAR_2, "A,B,C,A,B,C,A,B,C,A,B,C,A,B,C,A,B,C,A,B") == 0);


    FUNC_6(&VAR_4.ref, &VAR_3, 4, 0);
    VAR_2[0] = '\0';
    FUNC_0(&VAR_3);
    FUNC_8(FUNC_9(VAR_2, "(B16C16A4)") == 0);
    VAR_2[0] = '\0';
    VAR_1 = 20;
    FUNC_7(&VAR_3, VAR_0, ((void*)0));
    FUNC_8(FUNC_9(VAR_2, "C,B,C,B,C,B,C,A,B,C,B,C,B,C,B,C,A,B,C,B") == 0);


    VAR_5.still_is_active = 0;
    VAR_6.still_is_active = 0;
    VAR_2[0] = '\0';
    VAR_1 = 10;
    FUNC_7(&VAR_3, VAR_0, ((void*)0));
    FUNC_8(FUNC_9(VAR_2, "C,B,A,A,A,A,A,A,A,A") == 0);

    FUNC_2(&VAR_4.ref);
    FUNC_2(&VAR_5.ref);
    FUNC_2(&VAR_6.ref);
    FUNC_3(&VAR_3);
}
