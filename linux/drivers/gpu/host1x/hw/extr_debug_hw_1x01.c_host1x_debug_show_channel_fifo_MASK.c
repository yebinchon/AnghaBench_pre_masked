
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct output {int dummy; } ;
struct host1x_channel {int id; } ;
struct host1x {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (struct host1x_channel*,int ) ;
 int FUNC_10 (struct output*,char*,...) ;
 int FUNC_11 (struct output*,char*,...) ;
 scalar_t__ FUNC_12 (struct host1x*,int ) ;
 int FUNC_13 (struct host1x*,int,int ) ;
 unsigned int FUNC_14 (struct output*,scalar_t__,int *) ;

__attribute__((used)) static void FUNC_15(struct host1x *VAR_4,
        struct host1x_channel *VAR_5,
        struct output *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12 = 0;

 FUNC_11(VAR_6, "%u: fifo:\n", VAR_5->id);

 VAR_7 = FUNC_9(VAR_5, VAR_0);
 FUNC_11(VAR_6, "FIFOSTAT %08x\n", VAR_7);
 if (FUNC_0(VAR_7)) {
  FUNC_11(VAR_6, "[empty]\n");
  return;
 }

 FUNC_13(VAR_4, 0x0, VAR_1);
 FUNC_13(VAR_4, FUNC_3(1) |
      FUNC_2(VAR_5->id),
      VAR_1);

 VAR_7 = FUNC_12(VAR_4, VAR_2);
 VAR_8 = FUNC_4(VAR_7);
 VAR_9 = FUNC_5(VAR_7);

 VAR_7 = FUNC_12(VAR_4, FUNC_6(VAR_5->id));
 VAR_10 = FUNC_7(VAR_7);
 VAR_11 = FUNC_8(VAR_7);

 do {
  FUNC_13(VAR_4, 0x0, VAR_1);
  FUNC_13(VAR_4, FUNC_3(1) |
       FUNC_2(VAR_5->id) |
       FUNC_1(VAR_8),
       VAR_1);
  VAR_7 = FUNC_12(VAR_4, VAR_3);

  if (!VAR_12) {
   FUNC_11(VAR_6, "%08x: ", VAR_7);
   VAR_12 = FUNC_14(VAR_6, VAR_7, ((void*)0));
  } else {
   FUNC_10(VAR_6, "%08x%s", VAR_7,
       VAR_12 > 1 ? ", " : "])\n");
   VAR_12--;
  }

  if (VAR_8 == VAR_11)
   VAR_8 = VAR_10;
  else
   VAR_8++;
 } while (VAR_8 != VAR_9);

 if (VAR_12)
  FUNC_10(VAR_6, ", ...])\n");
 FUNC_11(VAR_6, "\n");

 FUNC_13(VAR_4, 0x0, VAR_1);
}
