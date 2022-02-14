
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int needsRedraw; int header; } ;
typedef int RichString ;
typedef TYPE_1__ Panel ;


 int FUNC_0 (int ) ;

RichString* FUNC_1(Panel* VAR_0) {
   FUNC_0 (VAR_0 != ((void*)0));

   VAR_0->needsRedraw = 1;
   return &(VAR_0->header);
}
