
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbefifo {scalar_t__ async_ffdc; scalar_t__ dead; TYPE_1__* fsi_dev; } ;
struct iov_iter {int dummy; } ;
struct device {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int const) ;
 int FUNC_1 (struct device*,char*,size_t,size_t) ;
 int FUNC_2 (struct sbefifo*) ;
 int FUNC_3 (struct sbefifo*) ;
 int FUNC_4 (struct sbefifo*,int const*,size_t,struct iov_iter*) ;
 int FUNC_5 (struct sbefifo*) ;

__attribute__((used)) static int FUNC_6(struct sbefifo *VAR_3,
       const __be32 *VAR_4, size_t VAR_5,
       struct iov_iter *VAR_6)
{
 struct device *VAR_7 = &VAR_3->fsi_dev->dev;
 int VAR_8;

 if (VAR_3->dead)
  return -VAR_1;

 if (VAR_5 < 2 || FUNC_0(VAR_4[0]) != VAR_5) {
  FUNC_1(VAR_7, "Invalid command len %zd (header: %d)\n",
    VAR_5, FUNC_0(VAR_4[0]));
  return -VAR_0;
 }


 VAR_8 = FUNC_2(VAR_3);
 if (VAR_8)
  return VAR_8;


 if (VAR_3->async_ffdc)
  FUNC_3(VAR_3);

 VAR_8 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8 != 0 && VAR_8 != -VAR_2)
  goto fail;
 return VAR_8;
 fail:




        FUNC_5(VAR_3);


 return VAR_8;
}
