
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sram_platdata {int granularity; int pool_name; } ;
struct sram_bank_info {struct sram_bank_info* pool_name; scalar_t__ sram_virt; int gpool; int node; scalar_t__ sram_size; scalar_t__ sram_phys; int granularity; } ;
struct resource {scalar_t__ start; } ;
struct TYPE_3__ {struct sram_platdata* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
typedef scalar_t__ phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int ,unsigned long,scalar_t__,scalar_t__,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct sram_bank_info*) ;
 struct sram_bank_info* FUNC_9 (int ,int ) ;
 struct sram_bank_info* FUNC_10 (int,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct sram_bank_info*) ;
 scalar_t__ FUNC_16 (struct resource*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_6)
{
 struct sram_platdata *VAR_7 = VAR_6->dev.platform_data;
 struct sram_bank_info *VAR_8;
 struct resource *VAR_9;
 int VAR_10 = 0;

 if (!VAR_7 || !VAR_7->pool_name)
  return -VAR_0;

 VAR_8 = FUNC_10(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_14(VAR_6, VAR_3, 0);
 if (VAR_9 == ((void*)0)) {
  FUNC_0(&VAR_6->dev, "no memory resource defined\n");
  VAR_10 = -VAR_0;
  goto out;
 }

 if (!FUNC_16(VAR_9))
  return 0;

 VAR_8->sram_phys = (phys_addr_t)VAR_9->start;
 VAR_8->sram_size = FUNC_16(VAR_9);
 VAR_8->sram_virt = FUNC_6(VAR_8->sram_phys, VAR_8->sram_size);
 VAR_8->pool_name = FUNC_9(VAR_7->pool_name, VAR_2);
 VAR_8->granularity = VAR_7->granularity;

 VAR_8->gpool = FUNC_3(FUNC_5(VAR_8->granularity), -1);
 if (!VAR_8->gpool) {
  FUNC_0(&VAR_6->dev, "create pool failed\n");
  VAR_10 = -VAR_1;
  goto create_pool_err;
 }

 VAR_10 = FUNC_2(VAR_8->gpool, (unsigned long)VAR_8->sram_virt,
    VAR_8->sram_phys, VAR_8->sram_size, -1);
 if (VAR_10 < 0) {
  FUNC_0(&VAR_6->dev, "add new chunk failed\n");
  VAR_10 = -VAR_1;
  goto add_chunk_err;
 }

 FUNC_12(&VAR_5);
 FUNC_11(&VAR_8->node, &VAR_4);
 FUNC_13(&VAR_5);

 FUNC_15(VAR_6, VAR_8);

 FUNC_1(&VAR_6->dev, "initialized\n");
 return 0;

add_chunk_err:
 FUNC_4(VAR_8->gpool);
create_pool_err:
 FUNC_7(VAR_8->sram_virt);
 FUNC_8(VAR_8->pool_name);
out:
 FUNC_8(VAR_8);
 return VAR_10;
}
