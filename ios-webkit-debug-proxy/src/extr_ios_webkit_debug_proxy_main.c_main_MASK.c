
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* sm_t ;
typedef TYPE_2__* iwdpm_t ;
typedef TYPE_3__* iwdp_t ;
typedef int WSADATA ;
struct TYPE_13__ {scalar_t__ (* start ) (TYPE_3__*) ;} ;
struct TYPE_12__ {TYPE_1__* sm; TYPE_3__* iwdp; } ;
struct TYPE_11__ {scalar_t__ (* select ) (TYPE_1__*,int) ;int (* cleanup ) (TYPE_1__*) ;} ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (TYPE_2__*,int,char**) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*) ;

int FUNC_13(int VAR_5, char** VAR_6) {
  FUNC_9(VAR_0, VAR_2);
  FUNC_9(VAR_1, VAR_2);
  iwdpm_t VAR_7 = FUNC_8();
  int VAR_8 = FUNC_5(VAR_7, VAR_5, VAR_6);
  if (VAR_8) {
    FUNC_3(VAR_8 > 0 ? VAR_8 : 0);
    return VAR_8;
  }

  FUNC_6(VAR_7);

  iwdp_t VAR_9 = VAR_7->iwdp;
  if (VAR_9->start(VAR_9)) {
    return -1;
  }

  sm_t VAR_10 = VAR_7->sm;
  while (!VAR_3) {
    if (VAR_10->select(VAR_10, 2) < 0) {
      VAR_8 = -1;
      break;
    }
  }
  VAR_10->cleanup(VAR_10);
  FUNC_7(VAR_7);



  return VAR_8;
}
