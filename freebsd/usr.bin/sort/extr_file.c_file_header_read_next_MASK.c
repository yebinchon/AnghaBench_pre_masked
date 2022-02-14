
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_header {int * si; int * fr; } ;
struct bwstring {int dummy; } ;


 int FUNC_0 (int *) ;
 struct bwstring* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct bwstring*) ;

__attribute__((used)) static void
FUNC_6(struct file_header *VAR_0)
{

 if (VAR_0 && VAR_0->fr) {
  struct bwstring *VAR_1;

  VAR_1 = FUNC_1(VAR_0->fr);
  if (VAR_1 == ((void*)0)) {
   FUNC_0(VAR_0->fr);
   VAR_0->fr = ((void*)0);
   if (VAR_0->si) {
    FUNC_4(VAR_0->si);
    FUNC_2(VAR_0->si);
    VAR_0->si = ((void*)0);
   }
  } else {
   if (VAR_0->si == ((void*)0))
    VAR_0->si = FUNC_3();
   FUNC_5(VAR_0->si, VAR_1);
  }
 }
}
