
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sps30_state {int lock; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 struct sps30_state* FUNC_2 (struct iio_dev*) ;
 scalar_t__ FUNC_3 (char const*,int ,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (struct sps30_state*,int ,int *,int ) ;
 int FUNC_9 (struct sps30_state*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_4,
           struct device_attribute *VAR_5,
           const char *VAR_6, size_t VAR_7)
{
 struct iio_dev *VAR_8 = FUNC_0(VAR_4);
 struct sps30_state *VAR_9 = FUNC_2(VAR_8);
 int VAR_10, VAR_11;
 u8 VAR_12[4];

 if (FUNC_3(VAR_6, 0, &VAR_10))
  return -VAR_0;

 if ((VAR_10 < VAR_3) ||
     (VAR_10 > VAR_2))
  return -VAR_0;

 FUNC_7(VAR_10, VAR_12);

 FUNC_5(&VAR_9->lock);
 VAR_11 = FUNC_8(VAR_9, VAR_1, VAR_12, 0);
 if (VAR_11) {
  FUNC_6(&VAR_9->lock);
  return VAR_11;
 }

 FUNC_4(20);





 VAR_11 = FUNC_9(VAR_9);
 if (VAR_11)
  FUNC_1(VAR_4,
    "period changed but reads will return the old value\n");

 FUNC_6(&VAR_9->lock);

 return VAR_7;
}
