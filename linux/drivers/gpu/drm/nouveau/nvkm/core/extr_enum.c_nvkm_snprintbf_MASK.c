
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_bitfield {int mask; int name; } ;


 int FUNC_0 (char*,int,char*,char*,int ) ;

void
FUNC_1(char *VAR_0, int VAR_1, const struct nvkm_bitfield *VAR_2, u32 VAR_3)
{
 bool VAR_4 = 0;
 while (VAR_1 >= 1 && VAR_2->name) {
  if (VAR_3 & VAR_2->mask) {
   int VAR_5 = FUNC_0(VAR_0, VAR_1, "%s%s",
         VAR_4 ? " " : "", VAR_2->name);
   VAR_1 -= VAR_5;
   VAR_0 += VAR_5;
   VAR_4 = 1;
  }
  VAR_2++;
 }
 VAR_0[0] = '\0';
}
