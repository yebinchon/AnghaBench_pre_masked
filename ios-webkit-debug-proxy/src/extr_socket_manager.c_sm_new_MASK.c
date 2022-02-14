
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sm_struct {int dummy; } ;
typedef TYPE_1__* sm_t ;
typedef scalar_t__ sm_private_t ;
struct TYPE_4__ {scalar_t__ private_state; int cleanup; int select; int send; int remove_fd; int add_fd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

sm_t FUNC_4(size_t VAR_5) {
  sm_private_t VAR_6 = FUNC_3(VAR_5);
  if (!VAR_6) {
    return ((void*)0);
  }
  sm_t VAR_7 = (sm_t)FUNC_0(sizeof(struct sm_struct));
  if (!VAR_7) {
    FUNC_2(VAR_6);
    return ((void*)0);
  }
  FUNC_1(VAR_7, 0, sizeof(struct sm_struct));
  VAR_7->add_fd = VAR_0;
  VAR_7->remove_fd = VAR_2;
  VAR_7->send = VAR_4;
  VAR_7->select = VAR_3;
  VAR_7->cleanup = VAR_1;
  VAR_7->private_state = VAR_6;
  return VAR_7;
}
