
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dc_bios {int dummy; } ;
struct bios_parser {int dummy; } ;
struct atom_data_revision {int major; int minor; } ;
typedef enum as_signal_type { ____Placeholder_as_signal_type } as_signal_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct bios_parser* FUNC_0 (struct dc_bios*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,struct atom_data_revision*) ;
 int FUNC_4 (struct bios_parser*,int ) ;
 int FUNC_5 (struct bios_parser*,int ) ;
 int FUNC_6 (struct bios_parser*,int ) ;
 int VAR_2 ;
 int FUNC_7 (int) ;

__attribute__((used)) static uint32_t FUNC_8(
 struct dc_bios *VAR_3,
 enum as_signal_type VAR_4)
{
 struct bios_parser *VAR_5 = FUNC_0(VAR_3);
 uint32_t VAR_6 = 0;
 VAR_1 *VAR_2;
 struct atom_data_revision VAR_7;

 VAR_6 = FUNC_7(VAR_4);

 if (!FUNC_1(VAR_0))
  return FUNC_6(VAR_5, VAR_6);

 VAR_2 = FUNC_2(VAR_1,
   FUNC_1(VAR_0));
 FUNC_3(VAR_2, &VAR_7);

 switch (VAR_7.major) {
 case 2:
  switch (VAR_7.minor) {
  case 1:
   return FUNC_4(VAR_5, VAR_6);
  default:
   break;
  }
  break;
 case 3:
  switch (VAR_7.minor) {
  case 1:
   return
    FUNC_5(
      VAR_5, VAR_6);
  default:
   break;
  }
  break;
 default:
  break;
 }

 return 0;
}
