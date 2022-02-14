
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct iio_dev {int dummy; } ;
struct TYPE_14__ {TYPE_4__* spi; } ;
struct ad7793_state {int conf; int** scale_avail; TYPE_5__ sd; TYPE_3__* chip_info; int mode; } ;
struct ad7793_platform_data {int exitation_current; int current_source_direction; scalar_t__ unipolar; scalar_t__ burnout_current; scalar_t__ boost_enable; scalar_t__ buffered; int bias_voltage; int refsel; int clock_src; } ;
struct TYPE_13__ {int dev; } ;
struct TYPE_12__ {int flags; TYPE_2__* channels; int id; } ;
struct TYPE_10__ {int realbits; } ;
struct TYPE_11__ {TYPE_1__ scan_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int**) ;
 int FUNC_6 (struct ad7793_state*) ;
 int FUNC_7 (struct ad7793_state*,struct ad7793_platform_data const*) ;
 int FUNC_8 (TYPE_5__*,int ) ;
 int FUNC_9 (TYPE_5__*,int ) ;
 int FUNC_10 (TYPE_5__*,int ,int,int *) ;
 int FUNC_11 (TYPE_5__*,int) ;
 int FUNC_12 (TYPE_5__*,int ,int,int) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (unsigned long long,int) ;
 struct ad7793_state* FUNC_15 (struct iio_dev*) ;
 int FUNC_16 (int,int) ;

__attribute__((used)) static int FUNC_17(struct iio_dev *VAR_14,
 const struct ad7793_platform_data *VAR_15,
 unsigned int VAR_16)
{
 struct ad7793_state *VAR_17 = FUNC_15(VAR_14);
 int VAR_18, VAR_19;
 unsigned long long VAR_20;
 u32 VAR_21;

 VAR_19 = FUNC_7(VAR_17, VAR_15);
 if (VAR_19)
  return VAR_19;


 VAR_19 = FUNC_11(&VAR_17->sd, 32);
 if (VAR_19 < 0)
  goto out;
 FUNC_16(500, 2000);


 VAR_19 = FUNC_10(&VAR_17->sd, VAR_11, 1, &VAR_21);
 if (VAR_19)
  goto out;

 VAR_21 &= VAR_10;

 if (VAR_21 != VAR_17->chip_info->id) {
  FUNC_13(&VAR_17->sd.spi->dev, "device ID query failed\n");
  goto out;
 }

 VAR_17->mode = FUNC_4(1);
 VAR_17->conf = 0;

 if (VAR_17->chip_info->flags & VAR_5)
  VAR_17->mode |= FUNC_3(VAR_15->clock_src);
 if (VAR_17->chip_info->flags & VAR_7)
  VAR_17->conf |= FUNC_1(VAR_15->refsel);
 if (VAR_17->chip_info->flags & VAR_8)
  VAR_17->conf |= FUNC_2(VAR_15->bias_voltage);
 if (VAR_15->buffered || !(VAR_17->chip_info->flags & VAR_4))
  VAR_17->conf |= VAR_2;
 if (VAR_15->boost_enable &&
  (VAR_17->chip_info->flags & VAR_8))
  VAR_17->conf |= VAR_0;
 if (VAR_15->burnout_current)
  VAR_17->conf |= VAR_1;
 if (VAR_15->unipolar)
  VAR_17->conf |= VAR_3;

 if (!(VAR_17->chip_info->flags & VAR_6))
  VAR_17->conf |= FUNC_0(7);

 VAR_19 = FUNC_9(&VAR_17->sd, VAR_13);
 if (VAR_19)
  goto out;

 VAR_19 = FUNC_8(&VAR_17->sd, 0);
 if (VAR_19)
  goto out;

 if (VAR_17->chip_info->flags & VAR_9) {
  VAR_19 = FUNC_12(&VAR_17->sd, VAR_12, 1,
    VAR_15->exitation_current |
    (VAR_15->current_source_direction << 2));
  if (VAR_19)
   goto out;
 }

 VAR_19 = FUNC_6(VAR_17);
 if (VAR_19)
  goto out;


 for (VAR_18 = 0; VAR_18 < FUNC_5(VAR_17->scale_avail); VAR_18++) {
  VAR_20 = ((u64)VAR_16 * 100000000)
   >> (VAR_17->chip_info->channels[0].scan_type.realbits -
   (!!(VAR_17->conf & VAR_3) ? 0 : 1));
  VAR_20 >>= VAR_18;

  VAR_17->scale_avail[VAR_18][1] = FUNC_14(VAR_20, 100000000) * 10;
  VAR_17->scale_avail[VAR_18][0] = VAR_20;
 }

 return 0;
out:
 FUNC_13(&VAR_17->sd.spi->dev, "setup failed\n");
 return VAR_19;
}
