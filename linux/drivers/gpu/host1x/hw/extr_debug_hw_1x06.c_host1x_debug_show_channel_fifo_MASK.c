
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct output {int dummy; } ;
struct host1x_channel {int id; } ;
struct host1x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (struct host1x_channel*,int ) ;
 int FUNC_8 (struct output*,char*,...) ;
 int FUNC_9 (struct output*,char*,...) ;
 int FUNC_10 (struct host1x*,int ) ;
 int FUNC_11 (struct host1x*,int,int ) ;
 unsigned int FUNC_12 (struct output*,int,int*) ;

__attribute__((used)) static void FUNC_13(struct host1x *VAR_9,
        struct host1x_channel *VAR_10,
        struct output *VAR_11)
{

 u32 VAR_12, VAR_13, VAR_14, VAR_15;
 u32 VAR_16 = VAR_8;
 unsigned int VAR_17 = 0;

 u32 VAR_18;

 FUNC_9(VAR_11, "%u: fifo:\n", VAR_10->id);

 VAR_18 = FUNC_7(VAR_10, VAR_1);
 FUNC_9(VAR_11, "CMDFIFO_STAT %08x\n", VAR_18);
 if (VAR_18 & VAR_2) {
  FUNC_9(VAR_11, "[empty]\n");
  return;
 }

 VAR_18 = FUNC_7(VAR_10, VAR_0);
 FUNC_9(VAR_11, "CMDFIFO_RDATA %08x\n", VAR_18);



 FUNC_11(VAR_9, 0x1, VAR_7);

 VAR_18 = 0;
 VAR_18 |= VAR_4;
 VAR_18 |= FUNC_1(VAR_10->id);
 FUNC_11(VAR_9, VAR_18, VAR_3);

 VAR_18 = FUNC_10(VAR_9, VAR_5);
 VAR_12 = FUNC_2(VAR_18);
 VAR_13 = FUNC_3(VAR_18);

 VAR_18 = FUNC_10(VAR_9, FUNC_4(VAR_10->id));
 VAR_14 = FUNC_5(VAR_18);
 VAR_15 = FUNC_6(VAR_18);

 do {
  VAR_18 = 0;
  VAR_18 |= VAR_4;
  VAR_18 |= FUNC_1(VAR_10->id);
  VAR_18 |= FUNC_0(VAR_12);
  FUNC_11(VAR_9, VAR_18,
      VAR_3);

  VAR_18 = FUNC_10(VAR_9,
           VAR_6);

  if (!VAR_17) {
   FUNC_9(VAR_11, "%03x 0x%08x: ",
         VAR_12 - VAR_14, VAR_18);
   VAR_17 = FUNC_12(VAR_11, VAR_18, &VAR_16);
  } else {
   FUNC_8(VAR_11, "%08x%s", VAR_18,
       VAR_17 > 1 ? ", " : "])\n");
   VAR_17--;
  }

  if (VAR_12 == VAR_15)
   VAR_12 = VAR_14;
  else
   VAR_12++;
 } while (VAR_12 != VAR_13);

 if (VAR_17)
  FUNC_8(VAR_11, ", ...])\n");
 FUNC_9(VAR_11, "\n");

 FUNC_11(VAR_9, 0x0, VAR_3);
 FUNC_11(VAR_9, 0x0, VAR_7);

}
