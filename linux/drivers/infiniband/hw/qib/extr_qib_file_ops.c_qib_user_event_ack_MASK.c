
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_ctxtdata {int * user_event_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct qib_ctxtdata*) ;
 int FUNC_2 (struct qib_ctxtdata*) ;
 int FUNC_3 (int,unsigned long*) ;

__attribute__((used)) static int FUNC_4(struct qib_ctxtdata *VAR_2, int VAR_3,
         unsigned long VAR_4)
{
 int VAR_5 = 0, VAR_6;

 for (VAR_6 = 0; VAR_6 <= VAR_1; VAR_6++) {
  if (!FUNC_3(VAR_6, &VAR_4))
   continue;
  if (VAR_6 == VAR_0) {
   (void)FUNC_2(VAR_2);
   VAR_5 = FUNC_1(VAR_2);
  } else
   FUNC_0(VAR_6, &VAR_2->user_event_mask[VAR_3]);
 }
 return VAR_5;
}
