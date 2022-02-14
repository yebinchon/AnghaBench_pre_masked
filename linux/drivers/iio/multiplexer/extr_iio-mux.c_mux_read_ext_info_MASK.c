
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mux {TYPE_1__* ext_info; int parent; struct iio_chan_spec const* chan; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (struct mux*) ;
 scalar_t__ FUNC_1 (struct mux*,int) ;
 struct mux* FUNC_2 (struct iio_dev*) ;
 scalar_t__ FUNC_3 (int ,int ,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct iio_dev *VAR_0, uintptr_t VAR_1,
     struct iio_chan_spec const *VAR_2, char *VAR_3)
{
 struct mux *VAR_4 = FUNC_2(VAR_0);
 int VAR_5 = VAR_2 - VAR_4->chan;
 ssize_t VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_4->parent,
     VAR_4->ext_info[VAR_1].name,
     VAR_3);

 FUNC_0(VAR_4);

 return VAR_6;
}
