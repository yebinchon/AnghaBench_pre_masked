
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct progress {scalar_t__ last_value; scalar_t__ total; scalar_t__ sparse; } ;


 int FUNC_0 (struct progress*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct progress *VAR_0)
{
 if (VAR_0 &&
     VAR_0->sparse &&
     VAR_0->last_value != VAR_0->total)
  FUNC_0(VAR_0, VAR_0->total);
}
