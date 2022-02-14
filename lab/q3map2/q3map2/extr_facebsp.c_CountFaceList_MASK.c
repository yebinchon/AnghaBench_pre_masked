
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ face_t ;



int FUNC_0( face_t *VAR_0 ){
 int VAR_1;


 VAR_1 = 0;
 for ( ; VAR_0 != ((void*)0); VAR_0 = VAR_0->next )
  VAR_1++;
 return VAR_1;
}
