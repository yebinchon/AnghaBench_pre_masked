
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct stmpe_adc {scalar_t__ channel; int value; int lock; int stmpe; int completion; } ;
struct iio_chan_spec {scalar_t__ channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 long FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct stmpe_adc *VAR_6,
  struct iio_chan_spec const *VAR_7, int *VAR_8)
{
 long VAR_9;

 FUNC_1(&VAR_6->lock);

 FUNC_3(&VAR_6->completion);

 VAR_6->channel = (u8)VAR_7->channel;

 if (VAR_6->channel > VAR_2) {
  FUNC_2(&VAR_6->lock);
  return -VAR_0;
 }

 FUNC_4(VAR_6->stmpe, VAR_4,
   FUNC_0(VAR_6->channel));

 VAR_9 = FUNC_5(&VAR_6->completion, VAR_3);

 if (VAR_9 <= 0) {
  FUNC_4(VAR_6->stmpe, VAR_5,
    FUNC_0(VAR_6->channel));
  FUNC_2(&VAR_6->lock);
  return -VAR_1;
 }

 *VAR_8 = VAR_6->value;

 FUNC_2(&VAR_6->lock);

 return 0;
}
