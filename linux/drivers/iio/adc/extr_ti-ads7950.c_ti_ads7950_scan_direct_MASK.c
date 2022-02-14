
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_ads7950_state {int single_tx; int single_rx; int slock; int scan_single_msg; int spi; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 struct ti_ads7950_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_0, unsigned int VAR_1)
{
 struct ti_ads7950_state *VAR_2 = FUNC_2(VAR_0);
 int VAR_3, VAR_4;

 FUNC_3(&VAR_2->slock);
 VAR_4 = FUNC_1(FUNC_0(VAR_1));
 VAR_2->single_tx = VAR_4;

 VAR_3 = FUNC_5(VAR_2->spi, &VAR_2->scan_single_msg);
 if (VAR_3)
  goto out;

 VAR_3 = VAR_2->single_rx;

out:
 FUNC_4(&VAR_2->slock);

 return VAR_3;
}
