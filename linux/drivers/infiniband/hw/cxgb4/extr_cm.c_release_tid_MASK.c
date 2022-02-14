
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct cpl_tid_release {int dummy; } ;
struct c4iw_rdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct c4iw_rdev*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int ) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct c4iw_rdev *VAR_1, u32 VAR_2, struct sk_buff *VAR_3)
{
 u32 VAR_4 = FUNC_3(sizeof(struct cpl_tid_release), 16);

 VAR_3 = FUNC_2(VAR_3, VAR_4, VAR_0);
 if (!VAR_3)
  return;

 FUNC_1(VAR_3, VAR_4, VAR_2, 0);
 FUNC_0(VAR_1, VAR_3);
 return;
}
