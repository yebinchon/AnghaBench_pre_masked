
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct st_quicly_handshake_space_t {int dummy; } ;
struct TYPE_4__ {struct st_quicly_handshake_space_t* handshake; struct st_quicly_handshake_space_t* initial; } ;
typedef TYPE_1__ quicly_conn_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,size_t) ;

__attribute__((used)) static int FUNC_2(quicly_conn_t *VAR_2, size_t VAR_3)
{
    struct st_quicly_handshake_space_t **VAR_4 = VAR_3 == VAR_1 ? &VAR_2->initial : &VAR_2->handshake;
    if ((*VAR_4 = (void *)FUNC_0(sizeof(struct st_quicly_handshake_space_t))) == ((void*)0))
        return VAR_0;
    return FUNC_1(VAR_2, VAR_3);
}
