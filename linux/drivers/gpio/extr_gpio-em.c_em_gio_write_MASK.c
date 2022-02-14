
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em_gio_priv {int base0; int base1; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int) ;

__attribute__((used)) static inline void FUNC_1(struct em_gio_priv *VAR_1, int VAR_2,
    unsigned long VAR_3)
{
 if (VAR_2 < VAR_0)
  FUNC_0(VAR_3, VAR_1->base0 + VAR_2);
 else
  FUNC_0(VAR_3, VAR_1->base1 + (VAR_2 - VAR_0));
}
