
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct async_submit_ctl {void** scribble; int flags; } ;
struct TYPE_2__ {int (* gen_syndrome ) (int,size_t,void**) ;int (* xor_syndrome ) (int,int,int,size_t,void**) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct async_submit_ctl*) ;
 void* FUNC_2 (struct page*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int,int,int,size_t,void**) ;
 int FUNC_4 (int,size_t,void**) ;

__attribute__((used)) static void
FUNC_5(struct page **VAR_3, unsigned int VAR_4, int VAR_5,
       size_t VAR_6, struct async_submit_ctl *VAR_7)
{
 void **VAR_8;
 int VAR_9;
 int VAR_10 = -1, VAR_11 = VAR_5 - 3;

 if (VAR_7->scribble)
  VAR_8 = VAR_7->scribble;
 else
  VAR_8 = (void **) VAR_3;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  if (VAR_3[VAR_9] == ((void*)0)) {
   FUNC_0(VAR_9 > VAR_5 - 3);
   VAR_8[VAR_9] = (void*)VAR_2;
  } else {
   VAR_8[VAR_9] = FUNC_2(VAR_3[VAR_9]) + VAR_4;
   if (VAR_9 < VAR_5 - 2) {
    VAR_11 = VAR_9;
    if (VAR_10 == -1)
     VAR_10 = VAR_9;
   }
  }
 }
 if (VAR_7->flags & VAR_0) {
  FUNC_0(!VAR_1.xor_syndrome);
  if (VAR_10 >= 0)
   VAR_1.xor_syndrome(VAR_5, VAR_10, VAR_11, VAR_6, VAR_8);
 } else
  VAR_1.gen_syndrome(VAR_5, VAR_6, VAR_8);
 FUNC_1(VAR_7);
}
