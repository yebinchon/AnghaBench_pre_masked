
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xadc {scalar_t__ external_mux_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct xadc *VAR_3, unsigned long VAR_4)
{
 unsigned int VAR_5 = VAR_4 >> 16;

 if (VAR_3->external_mux_mode == VAR_2)
  return VAR_1;

 if ((VAR_5 & 0xff00) == 0 ||
  (VAR_5 & 0x00ff) == 0)
  return VAR_0;

 return VAR_1;
}
