
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_cdmm_work_dev {void (* fn ) (struct mips_cdmm_device*) ;struct mips_cdmm_device* dev; } ;



__attribute__((used)) static long FUNC_0(void *VAR_0)
{
 struct mips_cdmm_work_dev *VAR_1 = VAR_0;
 void (*VAR_2)(struct mips_cdmm_device *) = VAR_1->fn;

 VAR_2(VAR_1->dev);
 return 0;
}
