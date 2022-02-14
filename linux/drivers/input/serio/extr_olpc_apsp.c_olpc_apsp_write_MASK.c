
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;
struct serio {struct olpc_apsp* port_data; } ;
struct olpc_apsp {scalar_t__ base; int dev; struct serio* padio; } ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned char VAR_7 ;
 int FUNC_0 (int ,char*,unsigned char,...) ;
 int FUNC_1 (int) ;
 unsigned char FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned char,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct serio *VAR_8, unsigned char VAR_9)
{
 struct olpc_apsp *VAR_10 = VAR_8->port_data;
 unsigned int VAR_11;
 u32 VAR_12 = 0;

 if (VAR_8 == VAR_10->padio)
  VAR_12 = VAR_7 << VAR_5;
 else
  VAR_12 = VAR_3 << VAR_5;

 FUNC_0(VAR_10->dev, "olpc_apsp_write which=%x val=%x\n", VAR_12, VAR_9);
 for (VAR_11 = 0; VAR_11 < 50; VAR_11++) {
  u32 VAR_13 = FUNC_2(VAR_10->base + VAR_1);
  if ((VAR_13 & VAR_0) < VAR_4) {
   FUNC_3(VAR_12 | VAR_9,
          VAR_10->base + VAR_6);
   return 0;
  }

  FUNC_1(1);
 }

 FUNC_0(VAR_10->dev, "olpc_apsp_write timeout, status=%x\n",
  FUNC_2(VAR_10->base + VAR_1));

 return -VAR_2;
}
