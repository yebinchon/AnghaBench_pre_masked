
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {scalar_t__ trig_page; } ;
struct xive_cpu {TYPE_1__ ipi_data; } ;
typedef int device_t ;


 struct xive_cpu* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_1, u_int VAR_2)
{
 struct xive_cpu *VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);

 if (VAR_3->ipi_data.trig_page == 0)
  return;
 FUNC_1(VAR_3->ipi_data.trig_page, 0);
}
