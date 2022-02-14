
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long FUNC_0 (int,int) ;
 long FUNC_1 (long,int,int) ;

__attribute__((used)) static inline int FUNC_2(int VAR_0, long VAR_1, int VAR_2, int VAR_3)
{
 VAR_1 = FUNC_1(VAR_1, VAR_0 - 15000, VAR_0);
 VAR_1 = FUNC_0(VAR_0 - VAR_1, 1000);

 return (VAR_2 == 1) ? (VAR_3 & 0xf0) | VAR_1 : (VAR_3 & 0x0f) | (VAR_1 << 4);
}
