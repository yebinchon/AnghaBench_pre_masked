
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct TYPE_4__ {int data; } ;
typedef TYPE_1__ DBT ;


 int FUNC_0 (int ,scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_1(const DBT *VAR_0, const DBT *VAR_1)
{
 uid_t VAR_2, VAR_3;

 FUNC_0(VAR_0->data, &VAR_2, sizeof VAR_2);
 FUNC_0(VAR_1->data, &VAR_3, sizeof VAR_3);

 if (VAR_2 < VAR_3)
  return -1;
 else if (VAR_2 == VAR_3)
  return 0;
 else
  return 1;
}
