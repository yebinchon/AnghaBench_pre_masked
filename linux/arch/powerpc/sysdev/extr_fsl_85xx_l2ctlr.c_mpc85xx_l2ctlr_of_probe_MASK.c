
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sram_parameters {unsigned int sram_size; int sram_offset; } ;
struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_5__ {int ctl; int srbarea0; int srbar0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (TYPE_4__*,char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct sram_parameters*) ;
 long FUNC_4 (struct platform_device*,struct sram_parameters) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* VAR_9 ;
 int FUNC_6 (int ) ;
 unsigned int* FUNC_7 (int ,char*,int *) ;
 TYPE_1__* FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_10)
{
 long VAR_11;
 unsigned int VAR_12;
 unsigned char VAR_13;
 const unsigned int *VAR_14;
 unsigned int VAR_15;
 struct sram_parameters VAR_16;

 if (!VAR_10->dev.of_node) {
  FUNC_1(&VAR_10->dev, "Device's OF-node is NULL\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_7(VAR_10->dev.of_node, "cache-size", ((void*)0));
 if (!VAR_14) {
  FUNC_1(&VAR_10->dev, "Missing L2 cache-size\n");
  return -VAR_0;
 }
 VAR_15 = *VAR_14;

 if (FUNC_3(&VAR_16))
  return 0;

 VAR_12 = VAR_15 % VAR_16.sram_size;
 VAR_13 = 130 * VAR_16.sram_size / VAR_15;
 if (VAR_12 || (VAR_13 & (VAR_13 - 1))) {
  FUNC_1(&VAR_10->dev, "Illegal cache-sram-size in command line\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_8(VAR_10->dev.of_node, 0);
 if (!VAR_9) {
  FUNC_1(&VAR_10->dev, "Can't map L2 controller\n");
  return -VAR_0;
 }




 FUNC_9(&VAR_9->srbar0,
  FUNC_6(VAR_16.sram_offset) & VAR_8);
 FUNC_0(&VAR_9->ctl, VAR_1, VAR_2);

 switch (VAR_13) {
 case 131:
  FUNC_10(&VAR_9->ctl,
   VAR_1 | VAR_2 | VAR_3);
  break;

 case 128:
  FUNC_10(&VAR_9->ctl,
   VAR_1 | VAR_2 | VAR_6);
  break;

 case 129:
  FUNC_10(&VAR_9->ctl,
   VAR_1 | VAR_2 | VAR_5);
  break;

 case 130:
 default:
  FUNC_10(&VAR_9->ctl,
   VAR_1 | VAR_2 | VAR_4);
  break;
 }
 FUNC_2();

 VAR_11 = FUNC_4(VAR_10, VAR_16);
 if (VAR_11 < 0) {
  FUNC_1(&VAR_10->dev, "Can't instantiate Cache-SRAM\n");
  FUNC_5(VAR_9);
  return -VAR_0;
 }

 return 0;
}
