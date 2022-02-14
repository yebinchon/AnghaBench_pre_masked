
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atmel_aes_dev {int (* resume ) (struct atmel_aes_dev*) ;} ;
typedef int (* atmel_aes_fn_t ) (struct atmel_aes_dev*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct atmel_aes_dev*,int ) ;
 int FUNC_1 (struct atmel_aes_dev*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(struct atmel_aes_dev *VAR_4,
      atmel_aes_fn_t VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_4, VAR_2);

 if (FUNC_2(VAR_6 & VAR_1))
  return VAR_5(VAR_4);

 VAR_4->resume = VAR_5;
 FUNC_1(VAR_4, VAR_0, VAR_1);
 return -VAR_3;
}
