
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ssize_t ;
typedef TYPE_1__* dl_t ;
typedef int dl_status ;
typedef TYPE_2__* dl_private_t ;
struct TYPE_6__ {int in; } ;
struct TYPE_5__ {TYPE_2__* private_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char const*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

dl_status FUNC_3(dl_t VAR_2, const char *VAR_3, ssize_t VAR_4) {
  dl_private_t VAR_5 = VAR_2->private_state;
  if (VAR_4 < 0) {
    return VAR_0;
  } else if (VAR_4 == 0) {
    return VAR_1;
  }
  if (FUNC_0(VAR_5->in, VAR_3, VAR_4)) {
    return VAR_0;
  }
  dl_status VAR_6 = FUNC_2(VAR_2);
  if (FUNC_1(VAR_5->in)) {
    return VAR_0;
  }
  return VAR_6;
}
