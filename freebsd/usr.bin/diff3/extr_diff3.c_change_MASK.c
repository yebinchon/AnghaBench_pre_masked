
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct range {int to; int from; } ;


 int * VAR_0 ;
 int FUNC_0 (struct range*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int,int ,char*) ;

__attribute__((used)) static void
FUNC_3(int VAR_1, struct range *VAR_2, bool VAR_3)
{

 FUNC_1("%d:", VAR_1);
 VAR_0[VAR_1] = VAR_2->to;
 FUNC_0(VAR_2);
 if (VAR_3)
  return;
 VAR_1--;
 FUNC_2(VAR_1, VAR_2->from, ((void*)0));
 FUNC_2(VAR_1, VAR_2->to, "  ");
}
