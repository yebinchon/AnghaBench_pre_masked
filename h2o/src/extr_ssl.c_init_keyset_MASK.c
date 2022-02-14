
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int * dec; int * enc; } ;
struct st_quic_keyset_t {TYPE_1__ address_token; int * cid; int name; } ;
struct TYPE_11__ {int len; int base; } ;
typedef TYPE_2__ ptls_iovec_t ;
typedef int master_digestbuf ;
typedef int keybuf ;
struct TYPE_12__ {int key_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (TYPE_4__*,int *,int,int *,char*) ;
 int FUNC_2 (int *,int *,int ,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,int ,TYPE_2__,char*,TYPE_2__,char*) ;
 TYPE_2__ FUNC_5 (int *,int ) ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_6 (int *,int *,int *,TYPE_2__) ;

__attribute__((used)) static void FUNC_7(struct st_quic_keyset_t *VAR_7, uint8_t VAR_8, ptls_iovec_t VAR_9)
{
    uint8_t VAR_10[VAR_0], VAR_11[VAR_1];
    int VAR_12;

    if (VAR_9.len > VAR_2) {
        FUNC_2(&VAR_6, VAR_10, VAR_9.base, VAR_9.len);
        VAR_9 = FUNC_5(VAR_10, VAR_2);
    }

    VAR_7->name = VAR_8;
    VAR_7->cid =
        FUNC_6(&VAR_5, &VAR_3, &VAR_6, VAR_9);
    FUNC_0(VAR_7->cid != ((void*)0));
    VAR_12 = FUNC_4(&VAR_6, VAR_11, VAR_4.key_size, VAR_9, "address-token",
                                 FUNC_5(((void*)0), 0), "");
    FUNC_0(VAR_12 == 0);
    VAR_7->address_token.enc = FUNC_1(&VAR_4, &VAR_6, 1, VAR_11, "");
    FUNC_0(VAR_7->address_token.enc != ((void*)0));
    VAR_7->address_token.dec = FUNC_1(&VAR_4, &VAR_6, 0, VAR_11, "");
    FUNC_0(VAR_7->address_token.dec != ((void*)0));

    FUNC_3(VAR_10, sizeof(VAR_10));
    FUNC_3(VAR_11, sizeof(VAR_11));
}
