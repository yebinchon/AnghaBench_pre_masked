
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cl; } ;
struct closure {int dummy; } ;
struct search {TYPE_1__ iop; struct closure cl; } ;
struct cached_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *,struct closure*) ;
 int FUNC_1 (struct closure*,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct cached_dev *VAR_2, struct search *VAR_3)
{
 struct closure *VAR_4 = &VAR_3->cl;

 FUNC_0(&VAR_3->iop.cl, VAR_0, ((void*)0), VAR_4);
 FUNC_1(VAR_4, VAR_1, ((void*)0));
}
