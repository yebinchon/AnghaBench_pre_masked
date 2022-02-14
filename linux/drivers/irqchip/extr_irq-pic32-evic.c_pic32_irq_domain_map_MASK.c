
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_domain {struct evic_chip_data* host_data; } ;
struct irq_data {int dummy; } ;
struct evic_chip_data {int* irq_types; } ;
typedef size_t irq_hw_number_t ;


 int FUNC_0 (size_t,int,int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct irq_data* FUNC_3 (struct irq_domain*,unsigned int) ;
 int FUNC_4 (struct irq_domain*,unsigned int,size_t) ;
 int FUNC_5 (struct irq_data*,int) ;
 int FUNC_6 (struct irq_data*,int) ;
 int FUNC_7 (size_t,int ) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct irq_domain *VAR_4, unsigned int VAR_5,
    irq_hw_number_t VAR_6)
{
 struct evic_chip_data *VAR_7 = VAR_4->host_data;
 struct irq_data *VAR_8;
 int VAR_9;
 u32 VAR_10, VAR_11;
 u32 VAR_12, VAR_13;

 VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_6);
 if (VAR_9)
  return VAR_9;







 if (VAR_7->irq_types[VAR_6] & VAR_0) {
  VAR_8 = FUNC_3(VAR_4, VAR_5);
  FUNC_6(VAR_8, VAR_7->irq_types[VAR_6]);
  FUNC_5(VAR_8, VAR_7->irq_types[VAR_6]);
 }

 FUNC_0(VAR_6, VAR_12, VAR_13);

 VAR_10 = FUNC_1(VAR_1 + VAR_12 * 0x10);
 VAR_11 = FUNC_1(VAR_2 + VAR_12 * 0x10);


 FUNC_8(VAR_13, VAR_3 + VAR_10);
 FUNC_8(VAR_13, VAR_3 + VAR_11);


 FUNC_7(VAR_6, FUNC_2(2, 0));

 return VAR_9;
}
