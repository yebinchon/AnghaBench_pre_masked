
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mux {TYPE_4__* child; TYPE_2__* ext_info; int parent; struct iio_chan_spec const* chan; } ;
struct TYPE_5__ {struct device* parent; } ;
struct iio_dev {TYPE_1__ dev; } ;
struct iio_chan_spec {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_8__ {TYPE_3__* ext_info_cache; } ;
struct TYPE_7__ {char* data; size_t size; } ;
struct TYPE_6__ {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 char* FUNC_1 (struct device*,char const*,size_t,int ) ;
 int FUNC_2 (struct mux*) ;
 scalar_t__ FUNC_3 (struct mux*,int) ;
 struct mux* FUNC_4 (struct iio_dev*) ;
 scalar_t__ FUNC_5 (int ,int ,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_6(struct iio_dev *VAR_4, uintptr_t VAR_5,
      struct iio_chan_spec const *VAR_6,
      const char *VAR_7, size_t VAR_8)
{
 struct device *VAR_9 = VAR_4->dev.parent;
 struct mux *VAR_10 = FUNC_4(VAR_4);
 int VAR_11 = VAR_6 - VAR_10->chan;
 char *VAR_12;
 ssize_t VAR_13;

 if (VAR_8 >= VAR_3)
  return -VAR_0;

 VAR_13 = FUNC_3(VAR_10, VAR_11);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = FUNC_1(VAR_9, VAR_7, VAR_8 + 1, VAR_2);
 if (!VAR_12) {
  FUNC_2(VAR_10);
  return -VAR_1;
 }

 VAR_12[VAR_8] = 0;

 VAR_13 = FUNC_5(VAR_10->parent,
      VAR_10->ext_info[VAR_5].name,
      VAR_7, VAR_8);
 if (VAR_13 < 0) {
  FUNC_2(VAR_10);
  FUNC_0(VAR_9, VAR_12);
  return VAR_13;
 }

 FUNC_0(VAR_9, VAR_10->child[VAR_11].ext_info_cache[VAR_5].data);
 VAR_10->child[VAR_11].ext_info_cache[VAR_5].data = VAR_12;
 VAR_10->child[VAR_11].ext_info_cache[VAR_5].size = VAR_8;

 FUNC_2(VAR_10);

 return VAR_13;
}
