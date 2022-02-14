
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int secret; } ;
struct TYPE_8__ {TYPE_1__ dec; TYPE_1__ enc; } ;
struct TYPE_9__ {int * pending_handshake_secret; TYPE_2__ traffic_protection; } ;
typedef TYPE_3__ ptls_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int,int *,int,int) ;

__attribute__((used)) static int FUNC_6(ptls_t *VAR_1)
{
    int VAR_2 = !FUNC_4(VAR_1);

    FUNC_0(VAR_1->pending_handshake_secret != ((void*)0));
    FUNC_2((VAR_2 ? &VAR_1->traffic_protection.enc : &VAR_1->traffic_protection.dec)->secret, VAR_1->pending_handshake_secret,
           VAR_0);
    FUNC_3(VAR_1->pending_handshake_secret, VAR_0);
    FUNC_1(VAR_1->pending_handshake_secret);
    VAR_1->pending_handshake_secret = ((void*)0);

    return FUNC_5(VAR_1, VAR_2, ((void*)0), 2, 1);
}
