
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int len; } ;
struct mbuf {int m_len; int m_data; TYPE_1__ m_pkthdr; int m_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mbuf*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 struct mbuf* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mbuf*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static struct mbuf *
FUNC_4(int VAR_4, uint16_t VAR_5)
{
 struct mbuf *VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_0);
 if (VAR_6 == ((void*)0))
  return (((void*)0));



 FUNC_0(VAR_6, VAR_5);
 VAR_6->m_data += VAR_3;
 VAR_6->m_flags |= VAR_2;
 VAR_6->m_len = VAR_6->m_pkthdr.len = VAR_4;
 FUNC_1(VAR_6->m_data, VAR_4);
 return (VAR_6);
}
