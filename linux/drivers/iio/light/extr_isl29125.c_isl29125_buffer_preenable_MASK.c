
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl29125_data {int conf1; int client; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 struct isl29125_data* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2)
{
 struct isl29125_data *VAR_3 = FUNC_1(VAR_2);

 VAR_3->conf1 |= VAR_1;
 return FUNC_0(VAR_3->client, VAR_0,
  VAR_3->conf1);
}
