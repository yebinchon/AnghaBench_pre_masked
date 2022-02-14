
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sctp_pcb {int random_counter; scalar_t__ random_store; scalar_t__ random_numbers; scalar_t__ store_at; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,int *,int,int *) ;

void
FUNC_1(struct sctp_pcb *VAR_1)
{
 VAR_1->store_at = 0;
 (void)FUNC_0(VAR_0, (uint8_t *)VAR_1->random_numbers,
     sizeof(VAR_1->random_numbers), (uint8_t *)&VAR_1->random_counter,
     sizeof(VAR_1->random_counter), (uint8_t *)VAR_1->random_store);
 VAR_1->random_counter++;
}
