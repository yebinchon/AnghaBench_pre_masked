
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dh_ctx {int p; scalar_t__ q; } ;
typedef int MPI ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct dh_ctx *VAR_2, MPI VAR_3)
{
 if (FUNC_5(!VAR_2->p))
  return -VAR_0;







 if (FUNC_2(VAR_3, 1) < 1 || FUNC_1(VAR_3, VAR_2->p) >= 0)
  return -VAR_0;


 if (VAR_2->q) {
  MPI VAR_4 = FUNC_0(0);
  int VAR_5;

  if (!VAR_4)
   return -VAR_1;

  VAR_5 = FUNC_4(VAR_4, VAR_3, VAR_2->q, VAR_2->p);

  if (VAR_5) {
   FUNC_3(VAR_4);
   return VAR_5;
  }

  VAR_5 = FUNC_2(VAR_4, 1);

  FUNC_3(VAR_4);

  if (VAR_5 != 0)
   return -VAR_0;
 }

 return 0;
}
