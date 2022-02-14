
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct he_dev {int global_lock; } ;
struct atm_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct he_dev* FUNC_0 (struct atm_dev*) ;
 int FUNC_1 (char*,unsigned long,unsigned int) ;
 unsigned int FUNC_2 (struct he_dev*,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static unsigned char
FUNC_5(struct atm_dev *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;
 struct he_dev *VAR_4 = FUNC_0(VAR_1);
 unsigned VAR_5;

 FUNC_3(&VAR_4->global_lock, VAR_3);
 VAR_5 = FUNC_2(VAR_4, VAR_0 + (VAR_2*4));
 FUNC_4(&VAR_4->global_lock, VAR_3);

 FUNC_1("phy_get(addr 0x%lx) =0x%x\n", VAR_2, VAR_5);
 return VAR_5;
}
