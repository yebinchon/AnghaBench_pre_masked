
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct m_tag {scalar_t__ m_tag_id; scalar_t__ m_tag_cookie; } ;
struct dn_pkt_tag {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct mbuf*,struct m_tag*) ;
 struct m_tag* FUNC_3 (struct mbuf*) ;

struct dn_pkt_tag *
FUNC_4(struct mbuf *VAR_3)
{
 struct m_tag *VAR_4 = FUNC_3(VAR_3);
 FUNC_1(VAR_4 != ((void*)0) &&
     VAR_4->m_tag_cookie == VAR_1 &&
     VAR_4->m_tag_id == VAR_2,
     ("packet on dummynet queue w/o dummynet tag!"));
 return (struct dn_pkt_tag *)(VAR_4+1);
}
