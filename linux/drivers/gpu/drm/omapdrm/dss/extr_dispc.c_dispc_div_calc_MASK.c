
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dispc_device {int dss; TYPE_1__* feat; } ;
typedef scalar_t__ (* dispc_div_calc_func ) (int,int,unsigned long,unsigned long,void*) ;
struct TYPE_2__ {unsigned long min_pcd; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (struct dispc_device*) ;
 scalar_t__ FUNC_2 (struct dispc_device*,int ) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (unsigned long,unsigned long) ;

bool FUNC_6(struct dispc_device *VAR_3, unsigned long VAR_4,
      unsigned long VAR_5, unsigned long VAR_6,
      dispc_div_calc_func VAR_7, void *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;
 unsigned long VAR_15, VAR_16;
 unsigned long VAR_17;
 unsigned long VAR_18, VAR_19;
 unsigned int VAR_20;
 unsigned long VAR_21;




 VAR_20 = 0;


 VAR_18 = VAR_3->feat->min_pcd;
 VAR_19 = 255;

 VAR_17 = FUNC_3(VAR_3->dss);

 VAR_5 = VAR_5 ? VAR_5 : 1;
 VAR_6 = VAR_6 ? VAR_6 : VAR_2;

 VAR_10 = FUNC_4(FUNC_0(VAR_4, VAR_17), 1ul);
 VAR_11 = FUNC_5(VAR_4 / VAR_5, 255ul);

 for (VAR_9 = VAR_10; VAR_9 <= VAR_11; ++VAR_9) {
  VAR_16 = VAR_4 / VAR_9;

  VAR_13 = FUNC_4(FUNC_0(VAR_16, VAR_6), VAR_18);
  VAR_14 = FUNC_5(VAR_16 / VAR_5, VAR_19);

  for (VAR_12 = VAR_13; VAR_12 <= VAR_14; ++VAR_12) {
   VAR_15 = VAR_16 / VAR_12;







   if (FUNC_2(VAR_3, VAR_1))
    VAR_21 = FUNC_1(VAR_3);
   else
    VAR_21 = VAR_16;

   if (VAR_21 < VAR_15 * VAR_20)
    continue;

   if (VAR_7(VAR_9, VAR_12, VAR_16, VAR_15, VAR_8))
    return 1;
  }
 }

 return 0;
}
