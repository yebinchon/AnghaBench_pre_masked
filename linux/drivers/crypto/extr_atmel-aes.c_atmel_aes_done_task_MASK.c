
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_aes_dev {int is_async; int (* resume ) (struct atmel_aes_dev*) ;} ;


 int FUNC_0 (struct atmel_aes_dev*) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0)
{
 struct atmel_aes_dev *VAR_1 = (struct atmel_aes_dev *)VAR_0;

 VAR_1->is_async = 1;
 (void)VAR_1->resume(VAR_1);
}
