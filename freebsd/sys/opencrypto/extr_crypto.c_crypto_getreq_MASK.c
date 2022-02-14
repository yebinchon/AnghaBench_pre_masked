
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptop {struct cryptodesc* crp_desc; } ;
struct cryptodesc {struct cryptodesc* crd_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cryptop*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ,int) ;

struct cryptop *
FUNC_2(int VAR_4)
{
 struct cryptodesc *VAR_5;
 struct cryptop *VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_0|VAR_1);
 if (VAR_6 != ((void*)0)) {
  while (VAR_4--) {
   VAR_5 = FUNC_1(VAR_2, VAR_0|VAR_1);
   if (VAR_5 == ((void*)0)) {
    FUNC_0(VAR_6);
    return ((void*)0);
   }

   VAR_5->crd_next = VAR_6->crp_desc;
   VAR_6->crp_desc = VAR_5;
  }
 }
 return VAR_6;
}
