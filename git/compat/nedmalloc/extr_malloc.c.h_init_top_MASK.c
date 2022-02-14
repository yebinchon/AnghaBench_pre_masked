
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* mstate ;
typedef TYPE_2__* mchunkptr ;
struct TYPE_12__ {int head; } ;
struct TYPE_11__ {int trim_threshold; } ;
struct TYPE_10__ {size_t head; } ;
struct TYPE_9__ {size_t topsize; int trim_check; TYPE_2__* top; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_6__* FUNC_2 (TYPE_2__*,size_t) ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void FUNC_3(mstate VAR_3, mchunkptr VAR_4, size_t VAR_5) {

  size_t VAR_6 = FUNC_0(FUNC_1(VAR_4));
  VAR_4 = (mchunkptr)((char*)VAR_4 + VAR_6);
  VAR_5 -= VAR_6;

  VAR_3->top = VAR_4;
  VAR_3->topsize = VAR_5;
  VAR_4->head = VAR_5 | VAR_0;

  FUNC_2(VAR_4, VAR_5)->head = VAR_1;
  VAR_3->trim_check = VAR_2.trim_threshold;
}
