
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipcp {unsigned int Queue; } ;
struct ipv6cp {unsigned int Queue; } ;
struct ncp {struct ipcp ipcp; struct ipv6cp ipv6cp; } ;
struct mbuf {int m_offset; int m_len; } ;




 unsigned int FUNC_0 (struct ipcp*) ;
 unsigned int FUNC_1 (struct ipcp*) ;
 int VAR_0 ;
 int FUNC_2 (struct mbuf*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (unsigned int,struct mbuf*) ;
 struct mbuf* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,char*,int) ;

void
FUNC_7(struct ncp *VAR_2, int VAR_3, unsigned VAR_4, char *VAR_5, int VAR_6)
{

  struct ipv6cp *VAR_7 = &VAR_2->ipv6cp;

  struct ipcp *VAR_8 = &VAR_2->ipcp;
  struct mbuf *VAR_9;
  switch (VAR_3) {
  case 129:
    if (VAR_4 >= FUNC_0(VAR_8)) {
      FUNC_3(VAR_0, "Can't store in ip queue %u\n", VAR_4);
      break;
    }

    VAR_9 = FUNC_5(VAR_6 + 6, VAR_1);
    VAR_9->m_offset += 4;
    VAR_9->m_len -= 6;
    FUNC_6(FUNC_2(VAR_9), VAR_5, VAR_6);
    FUNC_4(VAR_8->Queue + VAR_4, VAR_9);
    break;


  case 128:
    if (VAR_4 >= FUNC_1(VAR_8)) {
      FUNC_3(VAR_0, "Can't store in ipv6 queue %u\n", VAR_4);
      break;
    }

    VAR_9 = FUNC_5(VAR_6 + 6, VAR_1);
    VAR_9->m_offset += 4;
    VAR_9->m_len -= 6;
    FUNC_6(FUNC_2(VAR_9), VAR_5, VAR_6);
    FUNC_4(VAR_7->Queue + VAR_4, VAR_9);
    break;


  default:
      FUNC_3(VAR_0, "Can't enqueue protocol family %d\n", VAR_3);
  }
}
