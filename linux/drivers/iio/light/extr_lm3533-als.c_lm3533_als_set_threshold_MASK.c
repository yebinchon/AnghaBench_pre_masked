
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct lm3533_als {int thresh_mutex; int lm3533; } ;
struct iio_dev {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct lm3533_als* FUNC_1 (struct iio_dev*) ;
 scalar_t__ FUNC_2 (unsigned int,int) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__*) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_2, unsigned VAR_3,
       bool VAR_4, u8 VAR_5)
{
 struct lm3533_als *VAR_6 = FUNC_1(VAR_2);
 u8 VAR_7;
 u8 VAR_8, VAR_9;
 int VAR_10;

 if (VAR_3 > VAR_1)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_3, VAR_4);
 VAR_9 = FUNC_2(VAR_3, !VAR_4);

 FUNC_5(&VAR_6->thresh_mutex);
 VAR_10 = FUNC_3(VAR_6->lm3533, VAR_9, &VAR_7);
 if (VAR_10) {
  FUNC_0(&VAR_2->dev, "failed to get threshold\n");
  goto out;
 }





 if ((VAR_4 && (VAR_5 < VAR_7)) || (!VAR_4 && (VAR_5 > VAR_7))) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_10 = FUNC_4(VAR_6->lm3533, VAR_8, VAR_5);
 if (VAR_10) {
  FUNC_0(&VAR_2->dev, "failed to set threshold\n");
  goto out;
 }
out:
 FUNC_6(&VAR_6->thresh_mutex);

 return VAR_10;
}
