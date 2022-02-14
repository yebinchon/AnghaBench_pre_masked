
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct layer2 {int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct layer2*,int,int ,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

inline void
FUNC_2(struct layer2 *VAR_3)
{
 int VAR_4;

 if (FUNC_1(VAR_2, &VAR_3->flag))
  VAR_4 = VAR_0;
 else
  VAR_4 = VAR_1;
 FUNC_0(VAR_3, VAR_4, 0, ((void*)0));
}
