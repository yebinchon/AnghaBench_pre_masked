
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int mlock; int * buffer; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct iio_dev*,int *,int *) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
           struct device_attribute *VAR_1,
           const char *VAR_2,
           size_t VAR_3)
{
 int VAR_4;
 bool VAR_5;
 struct iio_dev *VAR_6 = FUNC_1(VAR_0);
 bool VAR_7;

 VAR_4 = FUNC_5(VAR_2, &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_3(&VAR_6->mlock);


 VAR_7 = FUNC_2(VAR_6->buffer);

 if (VAR_7 == VAR_5)
  goto done;

 if (VAR_5)
  VAR_4 = FUNC_0(VAR_6,
      VAR_6->buffer, ((void*)0));
 else
  VAR_4 = FUNC_0(VAR_6,
      ((void*)0), VAR_6->buffer);

done:
 FUNC_4(&VAR_6->mlock);
 return (VAR_4 < 0) ? VAR_4 : VAR_3;
}
