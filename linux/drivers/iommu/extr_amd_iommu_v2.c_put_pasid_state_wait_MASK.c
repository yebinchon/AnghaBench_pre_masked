
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasid_state {int count; int wq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pasid_state*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct pasid_state *VAR_0)
{
 FUNC_0(&VAR_0->count);
 FUNC_3(VAR_0->wq, !FUNC_1(&VAR_0->count));
 FUNC_2(VAR_0);
}
