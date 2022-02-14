
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r1bio {long sectors; scalar_t__ sector; } ;
struct mddev {int bitmap; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (int ,scalar_t__,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_1(struct mddev *VAR_0, struct r1bio *VAR_1)
{
 sector_t VAR_2 = 0;
 sector_t VAR_3 = VAR_1->sector;
 long VAR_4 = VAR_1->sectors;


 do {
  FUNC_0(VAR_0->bitmap, VAR_3, &VAR_2, 1);
  VAR_3 += VAR_2;
  VAR_4 -= VAR_2;
 } while (VAR_4 > 0);
}
