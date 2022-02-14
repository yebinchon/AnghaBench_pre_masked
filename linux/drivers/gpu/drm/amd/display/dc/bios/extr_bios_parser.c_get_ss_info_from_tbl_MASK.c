
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct spread_spectrum_info {int dummy; } ;
struct bios_parser {int dummy; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bios_parser*,scalar_t__,struct spread_spectrum_info*) ;
 int FUNC_1 (struct bios_parser*,scalar_t__,struct spread_spectrum_info*) ;

__attribute__((used)) static enum bp_result FUNC_2(
 struct bios_parser *VAR_3,
 uint32_t VAR_4,
 struct spread_spectrum_info *VAR_5)
{
 if (!VAR_5)
  return VAR_2;

 if (VAR_4 == VAR_0 || VAR_4 == VAR_1)
  return FUNC_1(VAR_3, VAR_4, VAR_5);
 else
  return FUNC_0(VAR_3, VAR_4,
   VAR_5);
}
