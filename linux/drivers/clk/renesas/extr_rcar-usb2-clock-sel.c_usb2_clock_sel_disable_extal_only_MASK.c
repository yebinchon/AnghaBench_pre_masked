
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb2_clock_sel_priv {scalar_t__ base; int xtal; scalar_t__ extal; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct usb2_clock_sel_priv *VAR_2)
{
 if (VAR_2->extal && !VAR_2->xtal)
  FUNC_0(VAR_0, VAR_2->base + VAR_1);
}
