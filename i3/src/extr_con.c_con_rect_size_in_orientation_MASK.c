
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int height; int width; } ;
struct TYPE_6__ {TYPE_1__ rect; } ;
typedef TYPE_2__ Con ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

uint32_t FUNC_1(Con *VAR_1) {
    return (FUNC_0(VAR_1) == VAR_0 ? VAR_1->rect.width : VAR_1->rect.height);
}
