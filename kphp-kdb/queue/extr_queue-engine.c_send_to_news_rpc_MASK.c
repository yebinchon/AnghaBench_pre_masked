
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int Out; } ;
struct TYPE_4__ {int out_packet_num; } ;
struct TYPE_3__ {int (* flush_packet ) (struct connection*) ;} ;


 int * VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct connection*) ;
 TYPE_1__* FUNC_1 (struct connection*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (int) ;
 struct connection* FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct connection*) ;
 int FUNC_8 (int *,int*,int) ;

int FUNC_9 (int VAR_5, int *VAR_6) {


  VAR_5 = FUNC_5 (VAR_5) % VAR_1;
  struct connection *VAR_7 = FUNC_6 (VAR_0[VAR_5]);



  if (VAR_7 == ((void*)0)) {
    FUNC_2 (VAR_2);
    return 0;
  }
  FUNC_2 (VAR_3);

  int VAR_8 = VAR_6[0];
  FUNC_3 (VAR_8 >= 4);
  VAR_6[0] *= sizeof (int);
  VAR_6[1] = FUNC_0(VAR_7)->out_packet_num++;
  VAR_6[VAR_8 - 1] = FUNC_4 (VAR_6, VAR_6[0] - sizeof (int));

  FUNC_3 (FUNC_8 (&VAR_7->Out, VAR_6, VAR_6[0]) == VAR_6[0]);

  VAR_4 += VAR_6[0];


  FUNC_1(VAR_7)->flush_packet(VAR_7);
  return 0;
}
