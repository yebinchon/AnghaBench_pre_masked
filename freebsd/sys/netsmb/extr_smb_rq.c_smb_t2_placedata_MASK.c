
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct mdchain {int * md_top; } ;
struct mbuf {int m_len; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct mbuf*) ;
 int FUNC_1 (struct mbuf*,struct mbuf**) ;
 struct mbuf* FUNC_2 (struct mbuf*,int,int ) ;
 int FUNC_3 (struct mdchain*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_4(struct mbuf *VAR_1, u_int16_t VAR_2, u_int16_t VAR_3,
 struct mdchain *VAR_4)
{
 struct mbuf *VAR_5, *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_0);
 VAR_7 = FUNC_1(VAR_6, &VAR_5);
 VAR_5->m_len -= VAR_7 - VAR_3;
 if (VAR_4->md_top == ((void*)0)) {
  FUNC_3(VAR_4, VAR_6);
 } else
  FUNC_0(VAR_4->md_top, VAR_6);
 return 0;
}
