
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ptls_buffer_t ;
struct TYPE_4__ {scalar_t__ status; scalar_t__ nbc; } ;
typedef TYPE_1__ ptls_base64_decode_state_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,int,int *) ;
 int FUNC_1 (char*,TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (char*,char*,char const*) ;

__attribute__((used)) static int FUNC_4(FILE *VAR_4, const char *VAR_5, ptls_buffer_t *VAR_6)
{
    int VAR_7 = VAR_3;
    char VAR_8[256];
    ptls_base64_decode_state_t VAR_9;


    while (FUNC_0(VAR_8, 256, VAR_4)) {
        if (FUNC_3(VAR_8, "BEGIN", VAR_5) == 0) {
            VAR_7 = 0;
            FUNC_2(&VAR_9);
            break;
        }
    }

    while (VAR_7 == 0 && FUNC_0(VAR_8, 256, VAR_4)) {
        if (FUNC_3(VAR_8, "END", VAR_5) == 0) {
            if (VAR_9.status == VAR_0 || (VAR_9.status == VAR_1 && VAR_9.nbc == 0)) {
                VAR_7 = 0;
            } else {
                VAR_7 = VAR_2;
            }
            break;
        } else {
            VAR_7 = FUNC_1(VAR_8, &VAR_9, VAR_6);
        }
    }

    return VAR_7;
}
