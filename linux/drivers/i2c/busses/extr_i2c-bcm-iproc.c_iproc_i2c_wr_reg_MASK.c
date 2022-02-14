
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bcm_iproc_i2c_dev {scalar_t__ base; int idm_lock; scalar_t__ idm_base; scalar_t__ ape_addr_mask; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct bcm_iproc_i2c_dev *VAR_1,
        u32 VAR_2, u32 VAR_3)
{
 if (VAR_1->idm_base) {
  FUNC_0(&VAR_1->idm_lock);
  FUNC_2(VAR_1->ape_addr_mask,
         VAR_1->idm_base + VAR_0);
  FUNC_2(VAR_3, VAR_1->base + VAR_2);
  FUNC_1(&VAR_1->idm_lock);
 } else {
  FUNC_2(VAR_3, VAR_1->base + VAR_2);
 }
}
