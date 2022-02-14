
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {scalar_t__ type; int preserve_context; int start; scalar_t__ head; int swap_page; int control_code_page; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (void*,int (*) (unsigned long,unsigned long,int ,int ,int ),int ) ;
 void* FUNC_8 (int ) ;
 unsigned long FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (unsigned long,unsigned long,int ,int ,int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 () ;
 unsigned long FUNC_18 (void*) ;

void FUNC_19(struct kimage *VAR_9)
{
 unsigned long VAR_10[VAR_2];
 void *VAR_11;
 int VAR_12;






 VAR_12 = FUNC_1();


 FUNC_6();
 FUNC_4();

 if (VAR_9->preserve_context) {
 }

 VAR_11 = FUNC_8(VAR_9->control_code_page) + VAR_4;
 FUNC_7(VAR_11, FUNC_11, VAR_0);

 VAR_10[VAR_5] = FUNC_18(VAR_11);
 VAR_10[VAR_8] = (unsigned long)VAR_11;
 VAR_10[VAR_7] =
   (unsigned long)FUNC_2(FUNC_8(VAR_9->control_code_page));

 if (VAR_9->type == VAR_1)
  VAR_10[VAR_6] = (FUNC_9(VAR_9->swap_page)
      << VAR_3);
 FUNC_5();




 FUNC_15(FUNC_10(0), 0);
 FUNC_16(FUNC_10(0), 0);


 VAR_9->start = FUNC_11((unsigned long)VAR_9->head,
           (unsigned long)VAR_10,
           VAR_9->start,
           VAR_9->preserve_context,
           FUNC_17());






 FUNC_0(VAR_12);
}
