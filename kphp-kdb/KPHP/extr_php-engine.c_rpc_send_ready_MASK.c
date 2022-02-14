
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {scalar_t__ our_port; scalar_t__ our_ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct connection*,int ,int,int*,int) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_1 (struct connection *VAR_5) {
  int VAR_6[100], VAR_7 = 0;
  VAR_7 += 2;
  VAR_6[VAR_7++] = -1;
  VAR_6[VAR_7++] = (int)VAR_5->our_ip;
  VAR_6[VAR_7++] = (int)VAR_5->our_port;
  VAR_6[VAR_7++] = VAR_1;
  VAR_6[VAR_7++] = VAR_3;
  VAR_6[VAR_7++] = VAR_4;
  VAR_6[VAR_7++] = VAR_2++;
  VAR_7++;
  FUNC_0 (VAR_5, VAR_0, -1, VAR_6, VAR_7 * 4);
}
