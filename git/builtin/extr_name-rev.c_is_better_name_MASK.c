
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timestamp_t ;
struct rev_name {int from_tag; scalar_t__ taggerdate; int distance; } ;



__attribute__((used)) static int FUNC_0(struct rev_name *VAR_0,
     timestamp_t VAR_1,
     int VAR_2,
     int VAR_3)
{




 if (VAR_3 && VAR_0->from_tag)
  return (VAR_0->taggerdate > VAR_1 ||
   (VAR_0->taggerdate == VAR_1 &&
    VAR_0->distance > VAR_2));





 if (VAR_0->from_tag != VAR_3)
  return VAR_3;





 if (VAR_0->distance != VAR_2)
  return VAR_0->distance > VAR_2;


 if (VAR_0->taggerdate != VAR_1)
  return VAR_0->taggerdate > VAR_1;


 return 0;
}
