
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sm_sendq {int dummy; } ;
typedef TYPE_1__* sm_sendq_t ;
struct TYPE_4__ {int recv_fd; char* begin; char* head; char* tail; void* value; } ;


 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

sm_sendq_t FUNC_3(int VAR_0, void *VAR_1, const char *VAR_2,
    size_t VAR_3) {
  sm_sendq_t VAR_4 = (sm_sendq_t)FUNC_0(sizeof(struct sm_sendq));
  FUNC_2(VAR_4, 0, sizeof(struct sm_sendq));
  VAR_4->recv_fd = VAR_0;
  VAR_4->value = VAR_1;
  VAR_4->begin = (char *)FUNC_0(VAR_3);
  FUNC_1(VAR_4->begin, VAR_2, VAR_3);
  VAR_4->head = VAR_4->begin;
  VAR_4->tail = VAR_4->begin + VAR_3;
  return VAR_4;
}
