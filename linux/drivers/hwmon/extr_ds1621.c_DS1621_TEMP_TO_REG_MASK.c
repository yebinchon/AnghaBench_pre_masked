
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef long u16 ;


 int FUNC_0 (long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 long FUNC_1 (long,int ,int ) ;

__attribute__((used)) static inline u16 FUNC_2(long VAR_2, u8 VAR_3)
{
 VAR_2 = FUNC_1(VAR_2, VAR_1, VAR_0);
 VAR_2 = FUNC_0(VAR_2 * (1 << (8 - VAR_3)), 1000) << VAR_3;
 return VAR_2;
}
