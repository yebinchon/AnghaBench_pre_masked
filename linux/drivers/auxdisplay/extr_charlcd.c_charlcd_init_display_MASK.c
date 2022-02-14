
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct charlcd_priv {int flags; } ;
struct charlcd {int ifwidth; int height; TYPE_1__* ops; } ;
struct TYPE_2__ {void (* write_cmd_raw4 ) (struct charlcd*,int) ;void (* write_cmd ) (struct charlcd*,int) ;} ;


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
 int FUNC_0 (struct charlcd*,int) ;
 int FUNC_1 (struct charlcd*) ;
 struct charlcd_priv* FUNC_2 (struct charlcd*) ;
 int FUNC_3 (int) ;
 void FUNC_4 (struct charlcd*,int) ;
 void FUNC_5 (struct charlcd*,int) ;
 void FUNC_6 (struct charlcd*,int) ;
 void FUNC_7 (struct charlcd*,int) ;
 void FUNC_8 (struct charlcd*,int) ;

__attribute__((used)) static int FUNC_9(struct charlcd *VAR_17)
{
 void (*VAR_18)(struct charlcd *VAR_19, int VAR_20);
 struct charlcd_priv *VAR_21 = FUNC_2(VAR_17);
 u8 VAR_22;

 if (VAR_17->ifwidth != 4 && VAR_17->ifwidth != 8)
  return -VAR_0;

 VAR_21->flags = ((VAR_17->height > 1) ? VAR_16 : 0) | VAR_13 |
        VAR_12 | VAR_11;

 FUNC_3(20);





 VAR_22 = VAR_9 | VAR_4;
 if (VAR_17->ifwidth == 4) {
  VAR_22 >>= 4;
  VAR_18 = VAR_17->ops->write_cmd_raw4;
 } else {
  VAR_18 = VAR_17->ops->write_cmd;
 }
 VAR_18(VAR_17, VAR_22);
 FUNC_3(10);
 VAR_18(VAR_17, VAR_22);
 FUNC_3(10);
 VAR_18(VAR_17, VAR_22);
 FUNC_3(10);

 if (VAR_17->ifwidth == 4) {

  VAR_17->ops->write_cmd_raw4(VAR_17, VAR_9 >> 4);
  FUNC_3(10);
 }


 VAR_17->ops->write_cmd(VAR_17,
  VAR_9 |
  ((VAR_17->ifwidth == 8) ? VAR_4 : 0) |
  ((VAR_21->flags & VAR_14) ? VAR_8 : 0) |
  ((VAR_21->flags & VAR_16) ? VAR_10 : 0));
 FUNC_3(10);


 VAR_17->ops->write_cmd(VAR_17, VAR_5);
 FUNC_3(10);

 VAR_17->ops->write_cmd(VAR_17,
  VAR_5 |
  ((VAR_21->flags & VAR_13) ? VAR_6 : 0) |
  ((VAR_21->flags & VAR_12) ? VAR_3 : 0) |
  ((VAR_21->flags & VAR_11) ? VAR_1 : 0));

 FUNC_0(VAR_17, (VAR_21->flags & VAR_15) ? 1 : 0);

 FUNC_3(10);


 VAR_17->ops->write_cmd(VAR_17, VAR_7 | VAR_2);

 FUNC_1(VAR_17);
 return 0;
}
