
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pcre_uint8 ;
typedef unsigned int pcre_uint32 ;
struct TYPE_3__ {int* cbits; } ;
typedef TYPE_1__ compile_data ;



__attribute__((used)) static void
FUNC_0(pcre_uint8 *VAR_0, int VAR_1, unsigned int VAR_2,
  compile_data *VAR_3)
{
register pcre_uint32 VAR_4;
for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) VAR_0[VAR_4] |= ~VAR_3->cbits[VAR_4+VAR_1];



}
