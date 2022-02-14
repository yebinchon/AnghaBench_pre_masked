
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ag71xx {TYPE_1__* dev; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char*,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ag71xx*,int ) ;
 int FUNC_2 (struct ag71xx*,int ,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct ag71xx *VAR_12)
{
 u32 VAR_13;
 int VAR_14;

 FUNC_0("%s: txdesc reg: 0x%08x rxdesc reg: 0x%08x\n",
   VAR_12->dev->name,
   FUNC_1(VAR_12, VAR_4),
   FUNC_1(VAR_12, VAR_1));


 FUNC_2(VAR_12, VAR_0, 0);
 FUNC_2(VAR_12, VAR_3, 0);


 FUNC_2(VAR_12, VAR_4, 0);
 FUNC_2(VAR_12, VAR_1, 0);


 for (VAR_14 = 0; VAR_14 < 256; VAR_14++) {
  FUNC_2(VAR_12, VAR_2, VAR_8);
  FUNC_2(VAR_12, VAR_5, VAR_10);
 }


 FUNC_2(VAR_12, VAR_2, VAR_6 | VAR_7);
 FUNC_2(VAR_12, VAR_5, VAR_9 | VAR_11);

 VAR_13 = FUNC_1(VAR_12, VAR_2);
 if (VAR_13)
  FUNC_3("%s: unable to clear DMA Rx status: %08x\n",
   VAR_12->dev->name, VAR_13);

 VAR_13 = FUNC_1(VAR_12, VAR_5);


 VAR_13 &= ~0xff000000;

 if (VAR_13)
  FUNC_3("%s: unable to clear DMA Tx status: %08x\n",
   VAR_12->dev->name, VAR_13);
}
