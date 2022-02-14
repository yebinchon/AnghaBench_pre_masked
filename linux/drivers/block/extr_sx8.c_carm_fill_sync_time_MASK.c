
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct carm_msg_sync_time {void* timestamp; void* handle; int subtype; int type; } ;
struct carm_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct carm_msg_sync_time*,int ,int) ;

__attribute__((used)) static unsigned int FUNC_4(struct carm_host *VAR_2,
     unsigned int VAR_3, void *VAR_4)
{
 struct carm_msg_sync_time *VAR_5 = VAR_4;

 time64_t VAR_6 = FUNC_2();

 FUNC_3(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->type = VAR_0;
 VAR_5->subtype = VAR_1;
 VAR_5->handle = FUNC_1(FUNC_0(VAR_3));
 VAR_5->timestamp = FUNC_1(VAR_6);

 return sizeof(struct carm_msg_sync_time);
}
