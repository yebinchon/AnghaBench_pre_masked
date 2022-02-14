
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sctp_ifn {int ifn_mtu; } ;


 struct sctp_ifn* FUNC_0 (void*,int ) ;

void
FUNC_1(uint32_t VAR_0, uint32_t VAR_1)
{
 struct sctp_ifn *VAR_2;

 VAR_2 = FUNC_0((void *)((void*)0), VAR_0);
 if (VAR_2 != ((void*)0)) {
  VAR_2->ifn_mtu = VAR_1;
 }
}
