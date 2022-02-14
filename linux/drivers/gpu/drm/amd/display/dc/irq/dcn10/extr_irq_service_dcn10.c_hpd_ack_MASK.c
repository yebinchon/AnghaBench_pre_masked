
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct irq_source_info {scalar_t__ enable_reg; scalar_t__ status_reg; } ;
struct irq_service {int ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct irq_service*,struct irq_source_info const*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (scalar_t__,int,int ,int ) ;

__attribute__((used)) static bool FUNC_5(
 struct irq_service *VAR_4,
 const struct irq_source_info *VAR_5)
{
 uint32_t VAR_6 = VAR_5->status_reg;
 uint32_t VAR_7 = FUNC_1(VAR_4->ctx, VAR_6);
 uint32_t VAR_8 =
  FUNC_3(
   VAR_7,
   VAR_3,
   VAR_1);

 FUNC_0(VAR_4, VAR_5);

 VAR_7 = FUNC_1(VAR_4->ctx, VAR_5->enable_reg);

 FUNC_4(
  VAR_7,
  VAR_8 ? 0 : 1,
  VAR_2,
  VAR_0);

 FUNC_2(VAR_4->ctx, VAR_5->enable_reg, VAR_7);

 return 1;
}
