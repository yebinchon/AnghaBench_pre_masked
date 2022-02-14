
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mode_info {int x; int y; int mode; } ;
struct card_info {int nmodes; int (* set_mode ) (struct mode_info*) ;int xmode_first; int xmode_n; struct mode_info* modes; } ;


 int VAR_0 ;
 int FUNC_0 (struct mode_info*) ;
 int FUNC_1 (struct mode_info*) ;
 struct card_info* VAR_1 ;
 struct card_info* VAR_2 ;

__attribute__((used)) static int FUNC_2(u16 VAR_3, u16 *VAR_4)
{
 int VAR_5, VAR_6;
 struct card_info *VAR_7;
 struct mode_info *VAR_8;


 VAR_3 &= ~VAR_0;


 VAR_5 = 0;
 for (VAR_7 = VAR_1; VAR_7 < VAR_2; VAR_7++) {
  VAR_8 = VAR_7->modes;
  for (VAR_6 = 0; VAR_6 < VAR_7->nmodes; VAR_6++, VAR_8++) {
   int VAR_9 = VAR_8->x || VAR_8->y;

   if ((VAR_3 == VAR_5 && VAR_9) ||
       VAR_3 == VAR_8->mode ||
       VAR_3 == (VAR_8->y << 8)+VAR_8->x) {
    *VAR_4 = VAR_8->mode;
    return VAR_7->set_mode(VAR_8);
   }

   if (VAR_9)
    VAR_5++;
  }
 }


 for (VAR_7 = VAR_1; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_3 >= VAR_7->xmode_first &&
      VAR_3 < VAR_7->xmode_first+VAR_7->xmode_n) {
   struct mode_info VAR_10;
   *VAR_4 = VAR_10.mode = VAR_3;
   VAR_10.x = VAR_10.y = 0;
   return VAR_7->set_mode(&VAR_10);
  }
 }


 return -1;
}
