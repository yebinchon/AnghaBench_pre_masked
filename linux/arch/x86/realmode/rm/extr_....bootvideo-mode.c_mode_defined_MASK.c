
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mode_info {scalar_t__ mode; } ;
struct card_info {int nmodes; struct mode_info* modes; } ;


 struct card_info* VAR_0 ;
 struct card_info* VAR_1 ;

int FUNC_0(u16 VAR_2)
{
 struct card_info *VAR_3;
 struct mode_info *VAR_4;
 int VAR_5;

 for (VAR_3 = VAR_0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = VAR_3->modes;
  for (VAR_5 = 0; VAR_5 < VAR_3->nmodes; VAR_5++, VAR_4++) {
   if (VAR_4->mode == VAR_2)
    return 1;
  }
 }

 return 0;
}
