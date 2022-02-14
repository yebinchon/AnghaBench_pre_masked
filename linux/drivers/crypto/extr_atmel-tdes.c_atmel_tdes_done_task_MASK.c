
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_tdes_dev {int flags; int err; void* out_sg; void* in_sg; scalar_t__ total; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atmel_tdes_dev*) ;
 int FUNC_1 (struct atmel_tdes_dev*) ;
 int FUNC_2 (struct atmel_tdes_dev*) ;
 int FUNC_3 (struct atmel_tdes_dev*,int) ;
 int FUNC_4 (struct atmel_tdes_dev*,int *) ;
 void* FUNC_5 (void*) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_3)
{
 struct atmel_tdes_dev *VAR_4 = (struct atmel_tdes_dev *) VAR_3;
 int VAR_5;

 if (!(VAR_4->flags & VAR_1))
  VAR_5 = FUNC_1(VAR_4);
 else
  VAR_5 = FUNC_0(VAR_4);

 VAR_5 = VAR_4->err ? : VAR_5;

 if (VAR_4->total && !VAR_5) {
  if (VAR_4->flags & VAR_2) {
   VAR_4->in_sg = FUNC_5(VAR_4->in_sg);
   VAR_4->out_sg = FUNC_5(VAR_4->out_sg);
   if (!VAR_4->in_sg || !VAR_4->out_sg)
    VAR_5 = -VAR_0;
  }
  if (!VAR_5)
   VAR_5 = FUNC_2(VAR_4);
  if (!VAR_5)
   return;
 }

 FUNC_3(VAR_4, VAR_5);
 FUNC_4(VAR_4, ((void*)0));
}
