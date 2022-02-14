
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct gb_interface {scalar_t__ ddbl1_manufacturer_id; int vendor_id; int product_id; int serial_number; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (struct gb_interface*,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct gb_interface *VAR_6)
{
 u32 VAR_7, VAR_8;
 int VAR_9;





 if (VAR_6->ddbl1_manufacturer_id != VAR_5) {
  FUNC_0(&VAR_6->dev, "unknown manufacturer %08x\n",
   VAR_6->ddbl1_manufacturer_id);
  return -VAR_4;
 }

 VAR_9 = FUNC_1(VAR_6, VAR_3,
     &VAR_6->vendor_id);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_6, VAR_0,
     &VAR_6->product_id);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_6, VAR_1, &VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_6, VAR_2, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_6->serial_number = (u64)VAR_8 << 32 | VAR_7;

 return 0;
}
