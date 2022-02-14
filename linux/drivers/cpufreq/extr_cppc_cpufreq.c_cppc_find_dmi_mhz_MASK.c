
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct dmi_header {scalar_t__ type; scalar_t__ length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__ const*) ;

__attribute__((used)) static void FUNC_1(const struct dmi_header *VAR_3, void *VAR_4)
{
 const u8 *VAR_5 = (const u8 *)VAR_3;
 u16 *VAR_6 = (u16 *)VAR_4;

 if (VAR_3->type == VAR_0 &&
     VAR_3->length >= VAR_1) {
  u16 VAR_7 = (u16)FUNC_0((const u16 *)
    (VAR_5 + VAR_2));
  *VAR_6 = VAR_7 > *VAR_6 ? VAR_7 : *VAR_6;
 }
}
