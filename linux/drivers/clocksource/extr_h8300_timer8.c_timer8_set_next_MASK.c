
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer8_priv {scalar_t__ mapbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct timer8_priv *VAR_6, unsigned long VAR_7)
{
 if (VAR_7 >= 0x10000)
  FUNC_3("delta out of range\n");
 FUNC_0(VAR_1, VAR_6->mapbase + VAR_4);
 FUNC_2(VAR_7, VAR_6->mapbase + VAR_2);
 FUNC_2(0x0000, VAR_6->mapbase + VAR_3);
 FUNC_0(VAR_0, VAR_6->mapbase + VAR_5);
 FUNC_1(VAR_1, VAR_6->mapbase + VAR_4);
}
