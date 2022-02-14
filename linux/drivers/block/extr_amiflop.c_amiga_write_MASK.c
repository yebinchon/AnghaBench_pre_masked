
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ushort ;
struct TYPE_6__ {TYPE_2__* type; TYPE_1__* dtype; } ;
struct TYPE_5__ {int sect_mult; } ;
struct TYPE_4__ {unsigned int sects; } ;


 unsigned long* FUNC_0 (int,unsigned long*,unsigned int) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static void FUNC_1(int VAR_2)
{
 unsigned int VAR_3;
 unsigned long *VAR_4 = (unsigned long *)VAR_0;

 VAR_2&=3;

 for (VAR_3 = 0; VAR_3 < 415 * VAR_1[VAR_2].type->sect_mult; VAR_3++)
  *VAR_4++ = 0xaaaaaaaa;


 for (VAR_3 = 0; VAR_3 < VAR_1[VAR_2].dtype->sects * VAR_1[VAR_2].type->sect_mult; VAR_3++)
  VAR_4 = FUNC_0 (VAR_2, VAR_4, VAR_3);
 *(ushort *)VAR_4 = (VAR_4[-1]&1) ? 0x2AA8 : 0xAAA8;
}
