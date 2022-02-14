
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct drxd_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drxd_state*,int,int,int*,int ) ;

__attribute__((used)) static int FUNC_1(struct drxd_state *VAR_1,
        const u8 *VAR_2, u32 VAR_3)
{
 u8 *VAR_4;
 u32 VAR_5;
 u16 VAR_6;
 u16 VAR_7;
 u32 VAR_8 = 0;
 int VAR_9, VAR_10 = 0;

 VAR_4 = (u8 *) VAR_2;


 VAR_4 += sizeof(u16);
 VAR_8 += sizeof(u16);
 VAR_6 = (VAR_4[0] << 8) | VAR_4[1];
 VAR_4 += sizeof(u16);
 VAR_8 += sizeof(u16);

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_5 = (VAR_4[0] << 24) | (VAR_4[1] << 16) |
      (VAR_4[2] << 8) | VAR_4[3];
  VAR_4 += sizeof(u32);
  VAR_8 += sizeof(u32);

  VAR_7 = ((VAR_4[0] << 8) | VAR_4[1]) * sizeof(u16);
  VAR_4 += sizeof(u16);
  VAR_8 += sizeof(u16);



  VAR_4 += sizeof(u16);
  VAR_8 += sizeof(u16);



  VAR_4 += sizeof(u16);
  VAR_8 += sizeof(u16);

  VAR_10 = FUNC_0(VAR_1, VAR_5, VAR_7,
        VAR_4, VAR_0);
  if (VAR_10 < 0)
   break;
  VAR_4 += VAR_7;
  VAR_8 += VAR_7;
 }

 return VAR_10;
}
