
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__* prga; int len; } ;
struct TYPE_7__ {scalar_t__* i_addr3; int i_seq; } ;
struct TYPE_9__ {TYPE_1__ wh; scalar_t__ data; scalar_t__ ptr; scalar_t__ waiting_relay; } ;
struct TYPE_11__ {TYPE_4__ prgainfo; TYPE_3__ fragstate; } ;
struct TYPE_8__ {int psent; } ;


 int VAR_0 ;
 TYPE_6__ VAR_1 ;
 int FUNC_0 (int) ;
 unsigned short FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,TYPE_3__*,TYPE_4__*) ;
 TYPE_2__ VAR_2 ;

void FUNC_6(int VAR_3) {


 if (!VAR_1.fragstate.data) {
  FUNC_3(&VAR_1.fragstate, 0);

  FUNC_2(VAR_1.fragstate.wh.i_addr3,
         VAR_0, 5);

  VAR_1.fragstate.wh.i_addr3[5] =
  VAR_1.prgainfo.prga[VAR_1.prgainfo.len-1];

  VAR_1.prgainfo.len++;
 }


 if (VAR_1.fragstate.waiting_relay) {
  unsigned short* VAR_4;
  VAR_1.prgainfo.prga[VAR_1.prgainfo.len-1]++;







  VAR_1.fragstate.wh.i_addr3[5] =
  VAR_1.prgainfo.prga[VAR_1.prgainfo.len-1];

  VAR_1.fragstate.waiting_relay = 0;
  VAR_1.fragstate.ptr = VAR_1.fragstate.data;

  VAR_4 = (unsigned short*) &VAR_1.fragstate.wh.i_seq;
  *VAR_4 = FUNC_1(0, VAR_2.psent);
 }

 FUNC_5(VAR_3, &VAR_1.fragstate,
        &VAR_1.prgainfo);
}
