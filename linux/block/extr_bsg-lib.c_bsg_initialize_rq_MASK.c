
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct bsg_job {struct bsg_job* dd_data; int reply_len; void* reply; } ;


 int VAR_0 ;
 struct bsg_job* FUNC_0 (struct request*) ;
 int FUNC_1 (struct bsg_job*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct request *VAR_1)
{
 struct bsg_job *VAR_2 = FUNC_0(VAR_1);
 void *VAR_3 = VAR_2->reply;

 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->reply = VAR_3;
 VAR_2->reply_len = VAR_0;
 VAR_2->dd_data = VAR_2 + 1;
}
