
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 unsigned char FUNC_0 (unsigned long,unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_1 (unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static inline unsigned char FUNC_2(unsigned long VAR_1, u32 VAR_2, u16 VAR_3,
      u8 VAR_4, u8 VAR_5)
{
 unsigned long VAR_6 = VAR_2 * 30 * VAR_5;
 unsigned long VAR_7 = VAR_3 * VAR_4;

 if (!VAR_1)
  return 0xff;

 VAR_1 = FUNC_1(VAR_1, VAR_6 / (255 * VAR_7), VAR_0 / VAR_7);
 return FUNC_0(VAR_6, VAR_1 * VAR_7);
}
