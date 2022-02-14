
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct irte {int dummy; } ;
struct intel_iommu {TYPE_1__* ir_table; scalar_t__ reg; } ;
typedef int phys_addr_t ;
struct TYPE_5__ {scalar_t__ present; } ;
struct TYPE_4__ {int bitmap; TYPE_2__* base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct intel_iommu*,TYPE_2__*,size_t) ;
 int FUNC_1 (int ,unsigned int,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*,struct irte*,size_t) ;
 struct irte* FUNC_4 (int,size_t,int ) ;
 int FUNC_5 (struct irte*) ;

__attribute__((used)) static int FUNC_6(struct intel_iommu *VAR_8)
{
 struct irte *VAR_9;
 phys_addr_t VAR_10;
 unsigned int VAR_11;
 size_t VAR_12;
 u64 VAR_13;


 VAR_13 = FUNC_2(VAR_8->reg + VAR_0);
 if ((VAR_13 & VAR_5)
      != VAR_4)
  return -VAR_1;

 VAR_10 = VAR_13 & VAR_7;
 VAR_12 = VAR_3*sizeof(struct irte);


 VAR_9 = FUNC_4(VAR_10, VAR_12, VAR_6);
 if (!VAR_9)
  return -VAR_2;


 FUNC_3(VAR_8->ir_table->base, VAR_9, VAR_12);

 FUNC_0(VAR_8, VAR_8->ir_table->base, VAR_12);





 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  if (VAR_8->ir_table->base[VAR_11].present)
   FUNC_1(VAR_8->ir_table->bitmap, VAR_11, 1);
 }

 FUNC_5(VAR_9);

 return 0;
}
