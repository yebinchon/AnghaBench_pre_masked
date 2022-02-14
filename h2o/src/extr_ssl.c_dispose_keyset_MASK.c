
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dec; int * enc; } ;
struct st_quic_keyset_t {TYPE_1__ address_token; int * cid; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct st_quic_keyset_t *VAR_0)
{
    FUNC_1(VAR_0->cid);
    VAR_0->cid = ((void*)0);
    FUNC_0(VAR_0->address_token.enc);
    VAR_0->address_token.enc = ((void*)0);
    FUNC_0(VAR_0->address_token.dec);
    VAR_0->address_token.dec = ((void*)0);
}
