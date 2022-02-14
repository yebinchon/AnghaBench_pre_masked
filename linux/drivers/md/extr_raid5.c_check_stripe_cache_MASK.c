
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int min_nr_stripes; } ;
struct mddev {int chunk_sectors; int new_chunk_sectors; struct r5conf* private; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mddev *VAR_1)
{
 struct r5conf *VAR_2 = VAR_1->private;
 if (((VAR_1->chunk_sectors << 9) / VAR_0) * 4
     > VAR_2->min_nr_stripes ||
     ((VAR_1->new_chunk_sectors << 9) / VAR_0) * 4
     > VAR_2->min_nr_stripes) {
  FUNC_2("md/raid:%s: reshape: not enough stripes.  Needed %lu\n",
   FUNC_1(VAR_1),
   ((FUNC_0(VAR_1->chunk_sectors, VAR_1->new_chunk_sectors) << 9)
    / VAR_0)*4);
  return 0;
 }
 return 1;
}
