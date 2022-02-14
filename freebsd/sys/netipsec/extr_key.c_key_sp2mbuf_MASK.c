
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secpolicy {int dummy; } ;
struct mbuf {size_t m_len; int m_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct secpolicy*) ;
 scalar_t__ FUNC_1 (struct secpolicy*,int ,size_t*) ;
 int FUNC_2 (struct mbuf*,size_t) ;
 int FUNC_3 (struct mbuf*) ;
 struct mbuf* FUNC_4 (size_t,int ,int ,int ) ;

__attribute__((used)) static struct mbuf *
FUNC_5(struct secpolicy *VAR_2)
{
 struct mbuf *VAR_3;
 size_t VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 VAR_3 = FUNC_4(VAR_4, VAR_1, VAR_0, 0);
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 FUNC_2(VAR_3, VAR_4);
 VAR_3->m_len = VAR_4;
 if (FUNC_1(VAR_2, VAR_3->m_data, &VAR_4) != 0) {
  FUNC_3(VAR_3);
  return (((void*)0));
 }
 return (VAR_3);
}
