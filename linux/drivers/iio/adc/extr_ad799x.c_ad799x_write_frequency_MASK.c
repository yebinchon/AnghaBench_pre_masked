
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int mlock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad799x_state {int client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (long*) ;
 int VAR_2 ;
 long* VAR_3 ;
 struct iio_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 struct ad799x_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (char const*,int,long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_4,
      struct device_attribute *VAR_5,
      const char *VAR_6,
      size_t VAR_7)
{
 struct iio_dev *VAR_8 = FUNC_1(VAR_4);
 struct ad799x_state *VAR_9 = FUNC_4(VAR_8);

 long VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_5(VAR_6, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_6(&VAR_8->mlock);
 VAR_11 = FUNC_2(VAR_9->client, VAR_0);
 if (VAR_11 < 0)
  goto error_ret_mutex;

 VAR_11 &= ~VAR_1;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_3); VAR_12++)
  if (VAR_10 == VAR_3[VAR_12])
   break;
 if (VAR_12 == FUNC_0(VAR_3)) {
  VAR_11 = -VAR_2;
  goto error_ret_mutex;
 }

 VAR_11 = FUNC_3(VAR_9->client, VAR_0,
  VAR_11 | VAR_12);
 if (VAR_11 < 0)
  goto error_ret_mutex;
 VAR_11 = VAR_7;

error_ret_mutex:
 FUNC_7(&VAR_8->mlock);

 return VAR_11;
}
