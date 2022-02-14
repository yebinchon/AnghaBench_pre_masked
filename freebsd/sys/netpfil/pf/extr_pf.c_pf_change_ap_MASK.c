
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int16_t ;
struct pf_addr {int * addr16; } ;
struct TYPE_2__ {int csum_flags; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
typedef int sa_family_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pf_addr*,struct pf_addr*,int ) ;
 int FUNC_1 (int,int ,int ,int ) ;
 int FUNC_2 (struct mbuf*,int,int,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct mbuf *VAR_2, struct pf_addr *VAR_3, u_int16_t *VAR_4, u_int16_t *VAR_5,
        u_int16_t *VAR_6, struct pf_addr *VAR_7, u_int16_t VAR_8, u_int8_t VAR_9,
        sa_family_t VAR_10)
{
 struct pf_addr VAR_11;
 u_int16_t VAR_12 = *VAR_4;

 FUNC_0(&VAR_11, VAR_3, VAR_10);
 FUNC_0(VAR_3, VAR_7, VAR_10);

 if (VAR_2->m_pkthdr.csum_flags & (VAR_0 | VAR_1))
  *VAR_6 = ~*VAR_6;

 *VAR_4 = VAR_8;

 switch (VAR_10) {
 }

 if (VAR_2->m_pkthdr.csum_flags & (VAR_0 |
     VAR_1)) {
  *VAR_6 = ~*VAR_6;
  if (! *VAR_6)
   *VAR_6 = 0xffff;
 }
}
