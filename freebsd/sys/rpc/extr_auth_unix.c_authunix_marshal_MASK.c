
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mbuf {int dummy; } ;
struct audata {int au_mpos; int au_marshed; } ;
typedef int bool_t ;
typedef int XDR ;
typedef int AUTH ;


 struct audata* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,struct mbuf*) ;

__attribute__((used)) static bool_t
FUNC_3(AUTH *VAR_2, uint32_t VAR_3, XDR *VAR_4, struct mbuf *VAR_5)
{
 struct audata *VAR_6;

 VAR_6 = FUNC_0(VAR_2);
 if (!FUNC_1(VAR_4, VAR_6->au_marshed, VAR_6->au_mpos))
  return (VAR_0);

 FUNC_2(VAR_4, VAR_5);

 return (VAR_1);
}
