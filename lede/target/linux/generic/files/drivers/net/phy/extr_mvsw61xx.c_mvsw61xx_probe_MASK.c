
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_10__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_8__ {char* name; int alias; int * ops; int ports; void* cpu_port; int vlans; } ;
struct mvsw61xx_state {int model; int cpu_port1; int registered; TYPE_1__ dev; void* cpu_port0; scalar_t__ is_indirect; void* base_addr; TYPE_2__* bus; } ;
struct device_node {int dummy; } ;
struct TYPE_9__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;




 int FUNC_0 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_4__*,char*,...) ;
 int FUNC_3 (TYPE_4__*,char*,char*,...) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (struct mvsw61xx_state*) ;
 struct mvsw61xx_state* FUNC_6 (int,int ) ;
 int VAR_12 ;
 TYPE_2__* FUNC_7 (struct device_node*) ;
 struct device_node* FUNC_8 (struct device_node*,char*,int ) ;
 scalar_t__ FUNC_9 (struct device_node*,char*) ;
 scalar_t__ FUNC_10 (struct device_node*,char*,void**) ;
 int FUNC_11 (struct platform_device*,struct mvsw61xx_state*) ;
 int FUNC_12 (TYPE_2__*,scalar_t__,void*,int ) ;
 int FUNC_13 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_13)
{
 struct mvsw61xx_state *VAR_14;
 struct device_node *VAR_15 = VAR_13->dev.of_node;
 struct device_node *VAR_16;
 char *VAR_17;
 u32 VAR_18;
 int VAR_19;

 VAR_14 = FUNC_6(sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_16 = FUNC_8(VAR_15, "mii-bus", 0);
 if (!VAR_16) {
  FUNC_2(&VAR_13->dev, "Couldn't get MII bus handle\n");
  VAR_19 = -VAR_0;
  goto out_err;
 }

 VAR_14->bus = FUNC_7(VAR_16);
 if (!VAR_14->bus) {
  FUNC_2(&VAR_13->dev, "Couldn't find MII bus from handle\n");
  VAR_19 = -VAR_0;
  goto out_err;
 }

 VAR_14->is_indirect = FUNC_9(VAR_15, "is-indirect");

 if (VAR_14->is_indirect) {
  if (FUNC_10(VAR_15, "reg", &VAR_18)) {
   FUNC_2(&VAR_13->dev, "Switch address not specified\n");
   VAR_19 = -VAR_0;
   goto out_err;
  }

  VAR_14->base_addr = VAR_18;
 } else {
  VAR_14->base_addr = VAR_4;
 }

 VAR_14->model = FUNC_12(VAR_14->bus, VAR_14->is_indirect, VAR_14->base_addr,
    FUNC_0(VAR_3, 0)) & VAR_5;

 switch(VAR_14->model) {
 case 131:
  VAR_17 = VAR_6;
  break;
 case 130:
  VAR_17 = VAR_7;
  break;
 case 129:
  VAR_17 = VAR_8;
  break;
 case 128:
  VAR_17 = VAR_9;
  break;
 default:
  FUNC_2(&VAR_13->dev, "No compatible switch found at 0x%02x\n",
    VAR_14->base_addr);
  VAR_19 = -VAR_0;
  goto out_err;
 }

 FUNC_11(VAR_13, VAR_14);
 FUNC_3(&VAR_13->dev, "Found %s at %s:%02x\n", VAR_17,
   VAR_14->bus->id, VAR_14->base_addr);

 FUNC_3(&VAR_13->dev, "Using %sdirect addressing\n",
   (VAR_14->is_indirect ? "in" : ""));

 if (FUNC_10(VAR_15, "cpu-port-0", &VAR_18)) {
  FUNC_2(&VAR_13->dev, "CPU port not set\n");
  VAR_19 = -VAR_0;
  goto out_err;
 }

 VAR_14->cpu_port0 = VAR_18;

 if (!FUNC_10(VAR_15, "cpu-port-1", &VAR_18))
  VAR_14->cpu_port1 = VAR_18;
 else
  VAR_14->cpu_port1 = -1;

 VAR_14->dev.vlans = VAR_11;
 VAR_14->dev.cpu_port = VAR_14->cpu_port0;
 VAR_14->dev.ports = VAR_10;
 VAR_14->dev.name = VAR_17;
 VAR_14->dev.ops = &VAR_12;
 VAR_14->dev.alias = FUNC_4(&VAR_13->dev);

 FUNC_1(&VAR_14->dev, 1);

 VAR_19 = FUNC_13(&VAR_14->dev, ((void*)0));
 if (VAR_19 < 0)
  goto out_err;

 VAR_14->registered = 1;

 return 0;
out_err:
 FUNC_5(VAR_14);
 return VAR_19;
}
