
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct ata_eh_info {scalar_t__ desc_len; scalar_t__ desc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,char const*,int ) ;

void FUNC_1(struct ata_eh_info *VAR_1,
     const char *VAR_2, va_list VAR_3)
{
 VAR_1->desc_len += FUNC_0(VAR_1->desc + VAR_1->desc_len,
         VAR_0 - VAR_1->desc_len,
         VAR_2, VAR_3);
}
