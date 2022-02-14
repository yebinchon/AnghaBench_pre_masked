
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int* active_scan_mask; int trig; } ;
struct ad799x_state {int id; int config; int rx_buf; int transfer_size; int client; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (struct iio_dev*) ;
 struct ad799x_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct iio_poll_func *VAR_6 = VAR_5;
 struct iio_dev *VAR_7 = VAR_6->indio_dev;
 struct ad799x_state *VAR_8 = FUNC_2(VAR_7);
 int VAR_9;
 u8 VAR_10;

 switch (VAR_8->id) {
 case 135:
 case 131:
 case 128:
  VAR_10 = VAR_8->config |
   (*VAR_7->active_scan_mask << VAR_2);
  break;
 case 134:
 case 133:
 case 132:
  VAR_10 = (*VAR_7->active_scan_mask << VAR_2) |
   VAR_1;
  break;
 case 130:
 case 129:
  VAR_10 = VAR_0 | VAR_1;
  break;
 default:
  VAR_10 = 0;
 }

 VAR_9 = FUNC_0(VAR_8->client,
   VAR_10, VAR_8->transfer_size, VAR_8->rx_buf);
 if (VAR_9 < 0)
  goto out;

 FUNC_3(VAR_7, VAR_8->rx_buf,
   FUNC_1(VAR_7));
out:
 FUNC_4(VAR_7->trig);

 return VAR_3;
}
