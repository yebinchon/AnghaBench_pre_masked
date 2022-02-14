
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cami2c {TYPE_1__* msg; int flags; } ;
struct TYPE_2__ {int addr; int len; } ;


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
 int FUNC_0 (struct cami2c*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct cami2c *VAR_18)
{
 int VAR_19;

 VAR_18->flags |= VAR_11;


 FUNC_0(VAR_18, VAR_10, 0xfe);
 FUNC_0(VAR_18, VAR_6, (VAR_18->msg->addr << 1) | 1);


 if (VAR_18->msg->len >= VAR_3)
  VAR_19 = VAR_3 - 1;
 else
  VAR_19 = VAR_18->msg->len - 1;

 FUNC_0(VAR_18, VAR_4, VAR_0 | VAR_1);
 FUNC_0(VAR_18, VAR_4, VAR_1 | ((VAR_19 & 0xF) << 4));

 FUNC_0(VAR_18, VAR_9, 0);
 FUNC_0(VAR_18, VAR_7, VAR_13 | VAR_12);
 FUNC_0(VAR_18, VAR_8, VAR_16 | VAR_14 | VAR_17 | VAR_15);
 FUNC_0(VAR_18, VAR_5, VAR_2);
}
