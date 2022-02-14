
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u_char ;
struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;
struct in_addr {int dummy; } ;
struct TYPE_2__ {struct in_addr dst; int srcopt; } ;
struct ipopt_tag {unsigned int ip_nhops; TYPE_1__ ip_srcrt; } ;
typedef int dst ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int*,int ,unsigned int) ;
 int FUNC_1 (struct m_tag*) ;
 scalar_t__ FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct mbuf*,struct m_tag*) ;

__attribute__((used)) static void
FUNC_4(struct mbuf *VAR_4, u_char *VAR_5, struct in_addr VAR_6)
{
 unsigned VAR_7;
 struct ipopt_tag *VAR_8;

 VAR_8 = (struct ipopt_tag *)FUNC_2(VAR_3,
     sizeof(struct ipopt_tag), VAR_2);
 if (VAR_8 == ((void*)0))
  return;

 VAR_7 = VAR_5[VAR_1];
 if (VAR_7 > sizeof(VAR_8->ip_srcrt) - (1 + sizeof(VAR_6))) {
  FUNC_1((struct m_tag *)VAR_8);
  return;
 }
 FUNC_0(VAR_5, VAR_8->ip_srcrt.srcopt, VAR_7);
 VAR_8->ip_nhops = (VAR_7 - VAR_0 - 1) / sizeof(struct in_addr);
 VAR_8->ip_srcrt.dst = VAR_6;
 FUNC_3(VAR_4, (struct m_tag *)VAR_8);
}
