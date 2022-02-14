
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swconfig_callback {scalar_t__* nest; int msg; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct swconfig_callback *VAR_0, void *VAR_1)
{
 if (VAR_0->nest[0])
  FUNC_0(VAR_0->msg, VAR_0->nest[0]);
 return 0;
}
