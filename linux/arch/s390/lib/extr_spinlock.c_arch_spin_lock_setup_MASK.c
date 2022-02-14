
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spin_wait {int node_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spin_wait*,int ,int) ;
 struct spin_wait* FUNC_1 (int *,int) ;
 int * VAR_2 ;

void FUNC_2(int VAR_3)
{
 struct spin_wait *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(&VAR_2[0], VAR_3);
 for (VAR_5 = 0; VAR_5 < 4; VAR_5++, VAR_4++) {
  FUNC_0(VAR_4, 0, sizeof(*VAR_4));
  VAR_4->node_id = ((VAR_3 + 1) << VAR_0) +
   (VAR_5 << VAR_1);
 }
}
