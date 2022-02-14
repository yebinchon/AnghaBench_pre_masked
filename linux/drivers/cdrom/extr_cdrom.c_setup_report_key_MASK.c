
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_command {unsigned int* cmd; int buflen; int data_direction; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct packet_command *VAR_2, unsigned VAR_3, unsigned VAR_4)
{
 VAR_2->cmd[0] = VAR_1;
 VAR_2->cmd[10] = VAR_4 | (VAR_3 << 6);
 switch (VAR_4) {
  case 0: case 8: case 5: {
   VAR_2->buflen = 8;
   break;
  }
  case 1: {
   VAR_2->buflen = 16;
   break;
  }
  case 2: case 4: {
   VAR_2->buflen = 12;
   break;
  }
 }
 VAR_2->cmd[9] = VAR_2->buflen;
 VAR_2->data_direction = VAR_0;
}
