
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct output {int dummy; } ;
struct host1x_cdma {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct output*,char*,int,char*) ;
 int FUNC_1 (struct output*,char*,...) ;
 unsigned int FUNC_2 (struct output*,int,int*) ;

__attribute__((used)) static void FUNC_3(struct output *VAR_2, phys_addr_t VAR_3,
   unsigned int VAR_4, struct host1x_cdma *VAR_5,
   phys_addr_t VAR_6, u32 *VAR_7)
{

 u32 VAR_8 = VAR_3 - VAR_6;
 unsigned int VAR_9 = 0, VAR_10;
 u32 VAR_11 = VAR_1;






 if (VAR_8 > VAR_0) {
  FUNC_1(VAR_2, "[address mismatch]\n");
  return;
 }

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  u32 VAR_12 = VAR_3 + VAR_10 * 4;
  u32 VAR_13 = *(VAR_7 + VAR_8 / 4 + VAR_10);

  if (!VAR_9) {
   FUNC_1(VAR_2, "%08x: %08x: ", VAR_12, VAR_13);
   VAR_9 = FUNC_2(VAR_2, VAR_13, &VAR_11);
  } else {
   FUNC_0(VAR_2, "%08x%s", VAR_13,
         VAR_9 > 1 ? ", " : "])\n");
   VAR_9--;
  }
 }
}
