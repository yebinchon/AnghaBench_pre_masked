
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_2__ {scalar_t__ ocd_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{

 if (FUNC_1(VAR_2, VAR_1)->ocd_data == 0)
  return (VAR_0);

 FUNC_0(VAR_2, "Freescale QorIQ GPIO driver");

 return (0);
}
