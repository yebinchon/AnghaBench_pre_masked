
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cmdinfo {scalar_t__ ci_calls; int ci_comm; } ;
typedef int c2 ;
typedef int c1 ;
struct TYPE_4__ {int data; } ;
typedef TYPE_1__ DBT ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct cmdinfo*,int ,int) ;

__attribute__((used)) static int
FUNC_2(const DBT *VAR_0, const DBT *VAR_1)
{
 struct cmdinfo VAR_2, VAR_3;

 FUNC_1(&VAR_2, VAR_0->data, sizeof(VAR_2));
 FUNC_1(&VAR_3, VAR_1->data, sizeof(VAR_3));

 if (VAR_2 < VAR_3)
  return -1;
 else if (VAR_2 == VAR_3)
  return (FUNC_0(VAR_2, VAR_3));
 else
  return 1;
}
