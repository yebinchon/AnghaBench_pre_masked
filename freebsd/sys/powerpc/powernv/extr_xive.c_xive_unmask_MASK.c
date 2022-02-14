
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct xive_irq {scalar_t__ eoi_page; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_1, u_int VAR_2, void *VAR_3)
{
 struct xive_irq *VAR_4;

 VAR_4 = VAR_3;

 FUNC_0(VAR_4->eoi_page + VAR_0);
}
