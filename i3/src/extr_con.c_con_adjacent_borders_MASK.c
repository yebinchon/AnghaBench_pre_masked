
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int adjacent_t ;
struct TYPE_7__ {scalar_t__ x; scalar_t__ width; scalar_t__ y; scalar_t__ height; } ;
struct TYPE_8__ {TYPE_1__ rect; } ;
typedef TYPE_2__ Con ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

adjacent_t FUNC_2(Con *VAR_5) {
    adjacent_t VAR_6 = VAR_2;


    if (FUNC_1(VAR_5))
        return VAR_6;

    Con *VAR_7 = FUNC_0(VAR_5);
    if (VAR_5->rect.x == VAR_7->rect.x)
        VAR_6 |= VAR_0;
    if (VAR_5->rect.x + VAR_5->rect.width == VAR_7->rect.x + VAR_7->rect.width)
        VAR_6 |= VAR_3;
    if (VAR_5->rect.y == VAR_7->rect.y)
        VAR_6 |= VAR_4;
    if (VAR_5->rect.y + VAR_5->rect.height == VAR_7->rect.y + VAR_7->rect.height)
        VAR_6 |= VAR_1;
    return VAR_6;
}
