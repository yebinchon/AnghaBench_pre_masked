
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
typedef int __le32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (char*,unsigned int,int ,int ) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static inline void FUNC_2(u8 *VAR_6, unsigned int VAR_7,
        unsigned int VAR_8)
{
 u32 VAR_9;
 unsigned int VAR_10 = VAR_4 >> 2;
 __le32 *VAR_11 = (__le32 *) VAR_6;


 VAR_9 = VAR_1 + VAR_2 +
        (VAR_3 * VAR_7);

 VAR_11[VAR_10] = FUNC_1(VAR_9);
 VAR_11[VAR_10 + 1] = FUNC_1(VAR_8 | VAR_0);

 FUNC_0("HOST PSG @ %x == (0x%x, 0x%x)\n",
  VAR_1 +
         (VAR_5 * VAR_7) +
         VAR_4,
  VAR_11[VAR_10], VAR_11[VAR_10 + 1]);
}
