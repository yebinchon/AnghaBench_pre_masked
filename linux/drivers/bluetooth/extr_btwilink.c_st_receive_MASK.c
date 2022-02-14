
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ti_st {TYPE_2__* hdev; } ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_3__ {int byte_rx; } ;
struct TYPE_4__ {TYPE_1__ stat; } ;


 int FUNC_0 (char*,int) ;
 long VAR_0 ;
 int FUNC_1 (TYPE_2__*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static long FUNC_3(void *VAR_1, struct sk_buff *VAR_2)
{
 struct ti_st *VAR_3 = VAR_1;
 int VAR_4;

 if (!VAR_2)
  return -VAR_0;

 if (!VAR_3) {
  FUNC_2(VAR_2);
  return -VAR_0;
 }


 VAR_4 = FUNC_1(VAR_3->hdev, VAR_2);
 if (VAR_4 < 0) {
  FUNC_0("Unable to push skb to HCI core(%d)", VAR_4);
  return VAR_4;
 }

 VAR_3->hdev->stat.byte_rx += VAR_2->len;

 return 0;
}
