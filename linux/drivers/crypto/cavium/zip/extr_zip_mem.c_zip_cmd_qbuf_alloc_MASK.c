
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct zip_device {TYPE_1__* iq; } ;
struct TYPE_2__ {int * sw_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (char*,int,int *) ;

int FUNC_4(struct zip_device *VAR_4, int VAR_5)
{
 VAR_4->iq[VAR_5].sw_head = (u64 *)FUNC_0((VAR_2 | VAR_1),
      FUNC_1(VAR_3));

 if (!VAR_4->iq[VAR_5].sw_head)
  return -VAR_0;

 FUNC_2(VAR_4->iq[VAR_5].sw_head, 0, VAR_3);

 FUNC_3("cmd_qbuf_alloc[%d] Success : %p\n", VAR_5, VAR_4->iq[VAR_5].sw_head);
 return 0;
}
