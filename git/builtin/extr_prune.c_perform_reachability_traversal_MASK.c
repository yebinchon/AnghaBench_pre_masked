
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int dummy; } ;
struct progress {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct rev_info*,int,int ,struct progress*) ;
 scalar_t__ VAR_1 ;
 struct progress* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct progress**) ;

__attribute__((used)) static void FUNC_4(struct rev_info *VAR_2)
{
 static int VAR_3;
 struct progress *VAR_4 = ((void*)0);

 if (VAR_3)
  return;

 if (VAR_1)
  VAR_4 = FUNC_2(FUNC_0("Checking connectivity"), 0);
 FUNC_1(VAR_2, 1, VAR_0, VAR_4);
 FUNC_3(&VAR_4);
 VAR_3 = 1;
}
