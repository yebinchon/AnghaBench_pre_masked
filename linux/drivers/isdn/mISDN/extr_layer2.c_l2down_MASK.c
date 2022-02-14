
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int ;
struct sk_buff {int dummy; } ;
struct mISDNhead {void* id; void* prim; } ;
struct layer2 {int dummy; } ;


 int FUNC_0 (struct layer2*,struct sk_buff*) ;
 struct mISDNhead* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_2(struct layer2 *VAR_0, u_int VAR_1, u_int VAR_2, struct sk_buff *VAR_3)
{
 struct mISDNhead *VAR_4 = FUNC_1(VAR_3);

 VAR_4->prim = VAR_1;
 VAR_4->id = VAR_2;
 return FUNC_0(VAR_0, VAR_3);
}
