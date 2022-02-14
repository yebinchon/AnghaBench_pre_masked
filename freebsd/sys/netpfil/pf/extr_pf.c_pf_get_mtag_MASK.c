
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_mtag {int dummy; } ;
struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct m_tag*,int) ;
 struct m_tag* FUNC_1 (struct mbuf*,int ,int *) ;
 int FUNC_2 (struct mbuf*,struct m_tag*) ;
 int VAR_2 ;
 struct m_tag* FUNC_3 (int ,int ) ;

struct pf_mtag *
FUNC_4(struct mbuf *VAR_3)
{
 struct m_tag *VAR_4;

 if ((VAR_4 = FUNC_1(VAR_3, VAR_1, ((void*)0))) != ((void*)0))
  return ((struct pf_mtag *)(VAR_4 + 1));

 VAR_4 = FUNC_3(VAR_2, VAR_0);
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 FUNC_0(VAR_4 + 1, sizeof(struct pf_mtag));
 FUNC_2(VAR_3, VAR_4);

 return ((struct pf_mtag *)(VAR_4 + 1));
}
