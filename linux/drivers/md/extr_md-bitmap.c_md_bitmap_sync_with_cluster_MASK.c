
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {struct bitmap* bitmap; } ;
struct bitmap {int dummy; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct bitmap*,scalar_t__,scalar_t__*,int ) ;
 int FUNC_2 (struct bitmap*,scalar_t__,scalar_t__*,int ) ;

void FUNC_3(struct mddev *VAR_0,
         sector_t VAR_1, sector_t VAR_2,
         sector_t VAR_3, sector_t VAR_4)
{
 struct bitmap *VAR_5 = VAR_0->bitmap;
 sector_t VAR_6, VAR_7 = 0;

 for (VAR_6 = VAR_1; VAR_6 < VAR_3; ) {
  FUNC_1(VAR_5, VAR_6, &VAR_7, 0);
  VAR_6 += VAR_7;
 }
 FUNC_0((VAR_7 > VAR_3) && VAR_1, "alignment is not correct for lo\n");

 for (VAR_6 = VAR_2; VAR_6 < VAR_4; ) {
  FUNC_2(VAR_5, VAR_6, &VAR_7, 0);
  VAR_6 += VAR_7;
 }
 FUNC_0((VAR_7 > VAR_4) && VAR_2, "alignment is not correct for hi\n");
}
