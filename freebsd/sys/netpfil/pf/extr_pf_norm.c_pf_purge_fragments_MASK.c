
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pf_fragment {scalar_t__ fr_timeout; int fr_id; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct pf_fragment* FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct pf_fragment*) ;

void
FUNC_5(uint32_t VAR_2)
{
 struct pf_fragment *VAR_3;

 FUNC_1();
 while ((VAR_3 = FUNC_3(&VAR_0, VAR_1)) != ((void*)0)) {
  if (VAR_3->fr_timeout > VAR_2)
   break;

  FUNC_0(("expiring %d(%p)\n", VAR_3->fr_id, VAR_3));
  FUNC_4(VAR_3);
 }

 FUNC_2();
}
