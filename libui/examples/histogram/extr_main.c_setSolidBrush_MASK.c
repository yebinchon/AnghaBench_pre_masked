
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {double R; double G; double B; double A; int Type; } ;
typedef TYPE_1__ uiDrawBrush ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(uiDrawBrush *VAR_1, uint32_t VAR_2, double VAR_3)
{
 uint8_t VAR_4;

 VAR_1->Type = VAR_0;
 VAR_4 = (uint8_t) ((VAR_2 >> 16) & 0xFF);
 VAR_1->R = ((double) VAR_4) / 255;
 VAR_4 = (uint8_t) ((VAR_2 >> 8) & 0xFF);
 VAR_1->G = ((double) VAR_4) / 255;
 VAR_4 = (uint8_t) (VAR_2 & 0xFF);
 VAR_1->B = ((double) VAR_4) / 255;
 VAR_1->A = VAR_3;
}
