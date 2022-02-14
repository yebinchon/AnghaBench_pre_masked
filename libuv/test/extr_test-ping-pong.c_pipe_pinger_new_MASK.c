
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* data; } ;
struct TYPE_5__ {TYPE_3__ pipe; } ;
struct TYPE_6__ {int vectored_writes; TYPE_1__ stream; int connect_req; scalar_t__ pongs; scalar_t__ state; } ;
typedef TYPE_2__ pinger_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,TYPE_3__*,int ,int ) ;
 int FUNC_4 (int ,TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_5(int VAR_3) {
  int VAR_4;
  pinger_t *VAR_5;

  VAR_5 = (pinger_t*)FUNC_1(sizeof(*VAR_5));
  FUNC_0(VAR_5 != ((void*)0));
  VAR_5->vectored_writes = VAR_3;
  VAR_5->state = 0;
  VAR_5->pongs = 0;


  VAR_4 = FUNC_4(FUNC_2(), &VAR_5->stream.pipe, 0);
  VAR_5->stream.pipe.data = VAR_5;
  FUNC_0(!VAR_4);



  FUNC_3(&VAR_5->connect_req, &VAR_5->stream.pipe, VAR_0,
      VAR_1);


  FUNC_0(VAR_2 == 0);
}
