
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct usnic_fwd_dev {int lock; } ;
typedef enum vnic_devcmd_cmd { ____Placeholder_vnic_devcmd_cmd } vnic_devcmd_cmd ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usnic_fwd_dev*,int,int,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct usnic_fwd_dev *VAR_0, int VAR_1,
    enum vnic_devcmd_cmd VAR_2, u64 *VAR_3, u64 *VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_0->lock);
 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_1(&VAR_0->lock);

 return VAR_5;
}
