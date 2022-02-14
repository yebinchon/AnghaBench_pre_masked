
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uv_hub_nmi_s {int dummy; } ;
struct pt_regs {int dummy; } ;
struct TYPE_2__ {int state; int pinging; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int,struct pt_regs*,int) ;
 int FUNC_12 (struct uv_hub_nmi_s*) ;
 int FUNC_13 (int) ;
 TYPE_1__ VAR_4 ;
 struct uv_hub_nmi_s* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (int,struct pt_regs*,int) ;
 scalar_t__ FUNC_15 (char*) ;
 int FUNC_16 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_17 (int,struct pt_regs*,int) ;
 int FUNC_18 (int,int,struct pt_regs*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_19 (int) ;
 int FUNC_20 () ;
 int FUNC_21 (int) ;

__attribute__((used)) static int FUNC_22(unsigned int VAR_13, struct pt_regs *VAR_14)
{
 struct uv_hub_nmi_s *VAR_15 = VAR_5;
 int VAR_16 = FUNC_6();
 int VAR_17 = 0;
 unsigned long VAR_18;

 FUNC_4(VAR_18);


 if (!FUNC_9(VAR_4.pinging) && !FUNC_12(VAR_15)) {
  FUNC_3(VAR_18);
  return VAR_0;
 }


 VAR_17 = (FUNC_0(&VAR_8) == VAR_16);


 if (FUNC_15("kdump")) {
  FUNC_18(VAR_16, VAR_17, VAR_14);


  if (VAR_17)
   FUNC_8(VAR_7, "dump", FUNC_7(VAR_7));
 }


 FUNC_21(VAR_17);


 if (FUNC_15("health")) {
  FUNC_14(VAR_16, VAR_14, VAR_17);
 } else if (FUNC_15("ips") || FUNC_15("dump")) {
  FUNC_17(VAR_16, VAR_14, VAR_17);
 } else if (FUNC_15("kdb") || FUNC_15("kgdb")) {
  FUNC_11(VAR_16, VAR_14, VAR_17);
 } else {
  if (VAR_17)
   FUNC_5("UV: unknown NMI action: %s\n", VAR_7);
  FUNC_19(VAR_17);
 }


 FUNC_10(VAR_4.state, VAR_3);


 FUNC_13(VAR_16);


 if (VAR_17) {
  if (FUNC_2(VAR_9))
   FUNC_16();
  FUNC_1(&VAR_10, -1);
  FUNC_1(&VAR_8, -1);
  FUNC_1(&VAR_6, 0);
  FUNC_1(&VAR_11, 0);
  FUNC_1(&VAR_12, VAR_2);
 }

 FUNC_20();
 FUNC_3(VAR_18);

 return VAR_1;
}
