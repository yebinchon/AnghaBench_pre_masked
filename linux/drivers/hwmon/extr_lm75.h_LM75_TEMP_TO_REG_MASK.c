
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (long,int ,int ) ;

__attribute__((used)) static inline u16 FUNC_1(long VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2, VAR_1, VAR_0);
 VAR_3 += (VAR_3 < 0 ? -250 : 250);
 return (u16)((VAR_3 / 500) << 7);
}
