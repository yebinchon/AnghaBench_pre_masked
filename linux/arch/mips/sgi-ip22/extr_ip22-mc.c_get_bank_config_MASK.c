
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int mconfig1; unsigned int mconfig0; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(int VAR_1)
{
 unsigned int VAR_2 = VAR_1 > 1 ? VAR_0->mconfig1 : VAR_0->mconfig0;
 return VAR_1 % 2 ? VAR_2 & 0xffff : VAR_2 >> 16;
}
