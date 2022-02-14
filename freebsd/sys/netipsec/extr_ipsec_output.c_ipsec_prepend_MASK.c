
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct mbuf {int m_data; int m_len; TYPE_1__ m_pkthdr; struct mbuf* m_next; int m_type; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct mbuf*) ;
 scalar_t__ FUNC_3 (struct mbuf*) ;
 int FUNC_4 (struct mbuf*,scalar_t__) ;
 int FUNC_5 (struct mbuf*) ;
 struct mbuf* FUNC_6 (int,int ) ;
 int FUNC_7 (struct mbuf*,struct mbuf*) ;

__attribute__((used)) static struct mbuf *
FUNC_8(struct mbuf *VAR_2, int VAR_3, int VAR_4)
{
 struct mbuf *VAR_5;

 FUNC_1(VAR_2);
 FUNC_0(VAR_3 < VAR_1, ("wrong length"));
 if (FUNC_2(VAR_2) >= VAR_3) {

  VAR_2->m_data -= VAR_3;
  VAR_2->m_len += VAR_3;
  VAR_2->m_pkthdr.len += VAR_3;
  return (VAR_2);
 }
 VAR_5 = FUNC_6(VAR_4, VAR_2->m_type);
 if (VAR_5 == ((void*)0)) {
  FUNC_5(VAR_2);
  return (((void*)0));
 }
 FUNC_7(VAR_5, VAR_2);
 VAR_5->m_next = VAR_2;
 if (VAR_3 + VAR_0 < FUNC_3(VAR_5))
  FUNC_4(VAR_5, VAR_3 + VAR_0);
 VAR_5->m_len = VAR_3;
 VAR_5->m_pkthdr.len += VAR_3;
 return (VAR_5);
}
