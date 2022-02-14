
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int16_t ;
struct TYPE_2__ {int csum_flags; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;

u_int16_t
FUNC_1(struct mbuf *VAR_2, u_int16_t VAR_3, u_int16_t VAR_4,
        u_int16_t VAR_5, u_int8_t VAR_6)
{
 if (VAR_2->m_pkthdr.csum_flags & (VAR_0 | VAR_1))
  return (VAR_3);

 return (FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6));
}
