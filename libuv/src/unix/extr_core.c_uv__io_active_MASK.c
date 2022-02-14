
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int pevents; } ;
typedef TYPE_1__ uv__io_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int) ;

int FUNC_1(const uv__io_t* VAR_4, unsigned int VAR_5) {
  FUNC_0(0 == (VAR_5 & ~(VAR_0 | VAR_1 | VAR_3 | VAR_2)));
  FUNC_0(0 != VAR_5);
  return 0 != (VAR_4->pevents & VAR_5);
}
