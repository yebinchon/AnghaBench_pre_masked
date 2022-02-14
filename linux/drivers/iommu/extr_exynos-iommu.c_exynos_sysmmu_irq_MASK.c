
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sysmmu_iova_t ;
struct sysmmu_fault_info {unsigned int bit; int type; scalar_t__ addr_reg; } ;
struct sysmmu_drvdata {int lock; int clk_master; scalar_t__ sfrbase; int master; TYPE_1__* domain; int version; int active; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int domain; } ;


 unsigned int FUNC_0 (struct sysmmu_fault_info*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 int FUNC_3 (int) ;
 unsigned int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,int ,int,int ) ;
 int FUNC_9 (struct sysmmu_drvdata*,struct sysmmu_fault_info const*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct sysmmu_fault_info* VAR_6 ;
 int FUNC_12 (struct sysmmu_drvdata*) ;
 struct sysmmu_fault_info* VAR_7 ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_8, void *VAR_9)
{

 struct sysmmu_drvdata *VAR_10 = VAR_9;
 const struct sysmmu_fault_info *VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14;
 sysmmu_iova_t VAR_15 = -1;
 unsigned short VAR_16, VAR_17;
 int VAR_18 = -VAR_0;

 FUNC_3(!VAR_10->active);

 if (FUNC_2(VAR_10->version) < 5) {
  VAR_16 = VAR_3;
  VAR_17 = VAR_2;
  VAR_11 = VAR_6;
  VAR_13 = FUNC_0(VAR_6);
 } else {
  VAR_16 = VAR_5;
  VAR_17 = VAR_4;
  VAR_11 = VAR_7;
  VAR_13 = FUNC_0(VAR_7);
 }

 FUNC_10(&VAR_10->lock);

 FUNC_6(VAR_10->clk_master);

 VAR_14 = FUNC_4(FUNC_7(VAR_10->sfrbase + VAR_16));
 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++, VAR_11++)
  if (VAR_11->bit == VAR_14)
   break;

 FUNC_1(VAR_12 == VAR_13);


 VAR_15 = FUNC_7(VAR_10->sfrbase + VAR_11->addr_reg);
 FUNC_9(VAR_10, VAR_11, VAR_15);

 if (VAR_10->domain)
  VAR_18 = FUNC_8(&VAR_10->domain->domain,
     VAR_10->master, VAR_15, VAR_11->type);

 FUNC_1(VAR_18 != 0);

 FUNC_13(1 << VAR_14, VAR_10->sfrbase + VAR_17);

 FUNC_12(VAR_10);

 FUNC_5(VAR_10->clk_master);

 FUNC_11(&VAR_10->lock);

 return VAR_1;
}
