
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fritzcard {scalar_t__ addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,int *,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_3, u8 VAR_4, u8 *VAR_5, int VAR_6)
{
 struct fritzcard *VAR_7 = VAR_3;

 FUNC_0(VAR_0, VAR_7->addr + VAR_1);
 FUNC_1(VAR_7->addr + VAR_2, VAR_5, VAR_6);
}
