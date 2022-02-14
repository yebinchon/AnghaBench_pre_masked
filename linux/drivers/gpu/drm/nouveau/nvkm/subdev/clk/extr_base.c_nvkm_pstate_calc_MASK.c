
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_clk {int waiting; int wait; int work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_clk *VAR_0, bool VAR_1)
{
 FUNC_1(&VAR_0->waiting, 1);
 FUNC_2(&VAR_0->work);
 if (VAR_1)
  FUNC_3(VAR_0->wait, !FUNC_0(&VAR_0->waiting));
 return 0;
}
