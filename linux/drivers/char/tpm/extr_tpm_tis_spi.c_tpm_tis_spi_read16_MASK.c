
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct tpm_tis_data {TYPE_1__* phy_ops; } ;
typedef int __le16 ;
struct TYPE_2__ {int (* read_bytes ) (struct tpm_tis_data*,int ,int,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tpm_tis_data*,int ,int,int *) ;

__attribute__((used)) static int FUNC_2(struct tpm_tis_data *VAR_0, u32 VAR_1, u16 *VAR_2)
{
 __le16 VAR_3;
 int VAR_4;

 VAR_4 = VAR_0->phy_ops->read_bytes(VAR_0, VAR_1, sizeof(u16),
           (u8 *)&VAR_3);
 if (!VAR_4)
  *VAR_2 = FUNC_0(VAR_3);

 return VAR_4;
}
