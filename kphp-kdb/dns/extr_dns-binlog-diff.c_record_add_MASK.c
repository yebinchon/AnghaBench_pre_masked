
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data_len; int data; } ;
typedef TYPE_1__ record_t ;


 int VAR_0 ;
 void* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*,int ,int) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6 (record_t *VAR_1) {
  FUNC_5 ();
  FUNC_1 (VAR_1->data_len >= 4);
  void *VAR_2 = FUNC_0 (0, VAR_1->data_len, 0);
  FUNC_4 (VAR_2, VAR_1->data, VAR_1->data_len);
  if (FUNC_2 () > (1 << 23)) {
    FUNC_3 (0);
  }
  VAR_0++;
}
