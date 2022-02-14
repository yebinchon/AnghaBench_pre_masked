
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct he_dev {int global_lock; } ;
struct atm_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct he_dev* FUNC_0 (struct atm_dev*) ;
 int FUNC_1 (char*,unsigned char,unsigned long) ;
 int FUNC_2 (struct he_dev*,scalar_t__) ;
 int FUNC_3 (struct he_dev*,unsigned char,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_6(struct atm_dev *VAR_1, unsigned char VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;
 struct he_dev *VAR_5 = FUNC_0(VAR_1);

 FUNC_1("phy_put(val 0x%x, addr 0x%lx)\n", VAR_2, VAR_3);

 FUNC_4(&VAR_5->global_lock, VAR_4);
 FUNC_3(VAR_5, VAR_2, VAR_0 + (VAR_3*4));
 (void) FUNC_2(VAR_5, VAR_0 + (VAR_3*4));
 FUNC_5(&VAR_5->global_lock, VAR_4);
}
