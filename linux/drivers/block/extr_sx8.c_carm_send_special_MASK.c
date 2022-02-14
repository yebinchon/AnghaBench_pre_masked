
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct request {int tag; } ;
struct carm_request {scalar_t__ msg_bucket; int msg_subtype; int msg_type; } ;
struct carm_msg_ioctl {int subtype; int type; } ;
struct carm_host {int oob_q; } ;
typedef unsigned int (* carm_sspc_t ) (struct carm_host*,int ,void*) ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct request*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,struct request*,int,int *) ;
 struct request* FUNC_4 (int ,int ,int ) ;
 struct carm_request* FUNC_5 (struct request*) ;
 int FUNC_6 (unsigned int) ;
 void* FUNC_7 (struct carm_host*,int ) ;

__attribute__((used)) static int FUNC_8 (struct carm_host *VAR_2, carm_sspc_t VAR_3)
{
 struct request *VAR_4;
 struct carm_request *VAR_5;
 struct carm_msg_ioctl *VAR_6;
 void *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_4 = FUNC_4(VAR_2->oob_q, VAR_1, 0);
 if (FUNC_2(VAR_4))
  return -VAR_0;
 VAR_5 = FUNC_5(VAR_4);

 VAR_7 = FUNC_7(VAR_2, VAR_4->tag);

 VAR_8 = VAR_3(VAR_2, VAR_4->tag, VAR_7);

 VAR_6 = VAR_7;
 VAR_5->msg_type = VAR_6->type;
 VAR_5->msg_subtype = VAR_6->subtype;
 VAR_9 = FUNC_6(VAR_8);
 FUNC_0(VAR_9 < 0);
 VAR_5->msg_bucket = (u32) VAR_9;

 FUNC_1("blk_execute_rq_nowait, tag == %u\n", VAR_4->tag);
 FUNC_3(VAR_2->oob_q, ((void*)0), VAR_4, 1, ((void*)0));

 return 0;
}
