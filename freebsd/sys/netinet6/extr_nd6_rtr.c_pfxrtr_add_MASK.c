
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_prefix {int ndpr_advrtrs; } ;
struct nd_pfxrouter {struct nd_defrouter* router; } ;
struct nd_defrouter {int dummy; } ;


 int FUNC_0 (int *,struct nd_pfxrouter*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct nd_defrouter*) ;
 int FUNC_7 (struct nd_defrouter*) ;
 int FUNC_8 (struct nd_pfxrouter*,int ) ;
 struct nd_pfxrouter* FUNC_9 (int,int ,int) ;
 int VAR_3 ;
 int FUNC_10 () ;
 int * FUNC_11 (struct nd_prefix*,struct nd_defrouter*) ;

__attribute__((used)) static void
FUNC_12(struct nd_prefix *VAR_4, struct nd_defrouter *VAR_5)
{
 struct nd_pfxrouter *VAR_6;
 bool VAR_7;

 FUNC_3();

 FUNC_1();
 if (FUNC_11(VAR_4, VAR_5) != ((void*)0)) {
  FUNC_2();
  return;
 }
 FUNC_2();

 VAR_6 = FUNC_9(sizeof(*VAR_6), VAR_0, VAR_1 | VAR_2);
 if (VAR_6 == ((void*)0))
  return;
 FUNC_6(VAR_5);
 VAR_6->router = VAR_5;

 FUNC_4();
 if (FUNC_11(VAR_4, VAR_5) == ((void*)0)) {
  FUNC_0(&VAR_4->ndpr_advrtrs, VAR_6, VAR_3);
  VAR_7 = 1;
 } else {

  FUNC_7(VAR_5);
  FUNC_8(VAR_6, VAR_0);
  VAR_7 = 0;
 }
 FUNC_5();

 if (VAR_7)
  FUNC_10();
}
