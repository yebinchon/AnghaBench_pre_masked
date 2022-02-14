
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_util_save_ticket_t {char* fn; } ;
typedef int ptls_t ;
typedef int ptls_save_ticket_t ;
struct TYPE_3__ {int len; int base; } ;
typedef TYPE_1__ ptls_iovec_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int FUNC_3 (int ,int,int ,int *) ;
 int VAR_2 ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(ptls_save_ticket_t *VAR_3, ptls_t *VAR_4, ptls_iovec_t VAR_5)
{
    struct st_util_save_ticket_t *VAR_6 = (void *)VAR_3;
    FILE *VAR_7;

    if ((VAR_7 = FUNC_1(VAR_6->fn, "wb")) == ((void*)0)) {
        FUNC_2(VAR_2, "failed to open file:%s:%s\n", VAR_6->fn, FUNC_4(VAR_1));
        return VAR_0;
    }
    FUNC_3(VAR_5.base, 1, VAR_5.len, VAR_7);
    FUNC_0(VAR_7);

    return 0;
}
