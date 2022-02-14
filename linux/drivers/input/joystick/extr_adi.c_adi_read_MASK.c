
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adi_port {TYPE_1__* adi; } ;
struct TYPE_2__ {scalar_t__ length; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct adi_port*,scalar_t__) ;
 int FUNC_2 (struct adi_port*) ;

__attribute__((used)) static int FUNC_3(struct adi_port *VAR_0)
{
 int VAR_1;
 int VAR_2 = 0;

 FUNC_2(VAR_0);
 FUNC_1(VAR_0, VAR_0->adi[0].length);

 for (VAR_1 = 0; VAR_1 < 2; VAR_1++)
  if (VAR_0->adi[VAR_1].length)
    VAR_2 |= FUNC_0(VAR_0->adi + VAR_1);

 return VAR_2;
}
