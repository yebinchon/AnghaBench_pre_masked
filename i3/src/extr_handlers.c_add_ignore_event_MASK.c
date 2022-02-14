
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Ignore_Event {int sequence; int response_type; int added; } ;


 int FUNC_0 (int *,struct Ignore_Event*,int ) ;
 int VAR_0 ;
 struct Ignore_Event* FUNC_1 (int) ;
 int FUNC_2 (int *) ;

void FUNC_3(const int VAR_1, const int VAR_2) {
    struct Ignore_Event *VAR_3 = FUNC_1(sizeof(struct Ignore_Event));

    VAR_3->sequence = VAR_1;
    VAR_3->response_type = VAR_2;
    VAR_3->added = FUNC_2(((void*)0));

    FUNC_0(&VAR_0, VAR_3, VAR_0);
}
