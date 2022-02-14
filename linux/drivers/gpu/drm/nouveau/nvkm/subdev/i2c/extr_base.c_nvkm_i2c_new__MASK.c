
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nvkm_i2c_pad {TYPE_1__* func; } ;
struct nvkm_i2c_func {int (* pad_s_new ) (struct nvkm_i2c*,int const,struct nvkm_i2c_pad**) ;int (* pad_x_new ) (struct nvkm_i2c*,int ,struct nvkm_i2c_pad**) ;} ;
struct nvkm_i2c_drv {int (* pad_new ) (struct nvkm_i2c_bus*,int const,int ,struct nvkm_i2c_pad**) ;scalar_t__ bios; int addr; } ;
struct nvkm_i2c_bus {int dummy; } ;
struct nvkm_i2c_aux {int dummy; } ;
struct nvkm_i2c {int event; int subdev; int aux; int bus; int pad; struct nvkm_i2c_func const* func; } ;
struct nvkm_device {struct nvkm_bios* bios; } ;
struct nvkm_bios {int dummy; } ;
struct dcb_output {scalar_t__ extdev; scalar_t__ type; int i2c_index; int location; } ;
struct dcb_i2c_entry {scalar_t__ type; scalar_t__ drive; scalar_t__ share; scalar_t__ auxch; int sense; } ;
struct TYPE_2__ {int (* bus_new_0 ) (struct nvkm_i2c_pad*,int const,scalar_t__,int ,struct nvkm_i2c_bus**) ;int (* bus_new_4 ) (struct nvkm_i2c_pad*,int const,scalar_t__,struct nvkm_i2c_bus**) ;int (* aux_new_6 ) (struct nvkm_i2c_pad*,int const,scalar_t__,struct nvkm_i2c_aux**) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int const FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int const FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct nvkm_bios*,int,struct dcb_i2c_entry*) ;
 scalar_t__ FUNC_8 (struct nvkm_bios*,int,int *,int *,struct dcb_output*) ;
 struct nvkm_i2c* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,char*,int,...) ;
 int FUNC_11 (int *,char*,int,int) ;
 int FUNC_12 (int *,int,int,int *) ;
 int VAR_9 ;
 int FUNC_13 (struct nvkm_i2c_aux**) ;
 int FUNC_14 (struct nvkm_i2c_bus**) ;
 struct nvkm_i2c_bus* FUNC_15 (struct nvkm_i2c*,int ) ;
 struct nvkm_i2c_drv* VAR_10 ;
 int VAR_11 ;
 int FUNC_16 (struct nvkm_i2c_pad**) ;
 struct nvkm_i2c_pad* FUNC_17 (struct nvkm_i2c*,int const) ;
 int FUNC_18 (int *,struct nvkm_device*,int,int *) ;
 int FUNC_19 (int *,char*,int) ;
 int FUNC_20 (struct nvkm_i2c*,int const,struct nvkm_i2c_pad**) ;
 int FUNC_21 (struct nvkm_i2c*,int ,struct nvkm_i2c_pad**) ;
 int FUNC_22 (struct nvkm_i2c_pad*,int const,scalar_t__,int ,struct nvkm_i2c_bus**) ;
 int FUNC_23 (struct nvkm_i2c_pad*,int const,scalar_t__,struct nvkm_i2c_bus**) ;
 int FUNC_24 (struct nvkm_i2c_pad*,int const,scalar_t__,struct nvkm_i2c_aux**) ;
 int FUNC_25 (struct nvkm_i2c_bus*,int const,int ,struct nvkm_i2c_pad**) ;
 int FUNC_26 (struct nvkm_i2c_pad*,int const,scalar_t__,struct nvkm_i2c_aux**) ;
 int FUNC_27 (struct nvkm_i2c_pad*,int const,scalar_t__,struct nvkm_i2c_bus**) ;

int
FUNC_28(const struct nvkm_i2c_func *VAR_12, struct nvkm_device *VAR_13,
       int VAR_14, struct nvkm_i2c **VAR_15)
{
 struct nvkm_bios *VAR_16 = VAR_13->bios;
 struct nvkm_i2c *VAR_17;
 struct dcb_i2c_entry VAR_18;
 struct dcb_output VAR_19;
 u8 VAR_20, VAR_21;
 int VAR_22, VAR_23;

 if (!(VAR_17 = *VAR_15 = FUNC_9(sizeof(*VAR_17), VAR_8)))
  return -VAR_7;

 FUNC_18(&VAR_9, VAR_13, VAR_14, &VAR_17->subdev);
 VAR_17->func = VAR_12;
 FUNC_0(&VAR_17->pad);
 FUNC_0(&VAR_17->bus);
 FUNC_0(&VAR_17->aux);

 VAR_23 = -1;
 while (!FUNC_7(VAR_16, ++VAR_23, &VAR_18)) {
  struct nvkm_i2c_pad *VAR_24 = ((void*)0);
  struct nvkm_i2c_bus *VAR_25 = ((void*)0);
  struct nvkm_i2c_aux *VAR_26 = ((void*)0);

  FUNC_10(&VAR_17->subdev, "ccb %02x: type %02x drive %02x "
      "sense %02x share %02x auxch %02x\n", VAR_23, VAR_18.type,
      VAR_18.drive, VAR_18.sense, VAR_18.share, VAR_18.auxch);

  if (VAR_18.share != VAR_5) {
   const int VAR_27 = FUNC_6(VAR_18.share);
   if (!(VAR_24 = FUNC_17(VAR_17, VAR_27)))
    VAR_22 = VAR_12->pad_s_new(VAR_17, VAR_27, &VAR_24);
   else
    VAR_22 = 0;
  } else {
   VAR_22 = VAR_12->pad_x_new(VAR_17, FUNC_4(VAR_23), &VAR_24);
  }

  if (VAR_22) {
   FUNC_11(&VAR_17->subdev, "ccb %02x pad, %d\n", VAR_23, VAR_22);
   FUNC_16(&VAR_24);
   continue;
  }

  if (VAR_24->func->bus_new_0 && VAR_18.type == VAR_0) {
   VAR_22 = VAR_24->func->bus_new_0(VAR_24, FUNC_2(VAR_23),
         VAR_18.drive,
         VAR_18.sense, &VAR_25);
  } else
  if (VAR_24->func->bus_new_4 &&
      ( VAR_18.type == VAR_1 ||
        VAR_18.type == VAR_3 ||
       (VAR_18.type == VAR_4 &&
        VAR_18.drive != VAR_5))) {
   VAR_22 = VAR_24->func->bus_new_4(VAR_24, FUNC_2(VAR_23),
         VAR_18.drive, &VAR_25);
  }

  if (VAR_22) {
   FUNC_11(&VAR_17->subdev, "ccb %02x bus, %d\n", VAR_23, VAR_22);
   FUNC_14(&VAR_25);
  }

  if (VAR_24->func->aux_new_6 &&
      ( VAR_18.type == VAR_2 ||
       (VAR_18.type == VAR_4 &&
        VAR_18.auxch != VAR_5))) {
   VAR_22 = VAR_24->func->aux_new_6(VAR_24, FUNC_2(VAR_23),
         VAR_18.auxch, &VAR_26);
  } else {
   VAR_22 = 0;
  }

  if (VAR_22) {
   FUNC_11(&VAR_17->subdev, "ccb %02x aux, %d\n", VAR_23, VAR_22);
   FUNC_13(&VAR_26);
  }

  if (VAR_18.type != VAR_5 && !VAR_25 && !VAR_26) {
   FUNC_19(&VAR_17->subdev, "ccb %02x was ignored\n", VAR_23);
   continue;
  }
 }

 VAR_23 = -1;
 while (FUNC_8(VAR_16, ++VAR_23, &VAR_20, &VAR_21, &VAR_19)) {
  const struct nvkm_i2c_drv *VAR_28 = VAR_10;
  struct nvkm_i2c_bus *VAR_29;
  struct nvkm_i2c_pad *VAR_30;


  if (!VAR_19.location)
   continue;


  VAR_29 = FUNC_15(VAR_17, VAR_19.i2c_index);
  if (!VAR_29) {
   FUNC_10(&VAR_17->subdev, "dcb %02x no bus\n", VAR_23);
   continue;
  }


  while (VAR_28->pad_new) {
   if (VAR_28->bios == VAR_19.extdev)
    break;
   VAR_28++;
  }

  if (!VAR_28->pad_new) {
   FUNC_10(&VAR_17->subdev, "dcb %02x drv %02x unknown\n",
       VAR_23, VAR_19.extdev);
   continue;
  }


  VAR_30 = FUNC_17(VAR_17, FUNC_5(VAR_19.extdev));
  if (!VAR_30) {
   const int VAR_31 = FUNC_5(VAR_19.extdev);
   VAR_22 = VAR_28->pad_new(VAR_29, VAR_31, VAR_28->addr, &VAR_30);
   if (VAR_22) {
    FUNC_11(&VAR_17->subdev, "dcb %02x pad, %d\n",
        VAR_23, VAR_22);
    FUNC_16(&VAR_30);
    continue;
   }
  }


  if (VAR_30->func->aux_new_6 && VAR_19.type == VAR_6) {
   const int VAR_32 = FUNC_1(VAR_19.extdev);
   struct nvkm_i2c_aux *VAR_33 = ((void*)0);
   VAR_22 = VAR_30->func->aux_new_6(VAR_30, VAR_32, 0, &VAR_33);
   if (VAR_22) {
    FUNC_11(&VAR_17->subdev, "dcb %02x aux, %d\n",
        VAR_23, VAR_22);
    FUNC_13(&VAR_33);
   }
  } else
  if (VAR_30->func->bus_new_4) {
   const int VAR_34 = FUNC_3(VAR_19.extdev);
   struct nvkm_i2c_bus *VAR_35 = ((void*)0);
   VAR_22 = VAR_30->func->bus_new_4(VAR_30, VAR_34, 0, &VAR_35);
   if (VAR_22) {
    FUNC_11(&VAR_17->subdev, "dcb %02x bus, %d\n",
        VAR_23, VAR_22);
    FUNC_14(&VAR_35);
   }
  }
 }

 return FUNC_12(&VAR_11, 4, VAR_23, &VAR_17->event);
}
