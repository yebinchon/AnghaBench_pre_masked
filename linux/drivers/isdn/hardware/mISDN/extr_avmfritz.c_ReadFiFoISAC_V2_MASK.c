
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fritzcard {scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2, u8 VAR_3, u8 *VAR_4, int VAR_5)
{
 struct fritzcard *VAR_6 = VAR_2;
 int VAR_7;

 FUNC_1(VAR_3, VAR_6->addr + VAR_1);
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  VAR_4[VAR_7] = 0xff & FUNC_0(VAR_6->addr + VAR_0);
}
