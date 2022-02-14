
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int exp; int sign; int signif; } ;
typedef TYPE_1__ float80 ;


 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static float80 FUNC_1(float80 VAR_0, int VAR_1) {
    VAR_0.signif = FUNC_0(VAR_0.signif, VAR_1, VAR_0.sign);
    VAR_0.exp += VAR_1;
    return VAR_0;
}
