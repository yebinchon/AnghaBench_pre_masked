
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
 int FUNC_0 () ;
 int FUNC_1 (struct tegra_i2c_dev*,int ) ;
 int FUNC_2 (struct tegra_i2c_dev*,int,int ) ;
 int FUNC_3 (struct tegra_i2c_dev*,int *,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int*,int *,size_t) ;

__attribute__((used)) static int FUNC_6(struct tegra_i2c_dev *VAR_8)
{
 u32 VAR_9;
 int VAR_10;
 u8 *VAR_11 = VAR_8->msg_buf;
 size_t VAR_12 = VAR_8->msg_buf_remaining;
 int VAR_13;

 if (VAR_8->hw->has_mst_fifo) {
  VAR_9 = FUNC_1(VAR_8, VAR_4);
  VAR_10 = (VAR_9 & VAR_5) >>
   VAR_6;
 } else {
  VAR_9 = FUNC_1(VAR_8, VAR_1);
  VAR_10 = (VAR_9 & VAR_2) >>
   VAR_3;
 }


 VAR_13 = VAR_12 / VAR_0;


 if (VAR_13) {
  if (VAR_13 > VAR_10)
   VAR_13 = VAR_10;
  VAR_12 -= VAR_13 * VAR_0;
  VAR_10 -= VAR_13;
  VAR_8->msg_buf_remaining = VAR_12;
  VAR_8->msg_buf = VAR_11 +
   VAR_13 * VAR_0;
  FUNC_0();

  FUNC_3(VAR_8, VAR_11, VAR_7, VAR_13);

  VAR_11 += VAR_13 * VAR_0;
 }






 if (VAR_10 > 0 && VAR_12 > 0) {





  FUNC_5(&VAR_9, VAR_11, VAR_12);
  VAR_9 = FUNC_4(VAR_9);


  VAR_8->msg_buf_remaining = 0;
  VAR_8->msg_buf = ((void*)0);
  FUNC_0();

  FUNC_2(VAR_8, VAR_9, VAR_7);
 }

 return 0;
}
