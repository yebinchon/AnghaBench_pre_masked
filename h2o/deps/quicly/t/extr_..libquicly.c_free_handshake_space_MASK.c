
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * aead; } ;
struct TYPE_3__ {TYPE_2__ egress; TYPE_2__ ingress; } ;
struct st_quicly_handshake_space_t {int super; TYPE_1__ cipher; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct st_quicly_handshake_space_t **VAR_0)
{
    if (*VAR_0 != ((void*)0)) {
        if ((*VAR_0)->cipher.ingress.aead != ((void*)0))
            FUNC_0(&(*VAR_0)->cipher.ingress);
        if ((*VAR_0)->cipher.egress.aead != ((void*)0))
            FUNC_0(&(*VAR_0)->cipher.egress);
        FUNC_1(&(*VAR_0)->super);
        *VAR_0 = ((void*)0);
    }
}
