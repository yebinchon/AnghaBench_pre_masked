
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;
struct label {int dummy; } ;


 int VAR_0 ;
 struct m_tag* FUNC_0 (struct mbuf*,int ,int *) ;

struct label *
FUNC_1(struct mbuf *VAR_1)
{
 struct m_tag *VAR_2;
 struct label *VAR_3;

 if (VAR_1 == ((void*)0))
  return (((void*)0));
 VAR_2 = FUNC_0(VAR_1, VAR_0, ((void*)0));
 if (VAR_2 == ((void*)0))
  return (((void*)0));
 VAR_3 = (struct label *)(VAR_2+1);
 return (VAR_3);
}
