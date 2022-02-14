
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* op_points; } ;
struct TYPE_4__ {scalar_t__ frequency; unsigned int driver_data; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 TYPE_2__* FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static unsigned FUNC_1(unsigned VAR_7, unsigned int VAR_8, int VAR_9)
{
 int VAR_10;






 if ((FUNC_0(VAR_4, VAR_8) == &VAR_6[VAR_1]) ||
     (FUNC_0(VAR_4, VAR_8) == &VAR_6[VAR_2]) ||
     (FUNC_0(VAR_4, VAR_8) == &VAR_6[VAR_3])) {
  VAR_7 = (VAR_7 >> 8) & 0xff;
  return VAR_7 * 100000;
 }

 if ((!FUNC_0(VAR_5, VAR_8)) ||
     (!FUNC_0(VAR_5, VAR_8)->op_points))
  return 0;

 VAR_7 &= 0xffff;
 for (VAR_10 = 0;
  FUNC_0(VAR_5, VAR_8)->op_points[VAR_10].frequency
       != VAR_0;
      VAR_10++) {
  if (VAR_7 == FUNC_0(VAR_5, VAR_8)->op_points[VAR_10].driver_data)
   return FUNC_0(VAR_5, VAR_8)->
       op_points[VAR_10].frequency;
 }
 if (VAR_9)
  return FUNC_0(VAR_5, VAR_8)->op_points[VAR_10-1].frequency;
 else
  return 0;
}
