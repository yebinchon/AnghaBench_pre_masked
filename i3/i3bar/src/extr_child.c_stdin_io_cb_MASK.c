
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ev_loop {int dummy; } ;
typedef int ev_io ;
struct TYPE_2__ {scalar_t__ version; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int *,int*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (unsigned char*,int) ;

__attribute__((used)) static void FUNC_5(struct ev_loop *VAR_1, ev_io *VAR_2, int VAR_3) {
    int VAR_4;
    unsigned char *VAR_5 = FUNC_2(VAR_2, &VAR_4);
    if (VAR_5 == ((void*)0))
        return;
    bool VAR_6 = 0;
    if (VAR_0.version > 0) {
        VAR_6 = FUNC_4(VAR_5, VAR_4);
    } else {
        FUNC_3((char *)VAR_5, VAR_4);
    }
    FUNC_1(VAR_5);
    FUNC_0(VAR_6);
}
