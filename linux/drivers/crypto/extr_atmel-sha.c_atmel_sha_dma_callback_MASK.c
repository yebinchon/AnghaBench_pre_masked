
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_sha_dev {int is_async; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atmel_sha_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_2)
{
 struct atmel_sha_dev *VAR_3 = VAR_2;

 VAR_3->is_async = 1;


 FUNC_0(VAR_3, VAR_0, VAR_1);
}
