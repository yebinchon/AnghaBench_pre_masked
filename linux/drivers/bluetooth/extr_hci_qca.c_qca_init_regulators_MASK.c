
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_bulk_data {int dummy; } ;
struct qca_vreg {int name; } ;
struct qca_power {TYPE_1__* vreg_bulk; int dev; } ;
struct TYPE_3__ {int supply; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,size_t,int,int ) ;
 int FUNC_1 (int ,size_t,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct qca_power *VAR_2,
    const struct qca_vreg *VAR_3, size_t VAR_4)
{
 int VAR_5;

 VAR_2->vreg_bulk = FUNC_0(VAR_2->dev, VAR_4,
          sizeof(struct regulator_bulk_data),
          VAR_1);
 if (!VAR_2->vreg_bulk)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  VAR_2->vreg_bulk[VAR_5].supply = VAR_3[VAR_5].name;

 return FUNC_1(VAR_2->dev, VAR_4, VAR_2->vreg_bulk);
}
