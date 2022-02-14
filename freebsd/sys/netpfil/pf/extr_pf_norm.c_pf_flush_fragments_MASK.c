
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_fragment {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 struct pf_fragment* FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct pf_fragment*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct pf_fragment *VAR_3;
 int VAR_4;

 FUNC_1();

 VAR_4 = FUNC_4(VAR_1) * 9 / 10;
 FUNC_0(("trying to free %d frag entriess\n", VAR_4));
 while (VAR_4 < FUNC_4(VAR_1)) {
  VAR_3 = FUNC_2(&VAR_0, VAR_2);
  if (VAR_3)
   FUNC_3(VAR_3);
  else
   break;
 }
}
