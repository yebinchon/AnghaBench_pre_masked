
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int IgnoreViewportPositioning; } ;
struct display_mode_lib {TYPE_1__ vba; } ;


 double FUNC_0 (double,int) ;
 double FUNC_1 (double,int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static double FUNC_4(
  struct display_mode_lib *VAR_0,
  double VAR_1,
  double VAR_2,
  bool VAR_3,
  bool VAR_4,
  unsigned int VAR_5,
  unsigned int VAR_6,
  double *VAR_7,
  unsigned int *VAR_8)
{
 unsigned int VAR_9;

 if (VAR_4)
  *VAR_7 = FUNC_1((VAR_1 + VAR_2 + 1) / 2.0, 1);
 else
  *VAR_7 = FUNC_1((VAR_1 + VAR_2 + 1 + VAR_3 * 0.5 * VAR_1) / 2.0, 1);

 if (!VAR_0->vba.IgnoreViewportPositioning) {

  *VAR_8 = FUNC_0((*VAR_7 - 1.0) / VAR_5, 1) + 1.0;

  if (*VAR_7 > 1.0)
   VAR_9 = (unsigned int) (*VAR_7 - 2) % VAR_5;
  else
   VAR_9 = (unsigned int) (*VAR_7 + VAR_5 - 2)
     % VAR_5;
  VAR_9 = FUNC_2(1U, VAR_9);

 } else {

  if (VAR_6 != 0)
   FUNC_3(
     "WARNING DML: using viewport y position of 0 even though actual viewport y position is non-zero in prefetch source lines calculation\n");

  *VAR_8 = FUNC_0(*VAR_7 / VAR_5, 1);

  if (*VAR_7 > 1.0)
   VAR_9 = (unsigned int) (*VAR_7 - 1) % VAR_5;
  else
   VAR_9 = (unsigned int) (*VAR_7 + VAR_5 - 1)
     % VAR_5;
 }

 return *VAR_8 * VAR_5 + VAR_9;
}
