
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_fence {int dummy; } ;
struct nouveau_channel {int fence; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nouveau_fence* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nouveau_fence*,struct nouveau_channel*) ;
 int FUNC_2 (struct nouveau_fence**) ;
 scalar_t__ FUNC_3 (int) ;

int
FUNC_4(struct nouveau_channel *VAR_3, bool VAR_4,
    struct nouveau_fence **VAR_5)
{
 struct nouveau_fence *VAR_6;
 int VAR_7 = 0;

 if (FUNC_3(!VAR_3->fence))
  return -VAR_0;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_6, VAR_3);
 if (VAR_7)
  FUNC_2(&VAR_6);

 *VAR_5 = VAR_6;
 return VAR_7;
}
