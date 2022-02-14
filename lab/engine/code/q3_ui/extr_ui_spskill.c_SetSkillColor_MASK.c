
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* vec4_t ;
struct TYPE_11__ {void* color; } ;
struct TYPE_10__ {void* color; } ;
struct TYPE_9__ {void* color; } ;
struct TYPE_8__ {void* color; } ;
struct TYPE_7__ {void* color; } ;
struct TYPE_12__ {TYPE_5__ item_nightmare; TYPE_4__ item_hard; TYPE_3__ item_medium; TYPE_2__ item_easy; TYPE_1__ item_baby; } ;


 TYPE_6__ VAR_0 ;

__attribute__((used)) static void FUNC_0( int VAR_1, vec4_t VAR_2 ) {
 switch( VAR_1 ) {
 case 1:
  VAR_0.item_baby.color = VAR_2;
  break;
 case 2:
  VAR_0.item_easy.color = VAR_2;
  break;
 case 3:
  VAR_0.item_medium.color = VAR_2;
  break;
 case 4:
  VAR_0.item_hard.color = VAR_2;
  break;
 case 5:
  VAR_0.item_nightmare.color = VAR_2;
  break;
 default:
  break;
 }
}
