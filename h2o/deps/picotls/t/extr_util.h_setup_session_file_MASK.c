
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ticket ;
struct TYPE_8__ {int cb; } ;
struct st_util_save_ticket_t {TYPE_2__ super; int fn; } ;
struct TYPE_7__ {int session_ticket; } ;
struct TYPE_9__ {TYPE_1__ client; } ;
typedef TYPE_3__ ptls_handshake_properties_t ;
struct TYPE_10__ {TYPE_2__* save_ticket; } ;
typedef TYPE_4__ ptls_context_t ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,char*,char const*) ;
 size_t FUNC_5 (int *,int,int,int *) ;
 int FUNC_6 (int *,size_t) ;
 int VAR_0 ;
 int FUNC_7 (int ,char const*) ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_8(ptls_context_t *VAR_2, ptls_handshake_properties_t *VAR_3, const char *VAR_4)
{
    static struct st_util_save_ticket_t VAR_5;
    FILE *VAR_6;


    FUNC_7(VAR_5.fn, VAR_4);
    VAR_5.super.cb = VAR_1;
    VAR_2->save_ticket = &VAR_5.super;


    if ((VAR_6 = FUNC_3(VAR_4, "rb")) != ((void*)0)) {
        static uint8_t VAR_7[16384];
        size_t VAR_8 = FUNC_5(VAR_7, 1, sizeof(VAR_7), VAR_6);
        if (VAR_8 == 0 || !FUNC_2(VAR_6)) {
            FUNC_4(VAR_0, "failed to load ticket from file:%s\n", VAR_4);
            FUNC_0(1);
        }
        FUNC_1(VAR_6);
        VAR_3->client.session_ticket = FUNC_6(VAR_7, VAR_8);
    }
}
