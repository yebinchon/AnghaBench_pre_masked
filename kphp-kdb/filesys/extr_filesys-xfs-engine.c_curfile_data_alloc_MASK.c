
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int new_size; } ;
struct TYPE_4__ {int data; TYPE_1__ E; int mrk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4 (unsigned VAR_2) {
  FUNC_1 (VAR_1.mrk);
  unsigned VAR_3 = VAR_2 << 16;
  if (VAR_3 > 0x1000000) {
    VAR_1.data = VAR_0 = FUNC_2 (VAR_1.E.new_size);
    FUNC_0 (VAR_1.data);
  } else {
    VAR_1.data = FUNC_3 (VAR_3);
  }
}
