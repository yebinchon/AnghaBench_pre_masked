
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int ecn_supported; } ;
struct sctp_tcb {TYPE_1__ asoc; } ;


 int VAR_0 ;

__attribute__((used)) static uint8_t
FUNC_0(struct sctp_tcb *VAR_1)
{
 if ((VAR_1 != ((void*)0)) && (VAR_1->asoc.ecn_supported == 1)) {
  return (VAR_0);
 } else {
  return (0);
 }
}
