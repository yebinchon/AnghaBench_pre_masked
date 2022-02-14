
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_map_internal {int l; struct iio_dev* indio_dev; struct iio_map* map; } ;
struct iio_map {int * consumer_dev_name; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iio_map_internal* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct iio_dev *VAR_4, struct iio_map *VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0;
 struct iio_map_internal *VAR_8;

 if (VAR_5 == ((void*)0))
  return 0;

 FUNC_2(&VAR_3);
 while (VAR_5[VAR_6].consumer_dev_name != ((void*)0)) {
  VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_1);
  if (VAR_8 == ((void*)0)) {
   VAR_7 = -VAR_0;
   goto error_ret;
  }
  VAR_8->map = &VAR_5[VAR_6];
  VAR_8->indio_dev = VAR_4;
  FUNC_1(&VAR_8->l, &VAR_2);
  VAR_6++;
 }
error_ret:
 FUNC_3(&VAR_3);

 return VAR_7;
}
