
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct cpl_tid_release {int dummy; } ;
struct c4iw_dev {int rdev; } ;


 int FUNC_0 (char*,struct c4iw_dev*,int ) ;
 int FUNC_1 (int *,int ,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_3(struct c4iw_dev *VAR_0, u32 VAR_1, struct sk_buff *VAR_2)
{
 FUNC_0("c4iw_dev %p tid %u\n", VAR_0, VAR_1);
 FUNC_2(VAR_2, sizeof(struct cpl_tid_release));
 FUNC_1(&VAR_0->rdev, VAR_1, VAR_2);
 return;
}
