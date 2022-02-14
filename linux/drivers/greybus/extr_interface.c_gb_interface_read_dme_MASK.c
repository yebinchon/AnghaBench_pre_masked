
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_interface {int dme_read; scalar_t__ ddbl1_manufacturer_id; scalar_t__ ddbl1_product_id; int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct gb_interface*,int ,scalar_t__*) ;
 int FUNC_1 (struct gb_interface*) ;

__attribute__((used)) static int FUNC_2(struct gb_interface *VAR_6)
{
 int VAR_7;


 if (VAR_6->dme_read)
  return 0;

 VAR_7 = FUNC_0(VAR_6, VAR_0,
     &VAR_6->ddbl1_manufacturer_id);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_1,
     &VAR_6->ddbl1_product_id);
 if (VAR_7)
  return VAR_7;

 if (VAR_6->ddbl1_manufacturer_id == VAR_4 &&
     VAR_6->ddbl1_product_id == VAR_5) {
  VAR_6->quirks |= VAR_2;
  VAR_6->quirks |= VAR_3;
 }

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_6->dme_read = 1;

 return 0;
}
