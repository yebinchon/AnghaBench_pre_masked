
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ window; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0( void ) {
 int VAR_4, VAR_5;
 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_0[VAR_4].window.flags & (VAR_1 | VAR_2)) {
   VAR_5++;
  }
 }
 return VAR_5;
}
