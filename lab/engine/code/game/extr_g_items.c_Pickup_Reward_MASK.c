
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* item; scalar_t__ count; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_7__ {scalar_t__ quantity; } ;


 int FUNC_0 (TYPE_2__*,int *,scalar_t__,char*,TYPE_2__*) ;

int FUNC_1( gentity_t *VAR_0, gentity_t *VAR_1 ) {
 FUNC_0( VAR_1, ((void*)0), VAR_0->count ? VAR_0->count : VAR_0->item->quantity, "PICKUP_REWARD", VAR_0 );
 return -1;
}
