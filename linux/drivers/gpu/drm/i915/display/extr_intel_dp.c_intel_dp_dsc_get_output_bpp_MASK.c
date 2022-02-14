
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int* VAR_1 ;

__attribute__((used)) static u16 FUNC_4(u32 VAR_2, u32 VAR_3,
           u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7;
 int VAR_8;







 VAR_6 = (VAR_2 * VAR_3 * 8) /
    FUNC_2(VAR_4);
 FUNC_1("Max link bpp: %u\n", VAR_6);


 VAR_7 = VAR_0 / VAR_5;
 FUNC_1("Max small joiner bpp: %u\n", VAR_7);





 VAR_6 = FUNC_3(VAR_6, VAR_7);


 if (VAR_6 < VAR_1[0]) {
  FUNC_1("Unsupported BPP %u, min %u\n",
         VAR_6, VAR_1[0]);
  return 0;
 }


 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1) - 1; VAR_8++) {
  if (VAR_6 < VAR_1[VAR_8 + 1])
   break;
 }
 VAR_6 = VAR_1[VAR_8];





 return VAR_6 << 4;
}
