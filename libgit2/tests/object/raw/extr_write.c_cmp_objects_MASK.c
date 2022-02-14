
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; scalar_t__ len; int data; } ;
typedef TYPE_1__ git_rawobj ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(git_rawobj *VAR_0, git_rawobj *VAR_1)
{
   FUNC_0(VAR_0->type == VAR_1->type);
   FUNC_0(VAR_0->len == VAR_1->len);
   if (VAR_0->len > 0)
      FUNC_0(FUNC_1(VAR_0->data, VAR_1->data, VAR_0->len) == 0);
}
