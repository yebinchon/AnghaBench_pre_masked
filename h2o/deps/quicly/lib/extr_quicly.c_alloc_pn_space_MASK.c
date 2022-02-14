
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct st_quicly_pn_space_t {scalar_t__ unacked_count; scalar_t__ next_expected_packet_number; int largest_pn_received_at; int ack_queue; } ;


 int VAR_0 ;
 struct st_quicly_pn_space_t* FUNC_0 (size_t) ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct st_quicly_pn_space_t *FUNC_3(size_t VAR_1)
{
    struct st_quicly_pn_space_t *VAR_2;

    if ((VAR_2 = FUNC_0(VAR_1)) == ((void*)0))
        return ((void*)0);

    FUNC_2(&VAR_2->ack_queue);
    VAR_2->largest_pn_received_at = VAR_0;
    VAR_2->next_expected_packet_number = 0;
    VAR_2->unacked_count = 0;
    if (VAR_1 != sizeof(*VAR_2))
        FUNC_1((uint8_t *)VAR_2 + sizeof(*VAR_2), 0, VAR_1 - sizeof(*VAR_2));

    return VAR_2;
}
