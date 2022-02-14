
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ead_msg_number {int data; } ;
struct TYPE_6__ {void* len; void* type; } ;
struct TYPE_5__ {scalar_t__ len; int data; } ;


 TYPE_1__* VAR_0 ;
 struct ead_msg_number* FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int) ;
 TYPE_1__* FUNC_4 (int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_5(void)
{
 struct ead_msg_number *VAR_7 = FUNC_0(VAR_4, VAR_5);
 VAR_0 = FUNC_4(VAR_6);
 VAR_4->type = FUNC_1(VAR_1);
 VAR_4->len = FUNC_1(sizeof(struct ead_msg_number) + VAR_0->len);
 FUNC_2(VAR_7->data, VAR_0->data, VAR_0->len);
 return FUNC_3(VAR_2, VAR_3, 1);
}
