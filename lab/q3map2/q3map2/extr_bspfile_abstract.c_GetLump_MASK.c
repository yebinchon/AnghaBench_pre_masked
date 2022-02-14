
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int byte ;
struct TYPE_5__ {TYPE_1__* lumps; } ;
typedef TYPE_2__ bspHeader_t ;
struct TYPE_4__ {int offset; } ;



void *FUNC_0( bspHeader_t *VAR_0, int VAR_1 ){
 return (void*)( (byte*) VAR_0 + VAR_0->lumps[ VAR_1 ].offset );
}
