
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct TYPE_2__ {int flowid; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct mbuf*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mbuf*,int ,int *,int *) ;

struct mbuf *
FUNC_5(struct mbuf *VAR_2, uintptr_t VAR_3, u_int *VAR_4)
{
 uint32_t VAR_5, VAR_6;
 int VAR_7;

 FUNC_0(VAR_2);

 VAR_7 = FUNC_4(VAR_2, VAR_1,
     &VAR_5, &VAR_6);
 if (VAR_7 > 0) {

  *VAR_4 = FUNC_3(VAR_2->m_pkthdr.flowid, FUNC_1(VAR_2));
 } else if (VAR_7 == 0) {

  VAR_2->m_pkthdr.flowid = VAR_5;
  FUNC_2(VAR_2, VAR_6);
  *VAR_4 = FUNC_3(VAR_2->m_pkthdr.flowid, FUNC_1(VAR_2));
 } else {

  *VAR_4 = VAR_0;
 }
 return (VAR_2);
}
