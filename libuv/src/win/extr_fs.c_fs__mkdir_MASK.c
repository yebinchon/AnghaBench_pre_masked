
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pathw; } ;
struct TYPE_5__ {int result; scalar_t__ sys_errno_; TYPE_1__ file; } ;
typedef TYPE_2__ uv_fs_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(uv_fs_t* VAR_3) {

  VAR_3->result = FUNC_0(VAR_3->file.pathw);
  if (VAR_3->result == -1) {
    VAR_3->sys_errno_ = VAR_2;
    VAR_3->result = VAR_3->sys_errno_ == VAR_0
                ? VAR_1
                : FUNC_1(VAR_3->sys_errno_);
  }
}
