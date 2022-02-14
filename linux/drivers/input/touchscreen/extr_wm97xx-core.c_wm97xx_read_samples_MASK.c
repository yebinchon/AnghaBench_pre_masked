
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wm97xx_data {int x; int y; int p; } ;
struct wm97xx {int pen_is_down; int ts_reader_interval; int ts_reader_min_interval; int codec_mutex; int dev; int input_dev; TYPE_2__* codec; TYPE_1__* mach_ops; } ;
struct TYPE_4__ {int (* poll_touch ) (struct wm97xx*,struct wm97xx_data*) ;} ;
struct TYPE_3__ {int (* acc_pen_down ) (struct wm97xx*) ;scalar_t__ acc_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct wm97xx*) ;
 int FUNC_7 (struct wm97xx*,struct wm97xx_data*) ;

__attribute__((used)) static int FUNC_8(struct wm97xx *VAR_11)
{
 struct wm97xx_data VAR_12;
 int VAR_13;

 FUNC_4(&VAR_11->codec_mutex);

 if (VAR_11->mach_ops && VAR_11->mach_ops->acc_enabled)
  VAR_13 = VAR_11->mach_ops->acc_pen_down(VAR_11);
 else
  VAR_13 = VAR_11->codec->poll_touch(VAR_11, &VAR_12);

 if (VAR_13 & VAR_7) {
  if (VAR_11->pen_is_down) {
   VAR_11->pen_is_down = 0;
   FUNC_0(VAR_11->dev, "pen up\n");
   FUNC_1(VAR_11->input_dev, VAR_0, 0);
   FUNC_2(VAR_11->input_dev, VAR_3, 0);
   FUNC_3(VAR_11->input_dev);
  } else if (!(VAR_13 & VAR_5)) {
   if (VAR_11->ts_reader_interval < VAR_4 / 10)
    VAR_11->ts_reader_interval++;
  }

 } else if (VAR_13 & VAR_8) {
  FUNC_0(VAR_11->dev,
   "pen down: x=%x:%d, y=%x:%d, pressure=%x:%d\n",
   VAR_12.x >> 12, VAR_12.x & 0xfff, VAR_12.y >> 12,
   VAR_12.y & 0xfff, VAR_12.p >> 12, VAR_12.p & 0xfff);

  if (VAR_9[0] > (VAR_12.x & 0xfff) ||
      VAR_9[1] < (VAR_12.x & 0xfff) ||
      VAR_10[0] > (VAR_12.y & 0xfff) ||
      VAR_10[1] < (VAR_12.y & 0xfff)) {
   FUNC_0(VAR_11->dev, "Measurement out of range, dropping it\n");
   VAR_13 = VAR_5;
   goto out;
  }

  FUNC_1(VAR_11->input_dev, VAR_1, VAR_12.x & 0xfff);
  FUNC_1(VAR_11->input_dev, VAR_2, VAR_12.y & 0xfff);
  FUNC_1(VAR_11->input_dev, VAR_0, VAR_12.p & 0xfff);
  FUNC_2(VAR_11->input_dev, VAR_3, 1);
  FUNC_3(VAR_11->input_dev);
  VAR_11->pen_is_down = 1;
  VAR_11->ts_reader_interval = VAR_11->ts_reader_min_interval;
 } else if (VAR_13 & VAR_6) {
  FUNC_0(VAR_11->dev, "pen down\n");
  VAR_11->pen_is_down = 1;
  VAR_11->ts_reader_interval = VAR_11->ts_reader_min_interval;
 }

out:
 FUNC_5(&VAR_11->codec_mutex);
 return VAR_13;
}
