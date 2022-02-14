
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct tps68470_pmic_table {int dummy; } ;
struct tps68470_pmic_opregion {struct regmap* regmap; int lock; } ;
typedef struct regmap regmap ;
typedef int acpi_status ;
typedef int acpi_physical_address ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct tps68470_pmic_table const*,unsigned int,int*,int*) ;

__attribute__((used)) static acpi_status FUNC_3(u32 VAR_5,
       acpi_physical_address VAR_6,
       u32 VAR_7, u64 *VAR_8,
       void *VAR_9,
       int (*VAR_10)(struct regmap *,
           int, int, u64 *),
       int (*VAR_11)(struct regmap *,
       int, int, u64),
       const struct tps68470_pmic_table *VAR_12,
       unsigned int VAR_13)
{
 struct tps68470_pmic_opregion *VAR_14 = VAR_9;
 struct regmap *VAR_15 = VAR_14->regmap;
 int VAR_16, VAR_17, VAR_18;

 if (VAR_7 != 32)
  return VAR_2;

 VAR_17 = FUNC_2(VAR_6, VAR_12, VAR_13, &VAR_16, &VAR_18);
 if (VAR_17 < 0)
  return VAR_2;

 if (VAR_5 == VAR_1 && *VAR_8 > VAR_18)
  return VAR_2;

 FUNC_0(&VAR_14->lock);

 VAR_17 = (VAR_5 == VAR_0) ?
  VAR_10(VAR_15, VAR_16, VAR_18, VAR_8) :
  VAR_11(VAR_15, VAR_16, VAR_18, *VAR_8);

 FUNC_1(&VAR_14->lock);

 return VAR_17 ? VAR_3 : VAR_4;
}
