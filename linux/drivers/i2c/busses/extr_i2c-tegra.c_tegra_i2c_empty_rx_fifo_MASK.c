
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tegra_i2c_dev {size_t msg_buf_remaining; int * msg_buf; TYPE_1__* hw; } ;
struct TYPE_2__ {scalar_t__ has_mst_fifo; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct tegra_i2c_dev*,int ) ;
 int FUNC_3 (struct tegra_i2c_dev*,int *,int ,int) ;
 int FUNC_4 (int *,int*,size_t) ;

__attribute__((used)) static int FUNC_5(struct tegra_i2c_dev *VAR_9)
{
 u32 VAR_10;
 int VAR_11;
 u8 *VAR_12 = VAR_9->msg_buf;
 size_t VAR_13 = VAR_9->msg_buf_remaining;
 int VAR_14;





 if (FUNC_0(!(VAR_9->msg_buf_remaining)))
  return -VAR_1;

 if (VAR_9->hw->has_mst_fifo) {
  VAR_10 = FUNC_2(VAR_9, VAR_5);
  VAR_11 = (VAR_10 & VAR_6) >>
   VAR_7;
 } else {
  VAR_10 = FUNC_2(VAR_9, VAR_2);
  VAR_11 = (VAR_10 & VAR_3) >>
   VAR_4;
 }


 VAR_14 = VAR_13 / VAR_0;
 if (VAR_14 > VAR_11)
  VAR_14 = VAR_11;

 FUNC_3(VAR_9, VAR_12, VAR_8, VAR_14);

 VAR_12 += VAR_14 * VAR_0;
 VAR_13 -= VAR_14 * VAR_0;
 VAR_11 -= VAR_14;





 if (VAR_11 > 0 && VAR_13 > 0) {





  VAR_10 = FUNC_2(VAR_9, VAR_8);
  VAR_10 = FUNC_1(VAR_10);
  FUNC_4(VAR_12, &VAR_10, VAR_13);
  VAR_13 = 0;
  VAR_11--;
 }


 if (FUNC_0(VAR_11))
  return -VAR_1;

 VAR_9->msg_buf_remaining = VAR_13;
 VAR_9->msg_buf = VAR_12;

 return 0;
}
