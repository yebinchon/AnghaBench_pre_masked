
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;
struct label {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mbuf*) ;
 int VAR_2 ;
 int FUNC_1 (struct m_tag*) ;
 struct m_tag* FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct mbuf*,struct m_tag*) ;
 int VAR_3 ;
 int FUNC_4 (struct m_tag*,int) ;

int
FUNC_5(struct mbuf *VAR_4, int VAR_5)
{
 struct m_tag *VAR_6;
 int VAR_7;

 FUNC_0(VAR_4);

 if (VAR_3 & VAR_1) {
  VAR_6 = FUNC_2(VAR_2, sizeof(struct label),
      VAR_5);
  if (VAR_6 == ((void*)0))
   return (VAR_0);
  VAR_7 = FUNC_4(VAR_6, VAR_5);
  if (VAR_7) {
   FUNC_1(VAR_6);
   return (VAR_7);
  }
  FUNC_3(VAR_4, VAR_6);
 }
 return (0);
}
