
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trackpoint_data {scalar_t__ variant_id; } ;
struct psmouse {int ps2dev; struct trackpoint_data* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int,struct psmouse*,struct trackpoint_data*,int ) ;
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
 int VAR_21 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_24, bool VAR_25)
{
 struct trackpoint_data *VAR_26 = VAR_24->private;

 if (!VAR_25 && VAR_26->variant_id == VAR_9) {




  FUNC_1(&VAR_24->ps2dev, VAR_8,
          VAR_5, VAR_2);

  FUNC_1(&VAR_24->ps2dev, VAR_7,
          VAR_4, VAR_1);

  FUNC_1(&VAR_24->ps2dev, VAR_6,
          VAR_3, VAR_0);
 }






 FUNC_0(VAR_25, VAR_24, VAR_26, VAR_18);
 FUNC_0(VAR_25, VAR_24, VAR_26, VAR_13);
 FUNC_0(VAR_25, VAR_24, VAR_26, VAR_20);
 FUNC_0(VAR_25, VAR_24, VAR_26, VAR_17);
 FUNC_0(VAR_25, VAR_24, VAR_26, VAR_10);
 FUNC_0(VAR_25, VAR_24, VAR_26, VAR_15);
 FUNC_0(VAR_25, VAR_24, VAR_26, VAR_21);
 FUNC_0(VAR_25, VAR_24, VAR_26, VAR_22);
 FUNC_0(VAR_25, VAR_24, VAR_26, VAR_23);
 FUNC_0(VAR_25, VAR_24, VAR_26, VAR_14);
 FUNC_0(VAR_25, VAR_24, VAR_26, VAR_11);


 FUNC_0(VAR_25, VAR_24, VAR_26, VAR_16);
 FUNC_0(VAR_25, VAR_24, VAR_26, VAR_19);
 FUNC_0(VAR_25, VAR_24, VAR_26, VAR_12);

 return 0;
}
