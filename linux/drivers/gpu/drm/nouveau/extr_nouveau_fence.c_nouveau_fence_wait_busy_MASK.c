
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_fence {int timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct nouveau_fence*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_fence *VAR_7, bool VAR_8)
{
 int VAR_9 = 0;

 while (!FUNC_1(VAR_7)) {
  if (FUNC_3(VAR_6, VAR_7->timeout)) {
   VAR_9 = -VAR_0;
   break;
  }

  FUNC_0(VAR_8 ?
        VAR_2 :
        VAR_4);

  if (VAR_8 && FUNC_2(VAR_5)) {
   VAR_9 = -VAR_1;
   break;
  }
 }

 FUNC_0(VAR_3);
 return VAR_9;
}
