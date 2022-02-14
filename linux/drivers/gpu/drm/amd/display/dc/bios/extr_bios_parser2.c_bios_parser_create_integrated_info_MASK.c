
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct integrated_info {int dummy; } ;
struct dc_bios {int dummy; } ;
struct bios_parser {int dummy; } ;


 int FUNC_0 (int ) ;
 struct bios_parser* FUNC_1 (struct dc_bios*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct bios_parser*,struct integrated_info*) ;
 int FUNC_3 (struct integrated_info*) ;
 struct integrated_info* FUNC_4 (int,int ) ;

__attribute__((used)) static struct integrated_info *FUNC_5(
 struct dc_bios *VAR_2)
{
 struct bios_parser *VAR_3 = FUNC_1(VAR_2);
 struct integrated_info *VAR_4 = ((void*)0);

 VAR_4 = FUNC_4(sizeof(struct integrated_info), VAR_1);

 if (VAR_4 == ((void*)0)) {
  FUNC_0(0);
  return ((void*)0);
 }

 if (FUNC_2(VAR_3, VAR_4) == VAR_0)
  return VAR_4;

 FUNC_3(VAR_4);

 return ((void*)0);
}
