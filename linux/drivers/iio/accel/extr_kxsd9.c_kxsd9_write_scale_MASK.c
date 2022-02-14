
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kxsd9_state {int scale; int map; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct kxsd9_state* FUNC_0 (struct iio_dev*) ;
 int* VAR_3 ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 struct kxsd9_state *VAR_8 = FUNC_0(VAR_4);
 bool VAR_9 = 0;

 for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
  if (VAR_5 == VAR_3[VAR_7]) {
   VAR_9 = 1;
   break;
  }
 if (!VAR_9)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_8->map,
     VAR_2,
     VAR_1,
     VAR_7);
 if (VAR_6 < 0)
  goto error_ret;


 VAR_8->scale = VAR_7;

error_ret:
 return VAR_6;
}
