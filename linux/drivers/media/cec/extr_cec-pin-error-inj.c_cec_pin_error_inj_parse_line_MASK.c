
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned int u64 ;
typedef int u32 ;
struct cec_pin {unsigned int* error_inj; int rx_toggle; int tx_toggle; int tx_ignore_nack_until_eom; int tx_custom_pulse; int tx_custom_low_usecs; int tx_custom_high_usecs; int** error_inj_args; } ;
struct cec_adapter {struct cec_pin* pin; } ;
struct TYPE_2__ {char* cmd; unsigned int mode_offset; int arg_idx; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 void* VAR_13 ;
 TYPE_1__* VAR_14 ;
 int FUNC_0 (struct cec_pin*) ;
 scalar_t__ FUNC_1 (char*,int ,int*) ;
 int FUNC_2 (char*,int ,int*) ;
 int FUNC_3 (unsigned int*,int ,int) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char*,char const*) ;
 char* FUNC_7 (char**,char const*) ;

bool FUNC_8(struct cec_adapter *VAR_15, char *VAR_16)
{
 static const char *VAR_17 = " \t\r";
 struct cec_pin *VAR_18 = VAR_15->pin;
 unsigned int VAR_19;
 bool VAR_20 = 0;
 char *VAR_21 = VAR_16;
 char *VAR_22;
 char *VAR_23;
 u64 *VAR_24;
 u8 *VAR_25;
 bool VAR_26;
 u8 VAR_27;
 u8 VAR_28;
 u8 VAR_29;

 VAR_21 = FUNC_4(VAR_21);
 VAR_22 = FUNC_7(&VAR_21, VAR_17);
 if (!FUNC_6(VAR_22, "clear")) {
  FUNC_3(VAR_18->error_inj, 0, sizeof(VAR_18->error_inj));
  VAR_18->rx_toggle = VAR_18->tx_toggle = 0;
  VAR_18->tx_ignore_nack_until_eom = 0;
  VAR_18->tx_custom_pulse = 0;
  VAR_18->tx_custom_low_usecs = VAR_13;
  VAR_18->tx_custom_high_usecs = VAR_13;
  return 1;
 }
 if (!FUNC_6(VAR_22, "rx-clear")) {
  for (VAR_19 = 0; VAR_19 <= VAR_5; VAR_19++)
   VAR_18->error_inj[VAR_19] &= ~VAR_7;
  VAR_18->rx_toggle = 0;
  return 1;
 }
 if (!FUNC_6(VAR_22, "tx-clear")) {
  for (VAR_19 = 0; VAR_19 <= VAR_5; VAR_19++)
   VAR_18->error_inj[VAR_19] &= ~VAR_11;
  VAR_18->tx_toggle = 0;
  VAR_18->tx_ignore_nack_until_eom = 0;
  VAR_18->tx_custom_pulse = 0;
  VAR_18->tx_custom_low_usecs = VAR_13;
  VAR_18->tx_custom_high_usecs = VAR_13;
  return 1;
 }
 if (!FUNC_6(VAR_22, "tx-ignore-nack-until-eom")) {
  VAR_18->tx_ignore_nack_until_eom = 1;
  return 1;
 }
 if (!FUNC_6(VAR_22, "tx-custom-pulse")) {
  VAR_18->tx_custom_pulse = 1;
  FUNC_0(VAR_18);
  return 1;
 }
 if (!VAR_21)
  return 0;

 VAR_21 = FUNC_4(VAR_21);
 if (!FUNC_6(VAR_22, "tx-custom-low-usecs")) {
  u32 VAR_30;

  if (FUNC_1(VAR_21, 0, &VAR_30) || VAR_30 > 10000000)
   return 0;
  VAR_18->tx_custom_low_usecs = VAR_30;
  return 1;
 }
 if (!FUNC_6(VAR_22, "tx-custom-high-usecs")) {
  u32 VAR_31;

  if (FUNC_1(VAR_21, 0, &VAR_31) || VAR_31 > 10000000)
   return 0;
  VAR_18->tx_custom_high_usecs = VAR_31;
  return 1;
 }

 VAR_23 = FUNC_5(VAR_22, ',');
 if (VAR_23)
  *VAR_23++ = '\0';
 if (!FUNC_6(VAR_22, "any")) {
  VAR_26 = 0;
  VAR_24 = VAR_18->error_inj + VAR_5;
  VAR_25 = VAR_18->error_inj_args[VAR_5];
 } else if (!FUNC_2(VAR_22, 0, &VAR_27)) {
  VAR_26 = 1;
  VAR_24 = VAR_18->error_inj + VAR_27;
  VAR_25 = VAR_18->error_inj_args[VAR_27];
 } else {
  return 0;
 }

 VAR_28 = VAR_3;
 if (VAR_23) {
  if (!FUNC_6(VAR_23, "off"))
   VAR_28 = VAR_2;
  else if (!FUNC_6(VAR_23, "once"))
   VAR_28 = VAR_3;
  else if (!FUNC_6(VAR_23, "always"))
   VAR_28 = VAR_0;
  else if (!FUNC_6(VAR_23, "toggle"))
   VAR_28 = VAR_4;
  else
   return 0;
 }

 VAR_22 = FUNC_7(&VAR_21, VAR_17);
 if (VAR_21) {
  VAR_21 = FUNC_4(VAR_21);
  VAR_20 = !FUNC_2(VAR_21, 0, &VAR_29);
 }

 if (!FUNC_6(VAR_22, "clear")) {
  *VAR_24 = 0;
  return 1;
 }
 if (!FUNC_6(VAR_22, "rx-clear")) {
  *VAR_24 &= ~VAR_7;
  return 1;
 }
 if (!FUNC_6(VAR_22, "tx-clear")) {
  *VAR_24 &= ~VAR_11;
  return 1;
 }

 for (VAR_19 = 0; VAR_14[VAR_19].cmd; VAR_19++) {
  const char *VAR_32 = VAR_14[VAR_19].cmd;
  unsigned int VAR_33;
  u64 VAR_34;
  int VAR_35;
  bool VAR_36 = 1;

  if (FUNC_6(VAR_22, VAR_32))
   continue;

  VAR_33 = VAR_14[VAR_19].mode_offset;
  VAR_34 = VAR_1 << VAR_33;
  VAR_35 = VAR_14[VAR_19].arg_idx;

  if (VAR_33 == VAR_6) {
   if (VAR_26)
    return 0;
   if (!VAR_20)
    VAR_29 = 0x0f;
   VAR_36 = 0;
  } else if (VAR_33 == VAR_8) {
   if (!VAR_20 || !VAR_29)
    return 0;
   VAR_36 = 0;
  }

  if (VAR_35 >= 0 && VAR_36) {
   if (!VAR_20 || VAR_29 >= 160)
    return 0;
   if (VAR_26 && VAR_29 < 10 + 8)
    return 0;

   if ((VAR_33 == VAR_12 ||
        VAR_33 == VAR_10 ||
        VAR_33 == VAR_9) &&
       (VAR_29 % 10) == 9)
    return 0;
  }
  *VAR_24 &= ~VAR_34;
  *VAR_24 |= (u64)VAR_28 << VAR_33;
  if (VAR_35 >= 0)
   VAR_25[VAR_35] = VAR_29;
  return 1;
 }
 return 0;
}
