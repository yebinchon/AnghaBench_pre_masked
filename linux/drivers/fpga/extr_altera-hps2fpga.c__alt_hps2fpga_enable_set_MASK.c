
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altera_hps2fpga_data {int remap_mask; int l3reg; int bridge_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct altera_hps2fpga_data *VAR_4,
        bool VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;


 if (VAR_5)
  VAR_7 = FUNC_2(VAR_4->bridge_reset);
 else
  VAR_7 = FUNC_1(VAR_4->bridge_reset);
 if (VAR_7)
  return VAR_7;


 if (VAR_4->remap_mask) {
  FUNC_3(&VAR_2, VAR_6);
  VAR_3 |= VAR_0;

  if (VAR_5)
   VAR_3 |= VAR_4->remap_mask;
  else
   VAR_3 &= ~VAR_4->remap_mask;

  VAR_7 = FUNC_0(VAR_4->l3reg, VAR_1,
       VAR_3);
  FUNC_4(&VAR_2, VAR_6);
 }

 return VAR_7;
}
