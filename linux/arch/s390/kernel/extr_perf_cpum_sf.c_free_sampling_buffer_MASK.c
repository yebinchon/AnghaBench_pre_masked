
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sf_buffer {unsigned long* sdbt; } ;


 int FUNC_0 (int ,int,char*,unsigned long*) ;
 int FUNC_1 (unsigned long) ;
 unsigned long* FUNC_2 (unsigned long*) ;
 scalar_t__ FUNC_3 (unsigned long*) ;
 int FUNC_4 (struct sf_buffer*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct sf_buffer *VAR_1)
{
 unsigned long *VAR_2, *VAR_3;

 if (!VAR_1->sdbt)
  return;

 VAR_2 = VAR_1->sdbt;
 VAR_3 = VAR_2;


 while (1) {
  if (!*VAR_3 || !VAR_2)
   break;


  if (FUNC_3(VAR_3)) {
   VAR_3 = FUNC_2(VAR_3);
   if (VAR_2)
    FUNC_1((unsigned long) VAR_2);


   if (VAR_3 == VAR_1->sdbt)
    break;
   else
    VAR_2 = VAR_3;
  } else {

   if (*VAR_3) {
    FUNC_1(*VAR_3);
    VAR_3++;
   }
  }
 }

 FUNC_0(VAR_0, 5,
       "free_sampling_buffer: freed sdbt=%p\n", VAR_1->sdbt);
 FUNC_4(VAR_1, 0, sizeof(*VAR_1));
}
