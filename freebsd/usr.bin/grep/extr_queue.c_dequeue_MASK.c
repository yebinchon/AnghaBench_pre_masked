
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qentry {int dummy; } ;


 struct qentry* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct qentry *
FUNC_2(void)
{
 struct qentry *VAR_3;

 VAR_3 = FUNC_0(&VAR_2);
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 FUNC_1(&VAR_2, VAR_1);
 --VAR_0;
 return (VAR_3);
}
