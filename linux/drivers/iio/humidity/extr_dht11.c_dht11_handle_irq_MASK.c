
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct dht11 {size_t num_edges; int completion; int gpiod; TYPE_1__* edges; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int value; int ts; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct dht11* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 () ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct iio_dev *VAR_4 = VAR_3;
 struct dht11 *VAR_5 = FUNC_2(VAR_4);


 if (VAR_5->num_edges < VAR_0 && VAR_5->num_edges >= 0) {
  VAR_5->edges[VAR_5->num_edges].ts = FUNC_3();
  VAR_5->edges[VAR_5->num_edges++].value =
      FUNC_1(VAR_5->gpiod);

  if (VAR_5->num_edges >= VAR_0)
   FUNC_0(&VAR_5->completion);
 }

 return VAR_1;
}
