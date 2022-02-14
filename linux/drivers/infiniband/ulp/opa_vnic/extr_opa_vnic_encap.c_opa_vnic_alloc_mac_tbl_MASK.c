
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 struct hlist_head* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct hlist_head* FUNC_1 (int,int ) ;
 int FUNC_2 (struct hlist_head*) ;

__attribute__((used)) static struct hlist_head *FUNC_3(void)
{
 u32 VAR_3 = sizeof(struct hlist_head) * VAR_2;
 struct hlist_head *VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 FUNC_2(VAR_4);
 return VAR_4;
}
