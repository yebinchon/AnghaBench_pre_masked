
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct spread_spectrum_info {int dummy; } ;
struct dc_bios {int dummy; } ;
struct bios_parser {int dummy; } ;
struct atom_data_revision {int major; int minor; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
typedef enum as_signal_type { ____Placeholder_as_signal_type } as_signal_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct bios_parser* FUNC_0 (struct dc_bios*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,struct atom_data_revision*) ;
 int FUNC_4 (struct bios_parser*,int ,struct spread_spectrum_info*) ;
 int FUNC_5 (struct bios_parser*,int ,struct spread_spectrum_info*) ;
 int FUNC_6 (struct bios_parser*,int ,int ,struct spread_spectrum_info*) ;
 int VAR_4 ;
 int FUNC_7 (int) ;

__attribute__((used)) static enum bp_result FUNC_8(
 struct dc_bios *VAR_5,
 enum as_signal_type VAR_6,
 uint32_t VAR_7,
 struct spread_spectrum_info *VAR_8)
{
 struct bios_parser *VAR_9 = FUNC_0(VAR_5);
 enum bp_result VAR_10 = VAR_3;
 uint32_t VAR_11 = 0;
 VAR_1 *VAR_4;
 struct atom_data_revision VAR_12;

 if (!VAR_8)
  return VAR_2;

 VAR_11 = FUNC_7(VAR_6);

 if (!FUNC_1(VAR_0))
  if (!VAR_7)
   return FUNC_4(VAR_9, VAR_11,
    VAR_8);

 VAR_4 = FUNC_2(VAR_1,
  FUNC_1(VAR_0));
 FUNC_3(VAR_4, &VAR_12);

 switch (VAR_12.major) {
 case 2:
  switch (VAR_12.minor) {
  case 1:


   if (!VAR_7)
    return FUNC_5(VAR_9, VAR_11,
      VAR_8);
   break;
  default:
   break;
  }
  break;

 case 3:
  switch (VAR_12.minor) {
  case 1:
   return FUNC_6(VAR_9, VAR_11, VAR_7, VAR_8);
  default:
   break;
  }
  break;
 default:
  break;
 }

 return VAR_10;
}
