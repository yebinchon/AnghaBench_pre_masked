
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_sw_device {struct iio_dev* device; } ;
struct iio_dummy_state {int lock; } ;
struct iio_dev {int modes; int * info; int num_channels; int channels; int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct iio_sw_device* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct iio_dev* FUNC_2 (int) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct iio_dev*) ;
 int VAR_5 ;
 struct iio_dummy_state* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (struct iio_sw_device*,char const*,int *) ;
 int FUNC_12 (struct iio_sw_device*) ;
 int FUNC_13 (char const*,int ) ;
 struct iio_sw_device* FUNC_14 (int,int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static struct iio_sw_device *FUNC_16(const char *VAR_6)
{
 int VAR_7;
 struct iio_dev *VAR_8;
 struct iio_dummy_state *VAR_9;
 struct iio_sw_device *VAR_10;

 VAR_10 = FUNC_14(sizeof(*VAR_10), VAR_1);
 if (!VAR_10) {
  VAR_7 = -VAR_0;
  goto error_kzalloc;
 }
 VAR_8 = FUNC_2(sizeof(*VAR_9));
 if (!VAR_8) {
  VAR_7 = -VAR_0;
  goto error_ret;
 }

 VAR_9 = FUNC_6(VAR_8);
 FUNC_15(&VAR_9->lock);

 FUNC_5(VAR_8);
 VAR_10->device = VAR_8;
 VAR_8->name = FUNC_13(VAR_6, VAR_1);


 VAR_8->channels = VAR_3;
 VAR_8->num_channels = FUNC_0(VAR_3);





 VAR_8->info = &VAR_4;


 VAR_8->modes = VAR_2;

 VAR_7 = FUNC_8(VAR_8);
 if (VAR_7 < 0)
  goto error_free_device;

 VAR_7 = FUNC_7(VAR_8);
 if (VAR_7 < 0)
  goto error_unregister_events;

 VAR_7 = FUNC_4(VAR_8);
 if (VAR_7 < 0)
  goto error_unconfigure_buffer;

 FUNC_11(VAR_10, VAR_6, &VAR_5);

 return VAR_10;
error_unconfigure_buffer:
 FUNC_10(VAR_8);
error_unregister_events:
 FUNC_9(VAR_8);
error_free_device:
 FUNC_3(VAR_8);
error_ret:
 FUNC_12(VAR_10);
error_kzalloc:
 return FUNC_1(VAR_7);
}
