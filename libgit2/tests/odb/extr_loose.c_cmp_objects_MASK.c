
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dlen; int data; int type; } ;
typedef TYPE_1__ object_data ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ len; int data; } ;
typedef TYPE_2__ git_rawobj ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(git_rawobj *VAR_0, object_data *VAR_1)
{
 FUNC_0(VAR_0->type == FUNC_1(VAR_1->type));
 FUNC_0(VAR_0->len == VAR_1->dlen);

 if (VAR_0->len > 0)
  FUNC_0(FUNC_2(VAR_0->data, VAR_1->data, VAR_0->len) == 0);
}
