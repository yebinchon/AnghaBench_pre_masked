
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int last_block; int last_block_len; } ;
typedef TYPE_1__ tftp_connection_t ;


 int* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2 (tftp_connection_t *VAR_3, int VAR_4) {

  int VAR_5 = FUNC_0 (VAR_3, VAR_4, VAR_0 + 4);
  if (VAR_5 < 0) {
    return FUNC_1 (VAR_2, "IO error: Read failed");
  }
  VAR_0[0] = (VAR_1 >> 8) & 0xff;
  VAR_0[1] = VAR_1 & 0xff;
  VAR_0[2] = (VAR_4 >> 8) & 0xff;
  VAR_0[3] = VAR_4 & 0xff;
  VAR_3->last_block = VAR_4;
  VAR_3->last_block_len = VAR_5;
  return VAR_5 + 4;
}
