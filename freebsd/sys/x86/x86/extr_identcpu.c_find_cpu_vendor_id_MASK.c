
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {int vendor_id; int vendor; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static u_int
FUNC_2(void)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
  if (FUNC_1(VAR_0, VAR_1[VAR_2].vendor) == 0)
   return (VAR_1[VAR_2].vendor_id);
 return (0);
}
