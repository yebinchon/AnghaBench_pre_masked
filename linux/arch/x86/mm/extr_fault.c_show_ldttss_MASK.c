
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct ldttss_desc {int base0; int base1; int limit0; int limit1; scalar_t__ base3; scalar_t__ base2; } ;
struct desc_struct {int dummy; } ;
struct desc_ptr {scalar_t__ size; scalar_t__ address; } ;


 int FUNC_0 (char*,char const*,...) ;
 scalar_t__ FUNC_1 (struct ldttss_desc*,void*,int) ;

__attribute__((used)) static void FUNC_2(const struct desc_ptr *VAR_0, const char *VAR_1, u16 VAR_2)
{
 u32 VAR_3 = (VAR_2 >> 3) * sizeof(struct desc_struct);
 unsigned long VAR_4;
 struct ldttss_desc VAR_5;

 if (VAR_2 == 0) {
  FUNC_0("%s: NULL\n", VAR_1);
  return;
 }

 if (VAR_3 + sizeof(struct ldttss_desc) >= VAR_0->size) {
  FUNC_0("%s: 0x%hx -- out of bounds\n", VAR_1, VAR_2);
  return;
 }

 if (FUNC_1(&VAR_5, (void *)(VAR_0->address + VAR_3),
         sizeof(struct ldttss_desc))) {
  FUNC_0("%s: 0x%hx -- GDT entry is not readable\n",
    VAR_1, VAR_2);
  return;
 }

 VAR_4 = VAR_5.base0 | (VAR_5.base1 << 16) | ((unsigned long)VAR_5.base2 << 24);



 FUNC_0("%s: 0x%hx -- base=0x%lx limit=0x%x\n",
   VAR_1, VAR_2, VAR_4, (VAR_5.limit0 | (VAR_5.limit1 << 16)));
}
