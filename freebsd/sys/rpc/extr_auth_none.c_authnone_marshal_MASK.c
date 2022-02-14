
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mbuf {int dummy; } ;
struct authnone_private {int mcnt; int mclient; } ;
typedef int bool_t ;
typedef int XDR ;
typedef int AUTH ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 struct authnone_private VAR_2 ;
 int FUNC_2 (int *,struct mbuf*) ;

__attribute__((used)) static bool_t
FUNC_3(AUTH *VAR_3, uint32_t VAR_4, XDR *VAR_5, struct mbuf *VAR_6)
{
 struct authnone_private *VAR_7 = &VAR_2;

 FUNC_0(VAR_5 != ((void*)0), ("authnone_marshal: xdrs is null"));

 if (!FUNC_1(VAR_5, VAR_7->mclient, VAR_7->mcnt))
  return (VAR_0);

 FUNC_2(VAR_5, VAR_6);

 return (VAR_1);
}
