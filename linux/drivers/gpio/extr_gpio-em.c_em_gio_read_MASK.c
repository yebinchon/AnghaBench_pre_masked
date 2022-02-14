
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em_gio_priv {int base0; int base1; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct em_gio_priv *VAR_1, int VAR_2)
{
 if (VAR_2 < VAR_0)
  return FUNC_0(VAR_1->base0 + VAR_2);
 else
  return FUNC_0(VAR_1->base1 + (VAR_2 - VAR_0));
}
