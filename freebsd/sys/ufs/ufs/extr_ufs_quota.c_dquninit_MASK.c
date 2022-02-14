
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dquot {int dq_lock; } ;


 int VAR_0 ;
 struct dquot* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct dquot*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct dquot*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;

void
FUNC_5(void)
{
 struct dquot *VAR_6;

 FUNC_3(VAR_4, VAR_0, VAR_3);
 while ((VAR_6 = FUNC_0(&VAR_2)) != ((void*)0)) {
  FUNC_1(&VAR_2, VAR_6, VAR_1);
  FUNC_4(&VAR_6->dq_lock);
  FUNC_2(VAR_6, VAR_0);
 }
 FUNC_4(&VAR_5);
}
