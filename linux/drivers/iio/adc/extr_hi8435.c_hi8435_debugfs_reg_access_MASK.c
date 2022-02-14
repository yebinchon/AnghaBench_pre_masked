
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct iio_dev {int dummy; } ;
struct hi8435_priv {int dummy; } ;


 int FUNC_0 (struct hi8435_priv*,unsigned int,unsigned int*) ;
 int FUNC_1 (struct hi8435_priv*,unsigned int,unsigned int) ;
 struct hi8435_priv* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_0,
         unsigned VAR_1, unsigned VAR_2,
         unsigned *VAR_3)
{
 struct hi8435_priv *VAR_4 = FUNC_2(VAR_0);
 int VAR_5;
 u8 VAR_6;

 if (VAR_3 != ((void*)0)) {
  VAR_5 = FUNC_0(VAR_4, VAR_1, &VAR_6);
  *VAR_3 = VAR_6;
 } else {
  VAR_6 = (u8)VAR_2;
  VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_6);
 }

 return VAR_5;
}
