
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int mlock; } ;
struct iio_chan_spec {int type; } ;
struct ad5421_state {unsigned int fault_mask; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 struct ad5421_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_5,
 const struct iio_chan_spec *VAR_6, enum iio_event_type VAR_7,
 enum iio_event_direction VAR_8, int VAR_9)
{
 struct ad5421_state *VAR_10 = FUNC_0(VAR_5);
 unsigned int VAR_11;

 switch (VAR_6->type) {
 case 129:
  if (VAR_8 == VAR_4)
   VAR_11 = VAR_0;
  else
   VAR_11 = VAR_2;
  break;
 case 128:
  VAR_11 = VAR_1;
  break;
 default:
  return -VAR_3;
 }

 FUNC_1(&VAR_5->mlock);
 if (VAR_9)
  VAR_10->fault_mask |= VAR_11;
 else
  VAR_10->fault_mask &= ~VAR_11;
 FUNC_2(&VAR_5->mlock);

 return 0;
}
