
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ u_int8_t ;
struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct m_tag* FUNC_0 (struct mbuf*,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_1(u_int8_t VAR_3, struct mbuf *VAR_4)
{
 struct m_tag *VAR_5;
 u_int8_t VAR_6;

 VAR_5 = FUNC_0(VAR_4, VAR_0, VAR_1, ((void*)0));
 if (VAR_5 == ((void*)0))
  return (0);

 if (VAR_3 == VAR_2)
  VAR_3 = 0;

 VAR_6 = *(uint8_t *)(VAR_5 + 1);

 return (VAR_6 == VAR_3);
}
