
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct alps_data* private; } ;
struct alps_protocol_info {int version; int flags; int mask0; int byte0; } ;
struct alps_data {int proto_version; int x_max; int y_max; int x_bits; int y_bits; int* fw_ver; void* addr_command; void* nibble_commands; void* set_abs_params; int decode_fields; void* process_packet; int hw_init; int flags; int mask0; int byte0; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct psmouse*,struct alps_data*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (struct psmouse*,int ) ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 void* VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;
 int FUNC_2 (struct psmouse*,struct alps_data*) ;
 void* VAR_35 ;
 void* VAR_36 ;
 void* VAR_37 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct psmouse *VAR_38,
        struct alps_data *VAR_39,
        const struct alps_protocol_info *VAR_40)
{
 VAR_38->private = VAR_39;

 FUNC_4(&VAR_39->timer, VAR_15, 0);

 VAR_39->proto_version = VAR_40->version;
 VAR_39->byte0 = VAR_40->byte0;
 VAR_39->mask0 = VAR_40->mask0;
 VAR_39->flags = VAR_40->flags;

 VAR_39->x_max = 2000;
 VAR_39->y_max = 1400;
 VAR_39->x_bits = 15;
 VAR_39->y_bits = 11;

 switch (VAR_39->proto_version) {
 case 136:
 case 135:
  VAR_39->hw_init = VAR_19;
  VAR_39->process_packet = VAR_25;
  VAR_39->set_abs_params = VAR_33;
  VAR_39->x_max = 1023;
  VAR_39->y_max = 767;
  if (FUNC_3(VAR_14))
   VAR_39->flags |= VAR_5;
  break;

 case 134:
  VAR_39->hw_init = VAR_20;
  VAR_39->process_packet = VAR_26;
  VAR_39->set_abs_params = VAR_31;
  VAR_39->decode_fields = VAR_11;
  VAR_39->nibble_commands = VAR_35;
  VAR_39->addr_command = VAR_8;

  if (FUNC_1(VAR_38,
      VAR_2) < 0)
   VAR_39->flags &= ~VAR_1;

  break;

 case 133:
  VAR_39->hw_init = VAR_17;
  VAR_39->process_packet = VAR_26;
  VAR_39->set_abs_params = VAR_31;
  VAR_39->decode_fields = VAR_12;
  VAR_39->nibble_commands = VAR_35;
  VAR_39->addr_command = VAR_8;
  VAR_39->x_bits = 16;
  VAR_39->y_bits = 12;

  if (FUNC_1(VAR_38,
      VAR_3) < 0)
   VAR_39->flags &= ~VAR_1;

  break;

 case 132:
  VAR_39->hw_init = VAR_21;
  VAR_39->process_packet = VAR_27;
  VAR_39->set_abs_params = VAR_31;
  VAR_39->nibble_commands = VAR_36;
  VAR_39->addr_command = VAR_7;
  break;

 case 131:
  VAR_39->hw_init = VAR_16;
  VAR_39->process_packet = VAR_30;
  VAR_39->decode_fields = VAR_9;
  VAR_39->set_abs_params = VAR_31;
  VAR_39->nibble_commands = VAR_35;
  VAR_39->addr_command = VAR_8;
  VAR_39->x_bits = 23;
  VAR_39->y_bits = 12;

  if (FUNC_0(VAR_38, VAR_39))
   return -VAR_6;

  break;

 case 130:
  VAR_39->hw_init = VAR_22;
  VAR_39->process_packet = VAR_28;
  VAR_39->set_abs_params = VAR_33;
  VAR_39->nibble_commands = VAR_37;
  VAR_39->x_max = 2047;
  VAR_39->y_max = 1535;
  break;

 case 129:
  VAR_39->hw_init = VAR_23;
  VAR_39->process_packet = VAR_29;
  VAR_39->decode_fields = VAR_10;
  VAR_39->set_abs_params = VAR_34;
  VAR_39->nibble_commands = VAR_35;
  VAR_39->addr_command = VAR_8;
  VAR_39->x_max = 0xfff;
  VAR_39->y_max = 0x7ff;

  if (VAR_39->fw_ver[1] != 0xba)
   VAR_39->flags |= VAR_0;

  if (FUNC_1(VAR_38, VAR_4) < 0)
   VAR_39->flags &= ~VAR_1;

  break;

 case 128:
  VAR_39->hw_init = VAR_18;
  VAR_39->process_packet = VAR_24;
  VAR_39->decode_fields = VAR_13;
  VAR_39->set_abs_params = VAR_32;
  VAR_39->nibble_commands = VAR_35;
  VAR_39->addr_command = VAR_8;

  if (FUNC_2(VAR_38, VAR_39))
   return -VAR_6;

  break;
 }

 return 0;
}
