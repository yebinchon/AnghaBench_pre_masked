
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int ;
struct sk_buff {int dummy; } ;
struct mISDNhead {void* id; void* prim; } ;
struct layer2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct layer2*,struct sk_buff*) ;
 struct mISDNhead* FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int,int ) ;
 int FUNC_4 (struct sk_buff*,void*,int) ;

__attribute__((used)) static int
FUNC_5(struct layer2 *VAR_2, u_int VAR_3, u_int VAR_4, int VAR_5, void *VAR_6)
{
 struct sk_buff *VAR_7;
 int VAR_8;
 struct mISDNhead *VAR_9;

 VAR_7 = FUNC_3(VAR_5, VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_9 = FUNC_2(VAR_7);
 VAR_9->prim = VAR_3;
 VAR_9->id = VAR_4;
 if (VAR_5)
  FUNC_4(VAR_7, VAR_6, VAR_5);
 VAR_8 = FUNC_1(VAR_2, VAR_7);
 if (VAR_8)
  FUNC_0(VAR_7);
 return VAR_8;
}
