
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dev; } ;
struct TYPE_11__ {scalar_t__ index; int report_id; int size; } ;
struct TYPE_10__ {TYPE_5__ sensitivity; } ;
struct TYPE_9__ {TYPE_5__ sensitivity; } ;
struct TYPE_8__ {int scale_post_decml; int scale_pre_decml; void* scale_precision; } ;
struct TYPE_7__ {int scale_post_decml; int scale_pre_decml; void* scale_precision; } ;
struct magn_3d_state {TYPE_4__ rot_attributes; TYPE_3__ magn_flux_attributes; TYPE_2__ rot_attr; TYPE_5__* magn; TYPE_1__ magn_flux_attr; int * iio_vals; int ** magn_val_addr; } ;
struct iio_chan_spec {int scan_index; int address; } ;
struct hid_sensor_hub_device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,char*,scalar_t__,...) ;
 int FUNC_1 (int *,char*) ;
 void* FUNC_2 (int *,int,int,int ) ;
 void* FUNC_3 (int,TYPE_5__*,int *,int *) ;
 int* VAR_13 ;
 int FUNC_4 (struct iio_chan_spec*,int,int ) ;
 struct iio_chan_spec* VAR_14 ;
 int FUNC_5 (struct hid_sensor_hub_device*,int ,unsigned int,int,TYPE_5__*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_15,
    struct hid_sensor_hub_device *VAR_16,
    struct iio_chan_spec **VAR_17,
    int *VAR_18,
    unsigned VAR_19,
    struct magn_3d_state *VAR_20)
{
 int VAR_21;
 int VAR_22 = 0;
 struct iio_chan_spec *VAR_23;


 for (VAR_21 = 0; VAR_21 < VAR_12; VAR_21++) {
  int VAR_24;
  u32 VAR_25 = VAR_13[VAR_21];


  VAR_24 = FUNC_5(VAR_16,
   VAR_6,
   VAR_19,
   VAR_25,
   &(VAR_20->magn[VAR_21]));
  if (!VAR_24)
   VAR_22++;
 }

 if (VAR_22 <= 0) {
  FUNC_1(&VAR_15->dev,
   "failed to find any supported usage attributes in report\n");
  return -VAR_2;
 }

 FUNC_0(&VAR_15->dev, "magn_3d Found %d usage attributes\n",
   VAR_22);
 FUNC_0(&VAR_15->dev, "magn_3d X: %x:%x Y: %x:%x Z: %x:%x\n",
   VAR_20->magn[0].index,
   VAR_20->magn[0].report_id,
   VAR_20->magn[1].index, VAR_20->magn[1].report_id,
   VAR_20->magn[2].index, VAR_20->magn[2].report_id);


 VAR_23 = FUNC_2(&VAR_15->dev, VAR_22,
    sizeof(struct iio_chan_spec),
    VAR_4);
 if (!VAR_23) {
  FUNC_1(&VAR_15->dev,
   "failed to allocate space for iio channels\n");
  return -VAR_3;
 }

 VAR_20->iio_vals = FUNC_2(&VAR_15->dev, VAR_22,
    sizeof(u32),
    VAR_4);
 if (!VAR_20->iio_vals) {
  FUNC_1(&VAR_15->dev,
   "failed to allocate space for iio values array\n");
  return -VAR_3;
 }

 for (VAR_21 = 0, *VAR_18 = 0;
 VAR_21 < VAR_12 && *VAR_18 < VAR_22;
 VAR_21++){
  if (VAR_20->magn[VAR_21].index >= 0) {

   (VAR_23[*VAR_18]) = VAR_14[VAR_21];
   (VAR_23[*VAR_18]).scan_index = *VAR_18;
   (VAR_23[*VAR_18]).address = VAR_21;


   VAR_20->magn_val_addr[VAR_21] = &(VAR_20->iio_vals[*VAR_18]);
   FUNC_4(VAR_23,
       *VAR_18,
       VAR_20->magn[VAR_21].size);
   (*VAR_18)++;
  }
 }

 if (*VAR_18 <= 0) {
  FUNC_1(&VAR_15->dev,
   "failed to find any magnetic channels setup\n");
  return -VAR_2;
 }

 *VAR_17 = VAR_23;

 FUNC_0(&VAR_15->dev, "magn_3d Setup %d IIO channels\n",
   *VAR_18);

 VAR_20->magn_flux_attr.scale_precision = FUNC_3(
    VAR_7,
    &VAR_20->magn[VAR_1],
    &VAR_20->magn_flux_attr.scale_pre_decml,
    &VAR_20->magn_flux_attr.scale_post_decml);
 VAR_20->rot_attr.scale_precision
  = FUNC_3(
   VAR_10,
   &VAR_20->magn[VAR_0],
   &VAR_20->rot_attr.scale_pre_decml,
   &VAR_20->rot_attr.scale_post_decml);


 if (VAR_20->magn_flux_attributes.sensitivity.index < 0) {
  FUNC_5(VAR_16,
   VAR_5, VAR_19,
   VAR_8 |
   VAR_9,
   &VAR_20->magn_flux_attributes.sensitivity);
  FUNC_0(&VAR_15->dev, "Sensitivity index:report %d:%d\n",
   VAR_20->magn_flux_attributes.sensitivity.index,
   VAR_20->magn_flux_attributes.sensitivity.report_id);
 }
 if (VAR_20->magn_flux_attributes.sensitivity.index < 0) {
  FUNC_5(VAR_16,
   VAR_5, VAR_19,
   VAR_8 |
   VAR_11,
   &VAR_20->magn_flux_attributes.sensitivity);
  FUNC_0(&VAR_15->dev, "Sensitivity index:report %d:%d\n",
   VAR_20->magn_flux_attributes.sensitivity.index,
   VAR_20->magn_flux_attributes.sensitivity.report_id);
 }
 if (VAR_20->rot_attributes.sensitivity.index < 0) {
  FUNC_5(VAR_16,
   VAR_5, VAR_19,
   VAR_8 |
   VAR_10,
   &VAR_20->rot_attributes.sensitivity);
  FUNC_0(&VAR_15->dev, "Sensitivity index:report %d:%d\n",
   VAR_20->rot_attributes.sensitivity.index,
   VAR_20->rot_attributes.sensitivity.report_id);
 }

 return 0;
}
