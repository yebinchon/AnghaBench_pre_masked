
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_field {int id_offset; int id_size; int mask; int shift; int reg; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct reg_field {int id_offset; int id_size; int lsb; int msb; int reg; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct regmap_field *VAR_0,
 struct regmap *VAR_1, struct reg_field VAR_2)
{
 VAR_0->regmap = VAR_1;
 VAR_0->reg = VAR_2.reg;
 VAR_0->shift = VAR_2.lsb;
 VAR_0->mask = FUNC_0(VAR_2.msb, VAR_2.lsb);
 VAR_0->id_size = VAR_2.id_size;
 VAR_0->id_offset = VAR_2.id_offset;
}
