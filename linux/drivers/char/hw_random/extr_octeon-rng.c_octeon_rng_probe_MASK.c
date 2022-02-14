
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct resource {int start; } ;
struct platform_device {int dev; } ;
struct hwrng {char* name; int data_read; int cleanup; int init; } ;
struct octeon_rng {struct hwrng ops; void* result; void* control_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,struct hwrng*) ;
 void* FUNC_2 (int *,int ,int) ;
 struct octeon_rng* FUNC_3 (int *,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct resource* FUNC_4 (struct platform_device*,int ,int) ;
 int FUNC_5 (struct platform_device*,struct hwrng*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_7)
{
 struct resource *VAR_8;
 struct resource *VAR_9;
 struct octeon_rng *VAR_10;
 int VAR_11;
 struct hwrng VAR_12 = {
  .name = "octeon",
  .init = VAR_6,
  .cleanup = VAR_4,
  .data_read = VAR_5
 };

 VAR_10 = FUNC_3(&VAR_7->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_8 = FUNC_4(VAR_7, VAR_3, 0);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_7, VAR_3, 1);
 if (!VAR_9)
  return -VAR_0;


 VAR_10->control_status = FUNC_2(&VAR_7->dev,
         VAR_8->start,
         sizeof(u64));
 if (!VAR_10->control_status)
  return -VAR_0;

 VAR_10->result = FUNC_2(&VAR_7->dev,
        VAR_9->start,
        sizeof(u64));
 if (!VAR_10->result)
  return -VAR_0;

 VAR_10->ops = VAR_12;

 FUNC_5(VAR_7, &VAR_10->ops);
 VAR_11 = FUNC_1(&VAR_7->dev, &VAR_10->ops);
 if (VAR_11)
  return -VAR_0;

 FUNC_0(&VAR_7->dev, "Octeon Random Number Generator\n");

 return 0;
}
