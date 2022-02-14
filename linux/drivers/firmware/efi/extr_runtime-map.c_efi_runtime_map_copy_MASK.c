
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int map; } ;
struct TYPE_4__ {TYPE_1__ memmap; } ;


 TYPE_2__ VAR_0 ;
 size_t FUNC_0 () ;
 int FUNC_1 (void*,int ,size_t) ;

int FUNC_2(void *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = FUNC_0();

 if (VAR_3 > VAR_2)
  VAR_3 = VAR_2;

 FUNC_1(VAR_1, VAR_0.memmap.map, VAR_3);
 return 0;
}
