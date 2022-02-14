
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct si1145_data {int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; int address; int scan_index; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 struct si1145_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct si1145_data*,int ) ;
 int FUNC_4 (struct iio_dev*,int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_4,
     struct iio_chan_spec const *VAR_5)
{
 struct si1145_data *VAR_6 = FUNC_2(VAR_4);
 u8 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_4, FUNC_0(VAR_5->scan_index));
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = (VAR_5->type == VAR_1) ? VAR_3 :
  VAR_2;
 VAR_8 = FUNC_3(VAR_6, VAR_7);
 if (VAR_8 < 0 && VAR_8 != -VAR_0)
  return VAR_8;

 return FUNC_1(VAR_6->client, VAR_5->address);
}
