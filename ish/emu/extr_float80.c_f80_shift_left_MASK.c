
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int signif; int exp; } ;
typedef TYPE_1__ float80 ;



__attribute__((used)) static float80 FUNC_0(float80 VAR_0, int VAR_1) {
    VAR_0.signif <<= VAR_1;
    VAR_0.exp -= VAR_1;
    return VAR_0;
}
