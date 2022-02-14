
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct us5182d_data {int client; } ;
struct iio_dev {int dummy; } ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 struct us5182d_data* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_4,
         enum iio_event_direction VAR_5, u16 VAR_6)
{
 struct us5182d_data *VAR_7 = FUNC_1(VAR_4);

 if (VAR_5 == VAR_0)
  return FUNC_0(VAR_7->client,
       VAR_3, VAR_6);
 else if (VAR_5 == VAR_1)
  return FUNC_0(VAR_7->client,
       VAR_2, VAR_6);

 return 0;
}
