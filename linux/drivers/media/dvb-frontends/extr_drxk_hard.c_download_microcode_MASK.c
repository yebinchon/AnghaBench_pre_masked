
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct drxk_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct drxk_state*,int,int,int const*) ;

__attribute__((used)) static int FUNC_3(struct drxk_state *VAR_4,
        const u8 VAR_5[], u32 VAR_6)
{
 const u8 *VAR_7 = VAR_5;
 u32 VAR_8;
 u16 VAR_9;
 u16 VAR_10;
 u32 VAR_11 = 0;
 u32 VAR_12;
 int VAR_13 = 0;

 FUNC_0(1, "\n");






 VAR_7 += sizeof(u16);
 VAR_11 += sizeof(u16);
 VAR_9 = (VAR_7[0] << 8) | VAR_7[1];
 VAR_7 += sizeof(u16);
 VAR_11 += sizeof(u16);

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12 += 1) {
  VAR_8 = (VAR_7[0] << 24) | (VAR_7[1] << 16) |
      (VAR_7[2] << 8) | VAR_7[3];
  VAR_7 += sizeof(u32);
  VAR_11 += sizeof(u32);

  VAR_10 = ((VAR_7[0] << 8) | VAR_7[1]) * sizeof(u16);
  VAR_7 += sizeof(u16);
  VAR_11 += sizeof(u16);





  VAR_7 += sizeof(u16);
  VAR_11 += sizeof(u16);





  VAR_7 += sizeof(u16);
  VAR_11 += sizeof(u16);

  if (VAR_11 + VAR_10 > VAR_6) {
   FUNC_1("Firmware is corrupted.\n");
   return -VAR_0;
  }

  VAR_13 = FUNC_2(VAR_4, VAR_8, VAR_10, VAR_7);
  if (VAR_13 < 0) {
   FUNC_1("Error %d while loading firmware\n", VAR_13);
   break;
  }
  VAR_7 += VAR_10;
  VAR_11 += VAR_10;
 }
 return VAR_13;
}
