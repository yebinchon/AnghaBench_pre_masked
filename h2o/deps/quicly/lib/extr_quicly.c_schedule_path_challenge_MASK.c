
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct st_quicly_pending_path_challenge_t {int is_response; struct st_quicly_pending_path_challenge_t* next; int data; } ;
struct TYPE_6__ {struct st_quicly_pending_path_challenge_t** tail_ref; } ;
struct TYPE_5__ {TYPE_2__ path_challenge; } ;
struct TYPE_7__ {TYPE_1__ egress; } ;
typedef TYPE_3__ quicly_conn_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct st_quicly_pending_path_challenge_t* FUNC_0 (int) ;
 int FUNC_1 (int ,int const*,int ) ;

__attribute__((used)) static int FUNC_2(quicly_conn_t *VAR_2, int VAR_3, const uint8_t *VAR_4)
{
    struct st_quicly_pending_path_challenge_t *VAR_5;

    if ((VAR_5 = FUNC_0(sizeof(struct st_quicly_pending_path_challenge_t))) == ((void*)0))
        return VAR_0;

    VAR_5->next = ((void*)0);
    VAR_5->is_response = VAR_3;
    FUNC_1(VAR_5->data, VAR_4, VAR_1);

    *VAR_2->egress.path_challenge.tail_ref = VAR_5;
    VAR_2->egress.path_challenge.tail_ref = &VAR_5->next;
    return 0;
}
