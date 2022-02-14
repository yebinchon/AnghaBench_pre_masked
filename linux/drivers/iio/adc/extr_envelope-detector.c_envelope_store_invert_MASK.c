
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct envelope {unsigned long invert; int read_lock; int comp_irq; int comp_irq_trigger; int comp_irq_trigger_inv; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct envelope* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char const*,int ,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct iio_dev *VAR_1,
         uintptr_t VAR_2,
         struct iio_chan_spec const *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 struct envelope *VAR_6 = FUNC_0(VAR_1);
 unsigned long VAR_7;
 int VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_2(VAR_4, 0, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_7 > 1)
  return -VAR_0;

 VAR_9 = VAR_7 ? VAR_6->comp_irq_trigger_inv : VAR_6->comp_irq_trigger;

 FUNC_3(&VAR_6->read_lock);
 if (VAR_7 != VAR_6->invert)
  VAR_8 = FUNC_1(VAR_6->comp_irq, VAR_9);
 if (!VAR_8) {
  VAR_6->invert = VAR_7;
  VAR_8 = VAR_5;
 }
 FUNC_4(&VAR_6->read_lock);

 return VAR_8;
}
