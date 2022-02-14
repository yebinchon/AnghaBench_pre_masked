
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct xive_irq {int flags; scalar_t__ eoi_page; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_3, u_int VAR_4, void *VAR_5)
{
 struct xive_irq *VAR_6;


 if (VAR_4 == VAR_0)
  return;

 VAR_6 = VAR_5;

 if (!(VAR_6->flags & VAR_1))
  return;
 FUNC_0(VAR_6->eoi_page + VAR_2);
}
