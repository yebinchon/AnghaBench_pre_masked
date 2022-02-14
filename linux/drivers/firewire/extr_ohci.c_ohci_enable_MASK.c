
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int device; } ;
struct fw_ohci {int quirks; int self_id_bus; int bus_time_running; int ir_context_support; int pri_req_max; int next_config_rom_bus; int config_rom_bus; TYPE_1__ card; int ar_response_ctx; int ar_request_ctx; scalar_t__* next_config_rom; scalar_t__ next_header; scalar_t__* config_rom; } ;
struct fw_card {int broadcast_channel_auto_allocated; int priority_budget_implemented; } ;
typedef int __be32 ;


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
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct fw_ohci*) ;
 int FUNC_4 (scalar_t__*,int const*,size_t) ;
 scalar_t__* FUNC_5 (int ,int ,int*,int ) ;
 int FUNC_6 (struct fw_ohci*) ;
 struct fw_ohci* FUNC_7 (struct fw_card*) ;
 int FUNC_8 (TYPE_1__*,int,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct fw_ohci*,char*) ;
 int FUNC_11 (struct fw_ohci*,char*) ;
 int FUNC_12 (struct fw_card*,int,int ,int) ;
 int VAR_53 ;
 int FUNC_13 (struct fw_ohci*) ;
 int FUNC_14 (struct fw_ohci*,int ) ;
 int FUNC_15 (struct fw_ohci*,int ,int) ;
 int FUNC_16 (struct fw_ohci*) ;

__attribute__((used)) static int FUNC_17(struct fw_card *VAR_54,
         const __be32 *VAR_55, size_t VAR_56)
{
 struct fw_ohci *VAR_57 = FUNC_7(VAR_54);
 u32 VAR_58, VAR_59, VAR_60;
 int VAR_61, VAR_62;

 VAR_62 = FUNC_16(VAR_57);
 if (VAR_62 < 0) {
  FUNC_10(VAR_57, "failed to reset ohci card\n");
  return VAR_62;
 }
 FUNC_15(VAR_57, VAR_13,
    VAR_15 |
    VAR_18);
 FUNC_6(VAR_57);

 for (VAR_58 = 0, VAR_61 = 0; !VAR_58 && VAR_61 < 3; VAR_61++) {
  FUNC_9(50);
  VAR_58 = FUNC_14(VAR_57, VAR_13) &
        VAR_15;
 }

 if (!VAR_58) {
  FUNC_10(VAR_57, "failed to set Link Power Status\n");
  return -VAR_1;
 }

 if (VAR_57->quirks & VAR_52) {
  VAR_62 = FUNC_13(VAR_57);
  if (VAR_62 < 0)
   return VAR_62;
  if (VAR_62)
   FUNC_11(VAR_57, "local TSB41BA3D phy\n");
  else
   VAR_57->quirks &= ~VAR_52;
 }

 FUNC_15(VAR_57, VAR_12,
    VAR_17);

 FUNC_15(VAR_57, VAR_34, VAR_57->self_id_bus);
 FUNC_15(VAR_57, VAR_23,
    VAR_25 |
    VAR_24);

 FUNC_15(VAR_57, VAR_6,
    VAR_28 |
    (VAR_29 << 4) |
    (VAR_30 << 8) |
    (200 << 16));

 VAR_57->bus_time_running = 0;

 for (VAR_61 = 0; VAR_61 < 32; VAR_61++)
  if (VAR_57->ir_context_support & (1 << VAR_61))
   FUNC_15(VAR_57, FUNC_0(VAR_61),
      VAR_5);

 VAR_59 = FUNC_14(VAR_57, VAR_35) & 0x00ff00ff;
 if (VAR_59 >= VAR_49) {
  FUNC_15(VAR_57, VAR_19,
     0xfffffffe);
  VAR_54->broadcast_channel_auto_allocated = 1;
 }


 FUNC_15(VAR_57, VAR_11, 0x3f);
 VAR_57->pri_req_max = FUNC_14(VAR_57, VAR_11) & 0x3f;
 FUNC_15(VAR_57, VAR_11, 0);
 VAR_54->priority_budget_implemented = VAR_57->pri_req_max != 0;

 FUNC_15(VAR_57, VAR_31, VAR_3 >> 16);
 FUNC_15(VAR_57, VAR_20, ~0);
 FUNC_15(VAR_57, VAR_21, ~0);

 VAR_62 = FUNC_3(VAR_57);
 if (VAR_62 < 0)
  return VAR_62;


 VAR_62 = FUNC_12(VAR_54, 4, 0, VAR_51 | VAR_50);
 if (VAR_62 < 0)
  return VAR_62;
 if (VAR_55) {
  VAR_57->next_config_rom =
   FUNC_5(VAR_57->card.device, VAR_0,
        &VAR_57->next_config_rom_bus,
        VAR_4);
  if (VAR_57->next_config_rom == ((void*)0))
   return -VAR_2;

  FUNC_4(VAR_57->next_config_rom, VAR_55, VAR_56);
 } else {




  VAR_57->next_config_rom = VAR_57->config_rom;
  VAR_57->next_config_rom_bus = VAR_57->config_rom_bus;
 }

 VAR_57->next_header = VAR_57->next_config_rom[0];
 VAR_57->next_config_rom[0] = 0;
 FUNC_15(VAR_57, VAR_9, 0);
 FUNC_15(VAR_57, VAR_8,
    FUNC_2(VAR_57->next_config_rom[2]));
 FUNC_15(VAR_57, VAR_10, VAR_57->next_config_rom_bus);

 FUNC_15(VAR_57, VAR_7, 0x80000000);

 VAR_60 = VAR_44 | VAR_45 |
  VAR_32 | VAR_33 |
  VAR_40 | VAR_39 |
  VAR_42 |
  VAR_46 |
  VAR_43 |
  VAR_37 |
  VAR_47 |
  VAR_38 |
  VAR_41;
 if (VAR_53 & VAR_48)
  VAR_60 |= VAR_36;
 FUNC_15(VAR_57, VAR_22, VAR_60);

 FUNC_15(VAR_57, VAR_13,
    VAR_16 |
    VAR_14);

 FUNC_15(VAR_57, VAR_23,
    VAR_27 |
    VAR_26);

 FUNC_1(&VAR_57->ar_request_ctx);
 FUNC_1(&VAR_57->ar_response_ctx);

 FUNC_6(VAR_57);


 FUNC_8(&VAR_57->card, 0, 1);

 return 0;
}
