
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_8__ {scalar_t__ count; int slave_adr; } ;
struct TYPE_6__ {int timeout; } ;
struct nmk_i2c_dev {TYPE_4__ cli; TYPE_3__* adev; TYPE_2__ adap; int xfer_complete; scalar_t__ virtbase; TYPE_1__* vendor; scalar_t__ stop; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_5__ {int has_mtdws; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int) ;
 int VAR_13 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct nmk_i2c_dev*,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nmk_i2c_dev*,int ) ;
 int FUNC_6 (scalar_t__) ;
 unsigned long FUNC_7 (int *,int ) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct nmk_i2c_dev *VAR_14, u16 VAR_15)
{
 u32 VAR_16 = 0;
 u32 VAR_17, VAR_18;
 unsigned long VAR_19;

 VAR_17 = FUNC_5(VAR_14, VAR_15);

 FUNC_8(VAR_17, VAR_14->virtbase + VAR_12);


 FUNC_8(FUNC_6(VAR_14->virtbase + VAR_3) | VAR_0,
   VAR_14->virtbase + VAR_3);


 FUNC_3(VAR_14->virtbase + VAR_3 , VAR_4);

 FUNC_4(&VAR_14->xfer_complete);


 VAR_18 = (VAR_11 | VAR_7 | VAR_6);


 FUNC_2(VAR_14, VAR_13);

 if (VAR_14->cli.count != 0)
  VAR_18 |= VAR_10;






 if (VAR_14->stop || !VAR_14->vendor->has_mtdws)
  VAR_18 |= VAR_8;
 else
  VAR_18 |= VAR_9;

 VAR_18 = VAR_2 & FUNC_0(VAR_18);

 FUNC_8(FUNC_6(VAR_14->virtbase + VAR_5) | VAR_18,
   VAR_14->virtbase + VAR_5);

 VAR_19 = FUNC_7(
  &VAR_14->xfer_complete, VAR_14->adap.timeout);

 if (VAR_19 == 0) {

  FUNC_1(&VAR_14->adev->dev, "write to slave 0x%x timed out\n",
    VAR_14->cli.slave_adr);
  VAR_16 = -VAR_1;
 }

 return VAR_16;
}
