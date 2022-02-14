
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct histogram {double min; double max; int gap; int num_bins; int max_bins; TYPE_1__* bins; int count; } ;
struct TYPE_2__ {double centroid; int count; } ;


 double VAR_0 ;
 scalar_t__ FUNC_0 (double,double) ;

__attribute__((used)) static void
FUNC_1(struct histogram *VAR_1, double VAR_2)
{
 unsigned VAR_3;
 double VAR_4;
 double VAR_5 = VAR_0;


 ++(VAR_1->count);
 if (VAR_2 < VAR_1->min)
  VAR_1->min = VAR_2;
 if (VAR_2 > VAR_1->max)
  VAR_1->max = VAR_2;




 while (1) {

  if (VAR_1->gap != 0) {


   if (VAR_1->bins[VAR_1->gap - 1].centroid > VAR_2) {
    VAR_1->bins[VAR_1->gap] = VAR_1->bins[VAR_1->gap - 1];
    --(VAR_1->gap);
    continue;
   }


   if (FUNC_0(VAR_1->bins[VAR_1->gap - 1].centroid, VAR_2)) {
    ++(VAR_1->bins[VAR_1->gap - 1].count);
    return;
   }
  }


  if (VAR_1->gap != VAR_1->num_bins) {


   if (VAR_1->bins[VAR_1->gap + 1].centroid < VAR_2) {
    VAR_1->bins[VAR_1->gap] = VAR_1->bins[VAR_1->gap + 1];
    ++(VAR_1->gap);
    continue;
   }


   if (FUNC_0(VAR_1->bins[VAR_1->gap + 1].centroid, VAR_2)) {
    ++(VAR_1->bins[VAR_1->gap + 1].count);
    return;
   }
  }


  break;
 }


 VAR_1->bins[VAR_1->gap].centroid = VAR_2;
 VAR_1->bins[VAR_1->gap].count = 1;



 if (VAR_1->num_bins != VAR_1->max_bins) {
  VAR_1->gap = ++(VAR_1->num_bins);
  return;
 }




 for (VAR_3 = 0; VAR_3 < VAR_1->num_bins; ++VAR_3) {
  VAR_4 = VAR_1->bins[VAR_3 + 1].centroid - VAR_1->bins[VAR_3].centroid;
  if (VAR_4 < VAR_5) {
   VAR_5 = VAR_4;
   VAR_1->gap = VAR_3;
  }
 }


 VAR_1->bins[VAR_1->gap + 1].centroid =
  (VAR_1->bins[VAR_1->gap].centroid * VAR_1->bins[VAR_1->gap].count +
   VAR_1->bins[VAR_1->gap + 1].centroid * VAR_1->bins[VAR_1->gap + 1].count) /
  (VAR_1->bins[VAR_1->gap].count + VAR_1->bins[VAR_1->gap + 1].count);
 VAR_1->bins[VAR_1->gap + 1].count += VAR_1->bins[VAR_1->gap].count;
}
