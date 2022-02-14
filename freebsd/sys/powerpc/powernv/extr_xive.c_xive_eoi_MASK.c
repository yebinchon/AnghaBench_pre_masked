
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ u_int ;
struct xive_irq {int flags; scalar_t__ eoi_page; scalar_t__ trig_page; } ;
struct xive_cpu {struct xive_irq ipi_data; } ;
typedef int device_t ;


 struct xive_cpu* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_9 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_10, u_int VAR_11, void *VAR_12)
{
 struct xive_irq *VAR_13;
 struct xive_cpu *VAR_14;
 uint8_t VAR_15;

 if (VAR_11 == VAR_0) {
  VAR_14 = FUNC_0(VAR_9);
  VAR_13 = &VAR_14->ipi_data;
 } else
  VAR_13 = VAR_12;

 if (VAR_13->flags & VAR_2)
  FUNC_1(VAR_1, VAR_11);
 else if (VAR_13->flags & VAR_4)
  FUNC_3(VAR_13->eoi_page + VAR_7, 0);
 else if (VAR_13->flags & VAR_3)
  FUNC_2(VAR_13->eoi_page + VAR_5);
 else {
  VAR_15 = FUNC_2(VAR_13->eoi_page + VAR_6);
  if ((VAR_15 & VAR_8) && VAR_13->trig_page != 0)
   FUNC_3(VAR_13->trig_page, 0);
 }
}
