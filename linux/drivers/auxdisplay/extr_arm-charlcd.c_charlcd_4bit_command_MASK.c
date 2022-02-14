
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct charlcd {scalar_t__ virtbase; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct charlcd*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct charlcd *VAR_1, u8 VAR_2)
{
 u32 VAR_3 = (VAR_2 << 4) & 0xf0;
 u32 VAR_4 = (VAR_2 & 0xf0);

 FUNC_2(VAR_4, VAR_1->virtbase + VAR_0);
 FUNC_1(10);
 FUNC_2(VAR_3, VAR_1->virtbase + VAR_0);
 FUNC_0(VAR_1);
}
