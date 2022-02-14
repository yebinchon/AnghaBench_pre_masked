
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strip_zone {int nb_dev; } ;
struct r0conf {struct strip_zone* strip_zone; struct md_rdev** devlist; } ;
struct mddev {unsigned int chunk_sectors; struct r0conf* private; } ;
struct md_rdev {int dummy; } ;
typedef unsigned int sector_t ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;

__attribute__((used)) static struct md_rdev *FUNC_3(struct mddev *VAR_0, struct strip_zone *VAR_1,
    sector_t VAR_2, sector_t *VAR_3)
{
 unsigned int VAR_4;
 sector_t VAR_5;
 struct r0conf *VAR_6 = VAR_0->private;
 int VAR_7 = VAR_6->strip_zone[0].nb_dev;
 unsigned int VAR_8 = VAR_0->chunk_sectors;

 if (FUNC_1(VAR_8)) {
  int VAR_9 = FUNC_0(~VAR_8);

  VAR_4 = VAR_2 & (VAR_8 - 1);
  VAR_2 >>= VAR_9;

  VAR_5 = *VAR_3;

  FUNC_2(VAR_5, VAR_1->nb_dev << VAR_9);
 } else{
  VAR_4 = FUNC_2(VAR_2, VAR_8);
  VAR_5 = *VAR_3;
  FUNC_2(VAR_5, VAR_8 * VAR_1->nb_dev);
 }





 *VAR_3 = (VAR_5 * VAR_8) + VAR_4;
 return VAR_6->devlist[(VAR_1 - VAR_6->strip_zone)*VAR_7
        + FUNC_2(VAR_2, VAR_1->nb_dev)];
}
