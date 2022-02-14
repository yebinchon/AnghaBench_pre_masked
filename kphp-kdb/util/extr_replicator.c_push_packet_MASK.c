
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int Out; } ;
struct TYPE_2__ {int out_packet_num; } ;


 unsigned int VAR_0 ;
 TYPE_1__* FUNC_0 (struct connection*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (struct connection*) ;
 int FUNC_4 (char*,int ,int) ;
 int* VAR_1 ;
 int FUNC_5 (int *,int*,int) ;

void FUNC_6 (struct connection *VAR_2, int VAR_3) {
  FUNC_1 ((unsigned) VAR_3 <= VAR_0);
  int VAR_4 = -VAR_3 & 3;
  char *VAR_5 = (char *) VAR_1 + 8 + VAR_3;
  FUNC_4 (VAR_5, 0, VAR_4);
  int VAR_6 = (VAR_3 + 12 + 3) >> 2;
  VAR_1[0] = VAR_6 * 4;
  VAR_1[1] = FUNC_0(VAR_2)->out_packet_num++;
  VAR_1[VAR_6 - 1] = FUNC_2 (VAR_1, VAR_6 * 4 - 4);
  FUNC_1 (FUNC_5 (&VAR_2->Out, VAR_1, VAR_6 * 4) == VAR_6 * 4);
  FUNC_3 (VAR_2);

}
