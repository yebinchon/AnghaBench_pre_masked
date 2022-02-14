
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct w83627ehf_sio_data {scalar_t__ kind; } ;
struct w83627ehf_data {long* tolerance; int update_lock; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (long,int) ;
 int * VAR_0 ;
 int * VAR_1 ;
 long FUNC_1 (int ,int ,int) ;
 struct w83627ehf_data* FUNC_2 (struct device*) ;
 struct w83627ehf_sio_data* FUNC_3 (struct device*) ;
 int FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sensor_device_attribute* FUNC_7 (struct device_attribute*) ;
 int FUNC_8 (struct w83627ehf_data*,int ) ;
 int FUNC_9 (struct w83627ehf_data*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_10(struct device *VAR_4, struct device_attribute *VAR_5,
   const char *VAR_6, size_t VAR_7)
{
 struct w83627ehf_data *VAR_8 = FUNC_2(VAR_4);
 struct w83627ehf_sio_data *VAR_9 = FUNC_3(VAR_4);
 struct sensor_device_attribute *VAR_10 = FUNC_7(VAR_5);
 int VAR_11 = VAR_10->index;
 u16 VAR_12;
 long VAR_13;
 int VAR_14;

 VAR_14 = FUNC_4(VAR_6, 10, &VAR_13);
 if (VAR_14 < 0)
  return VAR_14;


 VAR_13 = FUNC_1(FUNC_0(VAR_13, 1000), 0, 15);

 FUNC_5(&VAR_8->update_lock);
 if (VAR_9->kind == VAR_2 || VAR_9->kind == VAR_3) {

  if (VAR_9->kind == VAR_3 && VAR_13 > 7)
   VAR_13 = 7;
  VAR_12 = FUNC_8(VAR_8, VAR_0[VAR_11]);
  VAR_12 = (VAR_12 & 0xf0) | VAR_13;
  FUNC_9(VAR_8, VAR_0[VAR_11], VAR_12);
 } else {
  VAR_12 = FUNC_8(VAR_8, VAR_1[VAR_11]);
  if (VAR_11 == 1)
   VAR_12 = (VAR_12 & 0x0f) | (VAR_13 << 4);
  else
   VAR_12 = (VAR_12 & 0xf0) | VAR_13;
  FUNC_9(VAR_8, VAR_1[VAR_11], VAR_12);
 }
 VAR_8->tolerance[VAR_11] = VAR_13;
 FUNC_6(&VAR_8->update_lock);
 return VAR_7;
}
