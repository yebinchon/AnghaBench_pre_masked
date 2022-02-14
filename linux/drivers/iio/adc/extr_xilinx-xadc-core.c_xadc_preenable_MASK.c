
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xadc {int dummy; } ;
struct iio_dev {unsigned long* active_scan_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct xadc* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct xadc*,unsigned long) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct xadc*,int) ;
 int FUNC_5 (struct xadc*,int ,int ,int) ;
 int FUNC_6 (struct xadc*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_3)
{
 struct xadc *VAR_4 = FUNC_1(VAR_3);
 unsigned long VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_5(VAR_4, VAR_2, VAR_1,
  VAR_0);
 if (VAR_7)
  goto err;

 VAR_5 = *VAR_3->active_scan_mask;
 VAR_6 = FUNC_2(VAR_4, VAR_5);

 VAR_7 = FUNC_6(VAR_4, FUNC_0(0), VAR_5 & 0xffff);
 if (VAR_7)
  goto err;

 VAR_7 = FUNC_6(VAR_4, FUNC_0(1), VAR_5 >> 16);
 if (VAR_7)
  goto err;

 VAR_7 = FUNC_4(VAR_4, VAR_6);
 if (VAR_7)
  goto err;

 VAR_7 = FUNC_5(VAR_4, VAR_2, VAR_1,
  VAR_6);
 if (VAR_7)
  goto err;

 return 0;
err:
 FUNC_3(VAR_3);
 return VAR_7;
}
