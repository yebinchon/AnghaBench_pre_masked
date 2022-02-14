
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct si_sm_io {int slave_addr; scalar_t__ irq; scalar_t__ addr_space; int regspacing; scalar_t__ regsize; int addr_data; int * dev; int irq_setup; scalar_t__ regshift; scalar_t__ si_type; scalar_t__ addr_source; } ;
struct platform_device {int dev; } ;
typedef int io ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

 scalar_t__ VAR_4 ;

 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,scalar_t__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct platform_device*,struct si_sm_io*) ;
 int FUNC_5 (struct si_sm_io*) ;
 int VAR_8 ;
 int FUNC_6 (struct si_sm_io*,int ,int) ;
 scalar_t__ FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (char*,int ,char*,int ,scalar_t__,int ,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_11)
{
 struct si_sm_io VAR_12;
 u8 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18;

 VAR_18 = FUNC_2(&VAR_11->dev, "addr-source", &VAR_15);
 if (VAR_18)
  VAR_15 = VAR_6;
 if (VAR_15 >= VAR_5)
  return -VAR_1;

 if (VAR_15 == VAR_7) {
  if (!VAR_9)
   return -VAR_2;
 } else if (VAR_15 != VAR_4) {
  if (!VAR_10)
   return -VAR_2;
 }

 VAR_18 = FUNC_2(&VAR_11->dev, "ipmi-type", &VAR_13);
 if (VAR_18)
  return -VAR_2;

 FUNC_6(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.addr_source = VAR_15;
 FUNC_1(&VAR_11->dev, "probing via %s\n",
   FUNC_3(VAR_15));

 switch (VAR_13) {
 case 130:
 case 129:
 case 131:
  VAR_12.si_type = VAR_13;
  break;
 case 128:
  return -VAR_2;
 default:
  FUNC_0(&VAR_11->dev, "ipmi-type property is invalid\n");
  return -VAR_1;
 }

 VAR_12.regsize = VAR_0;
 VAR_18 = FUNC_2(&VAR_11->dev, "reg-size", &VAR_16);
 if (!VAR_18)
  VAR_12.regsize = VAR_16;

 VAR_12.regshift = 0;
 VAR_18 = FUNC_2(&VAR_11->dev, "reg-shift", &VAR_17);
 if (!VAR_18)
  VAR_12.regshift = VAR_17;

 if (!FUNC_4(VAR_11, &VAR_12))
  return -VAR_1;

 VAR_18 = FUNC_2(&VAR_11->dev, "slave-addr", &VAR_14);
 if (VAR_18)
  VAR_12.slave_addr = 0x20;
 else
  VAR_12.slave_addr = VAR_14;

 VAR_12.irq = FUNC_7(VAR_11, 0);
 if (VAR_12.irq > 0)
  VAR_12.irq_setup = VAR_8;
 else
  VAR_12.irq = 0;

 VAR_12.dev = &VAR_11->dev;

 FUNC_8("ipmi_si: %s: %s %#lx regsize %d spacing %d irq %d\n",
  FUNC_3(VAR_15),
  (VAR_12.addr_space == VAR_3) ? "io" : "mem",
  VAR_12.addr_data, VAR_12.regsize, VAR_12.regspacing, VAR_12.irq);

 FUNC_5(&VAR_12);

 return 0;
}
