
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct serdev_device {int dummy; } ;
struct pms7003_frame {int expected_length; int length; scalar_t__ data; } ;
struct pms7003_state {int frame_ready; struct pms7003_frame frame; } ;
struct iio_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (unsigned char const*) ;
 struct pms7003_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (scalar_t__,unsigned char const*,int) ;
 int FUNC_4 (size_t,size_t) ;
 scalar_t__ FUNC_5 (struct pms7003_frame*) ;
 struct iio_dev* FUNC_6 (struct serdev_device*) ;

__attribute__((used)) static int FUNC_7(struct serdev_device *VAR_2,
          const unsigned char *VAR_3, size_t VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_6(VAR_2);
 struct pms7003_state *VAR_6 = FUNC_2(VAR_5);
 struct pms7003_frame *VAR_7 = &VAR_6->frame;
 int VAR_8;

 if (!VAR_7->expected_length) {
  u16 VAR_9;


  if (VAR_4 < 4)
   return 0;

  VAR_9 = FUNC_1(VAR_3);
  if (VAR_9 != VAR_0)
   return 2;

  VAR_8 = FUNC_1(VAR_3 + 2);
  if (VAR_8 <= VAR_1) {
   VAR_7->expected_length = VAR_8;
   VAR_7->length = 0;
  }

  return 4;
 }

 VAR_8 = FUNC_4(VAR_4, (size_t)(VAR_7->expected_length - VAR_7->length));
 FUNC_3(VAR_7->data + VAR_7->length, VAR_3, VAR_8);
 VAR_7->length += VAR_8;

 if (VAR_7->length == VAR_7->expected_length) {
  if (FUNC_5(VAR_7))
   FUNC_0(&VAR_6->frame_ready);

  VAR_7->expected_length = 0;
 }

 return VAR_8;
}
