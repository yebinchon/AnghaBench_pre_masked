
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct status_block {int dummy; } ;
struct ev_loop {int dummy; } ;
typedef int ev_io ;
struct TYPE_5__ {scalar_t__ hide_on_modifier; } ;
struct TYPE_4__ {scalar_t__ version; } ;


 int FUNC_0 (char*,int,unsigned char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct status_block*,int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (unsigned char*) ;
 unsigned char* FUNC_7 (int *,int*) ;
 int VAR_4 ;
 int FUNC_8 (TYPE_1__*,unsigned char*,int,unsigned int*) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (unsigned char*,int) ;
 struct status_block* FUNC_11 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 () ;

__attribute__((used)) static void FUNC_13(struct ev_loop *VAR_9, ev_io *VAR_10, int VAR_11) {
    int VAR_12;
    unsigned char *VAR_13 = FUNC_7(VAR_10, &VAR_12);
    if (VAR_13 == ((void*)0))
        return;
    FUNC_0("Detecting input type based on buffer *%.*s*\n", VAR_12, VAR_13);

    unsigned int VAR_14 = 0;


    FUNC_8(&VAR_2, VAR_13, VAR_12, &VAR_14);
    if (VAR_2.version > 0) {


        if (VAR_3.hide_on_modifier) {
            FUNC_12();
        }
        FUNC_2(FUNC_10(VAR_13 + VAR_14, VAR_12 - VAR_14));
    } else {


        struct status_block *VAR_15 = FUNC_11(1, sizeof(struct status_block));
        FUNC_1(&VAR_5, VAR_15, VAR_1);
        FUNC_9((char *)VAR_13, VAR_12);
    }
    FUNC_6(VAR_13);
    FUNC_5(VAR_4, VAR_7);
    FUNC_3(VAR_7, &VAR_8, VAR_6, VAR_0);
    FUNC_4(VAR_4, VAR_7);
}
