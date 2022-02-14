
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int timestamp; } ;
typedef TYPE_1__ hash_entry_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 int VAR_3 ;

void FUNC_5 (hash_entry_t *VAR_4) {
  if (VAR_3 >= 4) {
    FUNC_1 (VAR_0, "add_entry (%p)\n", VAR_4);
  }
  FUNC_0 (VAR_4);



  VAR_4->timestamp = FUNC_2 ();
  VAR_2 = FUNC_4 (VAR_2, VAR_4, FUNC_3 ());
  VAR_1++;
}
