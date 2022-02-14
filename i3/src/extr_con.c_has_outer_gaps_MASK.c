
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ top; scalar_t__ right; scalar_t__ bottom; scalar_t__ left; } ;
typedef TYPE_1__ gaps_t ;



__attribute__((used)) static bool FUNC_0(gaps_t VAR_0) {
    return VAR_0.top > 0 ||
           VAR_0.right > 0 ||
           VAR_0.bottom > 0 ||
           VAR_0.left > 0;
}
