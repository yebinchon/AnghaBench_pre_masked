
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int raw_size; int data_size; int data_crc32; scalar_t__ finished; int header_seq_num; int modified; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int ,int ,int) ;

void FUNC_5 (void) {
  int VAR_7;

  if (!VAR_0) {
    return;
  }

  VAR_0->modified = FUNC_3 (0);
  ++VAR_0->header_seq_num;
  VAR_0->finished = 0;
  VAR_0->data_crc32 = ~VAR_5;
  VAR_0->data_size += VAR_6;
  VAR_0->raw_size += VAR_6;

  FUNC_1 (VAR_0);

  FUNC_0 (FUNC_2 (VAR_4, 0, VAR_1) == 0);
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
    FUNC_0 (FUNC_4 (VAR_4, VAR_3, 4096) == 4096);
  }
}
