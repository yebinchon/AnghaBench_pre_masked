
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar8xxx_priv {int initialized; } ;


 int FUNC_0 (struct ar8xxx_priv*) ;

__attribute__((used)) static int
FUNC_1(struct ar8xxx_priv *VAR_0)
{
 if (VAR_0->initialized)
  return 0;

 FUNC_0(VAR_0);

 VAR_0->initialized = 1;
 return 0;
}
