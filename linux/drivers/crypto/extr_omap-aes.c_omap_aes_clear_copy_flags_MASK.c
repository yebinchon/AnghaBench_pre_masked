
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_aes_dev {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct omap_aes_dev *VAR_4)
{
 VAR_4->flags &= ~(VAR_3 << VAR_1);
 VAR_4->flags &= ~(VAR_3 << VAR_2);
 VAR_4->flags &= ~(VAR_3 << VAR_0);
}
