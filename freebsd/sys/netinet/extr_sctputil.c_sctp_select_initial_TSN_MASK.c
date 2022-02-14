
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct sctp_pcb {scalar_t__ initial_sequence_debug; int store_at; int * random_store; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (struct sctp_pcb*) ;

uint32_t
FUNC_2(struct sctp_pcb *VAR_1)
{





 uint32_t VAR_2, *VAR_3;
 uint8_t *VAR_4;
 int VAR_5, VAR_6;

 if (VAR_1->initial_sequence_debug != 0) {
  uint32_t VAR_7;

  VAR_7 = VAR_1->initial_sequence_debug;
  VAR_1->initial_sequence_debug++;
  return (VAR_7);
 }
retry:
 VAR_5 = VAR_1->store_at;
 VAR_6 = VAR_5 + sizeof(uint32_t);
 if (VAR_6 >= (VAR_0 - 3)) {
  VAR_6 = 0;
 }
 if (!FUNC_0(&VAR_1->store_at, VAR_5, VAR_6)) {
  goto retry;
 }
 if (VAR_6 == 0) {

  FUNC_1(VAR_1);
 }
 VAR_4 = &VAR_1->random_store[VAR_5];
 VAR_3 = (uint32_t *)VAR_4;
 VAR_2 = *VAR_3;
 return (VAR_2);
}
