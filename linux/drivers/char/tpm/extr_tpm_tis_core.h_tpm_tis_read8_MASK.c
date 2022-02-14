
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tpm_tis_data {TYPE_1__* phy_ops; } ;
struct TYPE_2__ {int (* read_bytes ) (struct tpm_tis_data*,int ,int,int *) ;} ;


 int FUNC_0 (struct tpm_tis_data*,int ,int,int *) ;

__attribute__((used)) static inline int FUNC_1(struct tpm_tis_data *VAR_0, u32 VAR_1, u8 *VAR_2)
{
 return VAR_0->phy_ops->read_bytes(VAR_0, VAR_1, 1, VAR_2);
}
