
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int flags; } ;
struct TYPE_3__ {scalar_t__ n_aliases; } ;
struct TYPE_4__ {TYPE_1__ dcache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ) ;
 TYPE_2__ VAR_2 ;
 void* FUNC_1 (struct page*,unsigned long) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_6 (int ,int *) ;

void FUNC_7(struct page *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5 = (unsigned long) FUNC_3(VAR_3);

 if (FUNC_5(VAR_5, VAR_4)) {
  if (VAR_2.dcache.n_aliases && FUNC_4(VAR_3) &&
      FUNC_6(VAR_1, &VAR_3->flags)) {
   void *VAR_6;

   VAR_6 = FUNC_1(VAR_3, VAR_4);


   FUNC_2(VAR_6);
  } else
   FUNC_0((void *)VAR_5, VAR_0);
 }
}
