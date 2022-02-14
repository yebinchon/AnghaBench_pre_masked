
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 struct mbuf* FUNC_1 (struct mbuf*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct mbuf *VAR_2)
{
 while (VAR_2 != ((void*)0)) {
  if (VAR_2->m_flags & VAR_0)
   FUNC_0(&VAR_1,
       1);
  VAR_2 = FUNC_1(VAR_2);
 }
}
