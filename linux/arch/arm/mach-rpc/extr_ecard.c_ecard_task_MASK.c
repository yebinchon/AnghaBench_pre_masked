
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecard_request {int complete; int (* fn ) (struct ecard_request*) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct ecard_request*) ;
 int FUNC_4 (int ,int ) ;
 struct ecard_request* FUNC_5 (int **,int *) ;

__attribute__((used)) static int
FUNC_6(void * VAR_2)
{






 if (FUNC_1())
  FUNC_2("kecardd: unable to alloc mm\n");

 while (1) {
  struct ecard_request *VAR_3;

  FUNC_4(VAR_1, VAR_0 != ((void*)0));

  VAR_3 = FUNC_5(&VAR_0, ((void*)0));
  if (VAR_3 != ((void*)0)) {
   VAR_3->fn(VAR_3);
   FUNC_0(VAR_3->complete);
  }
 }
}
