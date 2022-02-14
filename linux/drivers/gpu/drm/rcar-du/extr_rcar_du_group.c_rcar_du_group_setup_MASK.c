
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_du_group {int dptsr_planes; int lock; struct rcar_du_device* dev; } ;
struct rcar_du_device {TYPE_1__* info; } ;
struct TYPE_2__ {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rcar_du_group*) ;
 int FUNC_3 (struct rcar_du_group*) ;
 int FUNC_4 (struct rcar_du_group*) ;
 int FUNC_5 (struct rcar_du_group*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct rcar_du_group *VAR_21)
{
 struct rcar_du_device *VAR_22 = VAR_21->dev;


 FUNC_5(VAR_21, VAR_0, VAR_15 | VAR_16);
 if (VAR_22->info->gen < 3) {
  FUNC_5(VAR_21, VAR_4, VAR_5 | VAR_6);
  FUNC_5(VAR_21, VAR_7, VAR_8 | VAR_9);
  FUNC_5(VAR_21, VAR_10, VAR_11);
 }
 FUNC_5(VAR_21, VAR_12, VAR_13 | VAR_14);

 FUNC_4(VAR_21);

 if (VAR_22->info->gen >= 2) {
  FUNC_2(VAR_21);
  FUNC_3(VAR_21);
 }

 if (VAR_22->info->gen >= 3)
  FUNC_5(VAR_21, VAR_1, VAR_2 | VAR_3);





 FUNC_5(VAR_21, VAR_17, VAR_19 | VAR_18);


 FUNC_0(&VAR_21->lock);
 FUNC_5(VAR_21, VAR_20, (VAR_21->dptsr_planes << 16) |
       VAR_21->dptsr_planes);
 FUNC_1(&VAR_21->lock);
}
