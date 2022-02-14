
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int mlock; } ;
struct TYPE_2__ {int shift; scalar_t__ realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; } ;
struct ad799x_state {int client; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct iio_chan_spec const*,int,int) ;
 int FUNC_2 (int ,int ,int) ;
 struct ad799x_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_1,
        const struct iio_chan_spec *VAR_2,
        enum iio_event_type VAR_3,
        enum iio_event_direction VAR_4,
        enum iio_event_info VAR_5,
        int VAR_6, int VAR_7)
{
 int VAR_8;
 struct ad799x_state *VAR_9 = FUNC_3(VAR_1);

 if (VAR_6 < 0 || VAR_6 > FUNC_0(VAR_2->scan_type.realbits - 1, 0))
  return -VAR_0;

 FUNC_4(&VAR_1->mlock);
 VAR_8 = FUNC_2(VAR_9->client,
  FUNC_1(VAR_2, VAR_4, VAR_5),
  VAR_6 << VAR_2->scan_type.shift);
 FUNC_5(&VAR_1->mlock);

 return VAR_8;
}
