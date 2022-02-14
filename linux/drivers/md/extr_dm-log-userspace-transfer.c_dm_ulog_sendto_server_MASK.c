
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_ulog_request {scalar_t__ data_size; int seq; } ;
struct TYPE_3__ {int val; int idx; } ;
struct cn_msg {scalar_t__ len; int seq; scalar_t__ ack; TYPE_1__ id; } ;
struct TYPE_4__ {int val; int idx; } ;


 int FUNC_0 (struct cn_msg*,int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct cn_msg*,int ,int) ;
 struct cn_msg* VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_3(struct dm_ulog_request *VAR_2)
{
 int VAR_3;
 struct cn_msg *VAR_4 = VAR_0;

 FUNC_2(VAR_4, 0, sizeof(struct cn_msg));

 VAR_4->id.idx = VAR_1.idx;
 VAR_4->id.val = VAR_1.val;
 VAR_4->ack = 0;
 VAR_4->seq = VAR_2->seq;
 VAR_4->len = sizeof(struct dm_ulog_request) + VAR_2->data_size;

 VAR_3 = FUNC_0(VAR_4, 0, 0, FUNC_1());

 return VAR_3;
}
