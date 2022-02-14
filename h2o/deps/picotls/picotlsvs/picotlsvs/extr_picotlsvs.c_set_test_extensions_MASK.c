
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {size_t len; int * base; } ;
struct TYPE_5__ {int type; TYPE_1__ data; } ;
typedef TYPE_2__ ptls_raw_extension_t ;


 int VAR_0 ;

void FUNC_0(ptls_raw_extension_t VAR_1[2], uint8_t * VAR_2, size_t VAR_3)
{
 VAR_1[0].type = VAR_0;
 VAR_1[0].data.base = VAR_2;
 VAR_1[0].data.len = VAR_3;
 VAR_1[1].type = 0xFFFF;
 VAR_1[1].data.base = ((void*)0);
 VAR_1[1].data.len = 0;
}
