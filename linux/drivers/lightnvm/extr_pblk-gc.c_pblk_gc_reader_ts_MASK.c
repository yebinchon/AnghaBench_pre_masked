
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_gc {int pipeline_gc; } ;
struct pblk {struct pblk_gc gc; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct pblk*) ;
 int FUNC_4 (struct pblk*,char*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(void *VAR_1)
{
 struct pblk *VAR_2 = VAR_1;
 struct pblk_gc *VAR_3 = &VAR_2->gc;

 while (!FUNC_2()) {
  if (!FUNC_3(VAR_2))
   continue;
  FUNC_6(VAR_0);
  FUNC_1();
 }






 do {
  if (!FUNC_0(&VAR_3->pipeline_gc))
   break;

  FUNC_5();
 } while (1);

 return 0;
}
