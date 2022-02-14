
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_if {int bif_name; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct bridge_if*) ;

__attribute__((used)) static int
FUNC_2(struct bridge_if *VAR_0)
{
 if (FUNC_0(VAR_0->bif_name) < 0)
  return (-1);

 FUNC_1(VAR_0);

 return (0);
}
