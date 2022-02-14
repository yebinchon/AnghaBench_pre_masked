
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bt_bmc {int queue; scalar_t__ offset; int map; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__,int*) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct bt_bmc *VAR_7 = VAR_6;
 u32 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_7->map, VAR_7->offset + VAR_0, &VAR_8);
 if (VAR_9)
  return VAR_4;

 VAR_8 &= VAR_1 | VAR_2;
 if (!VAR_8)
  return VAR_4;


 FUNC_1(VAR_7->map, VAR_7->offset + VAR_0, VAR_8);

 FUNC_2(&VAR_7->queue);
 return VAR_3;
}
