
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct pblk*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_1)
{
 struct pblk *VAR_2 = VAR_1;

 while (!FUNC_1()) {
  if (!FUNC_2(VAR_2))
   continue;
  FUNC_3(VAR_0);
  FUNC_0();
 }

 return 0;
}
