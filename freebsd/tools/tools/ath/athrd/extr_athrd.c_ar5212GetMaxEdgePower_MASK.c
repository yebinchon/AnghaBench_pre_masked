
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct TYPE_3__ {scalar_t__ rdEdge; scalar_t__ twice_rdEdgePower; scalar_t__ flag; } ;
typedef TYPE_1__ RD_EDGES_POWER ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,scalar_t__*,int,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static u_int16_t
FUNC_2(u_int16_t VAR_2, RD_EDGES_POWER *VAR_3)
{

 u_int16_t VAR_4[VAR_1];
 u_int16_t VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9;


 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (VAR_3[VAR_8].rdEdge == 0)
   break;
  VAR_4[VAR_8] = VAR_3[VAR_8].rdEdge;
 }
 VAR_9 = VAR_8;

 FUNC_1(VAR_2, VAR_4,
  VAR_9, &VAR_5, &VAR_6);

 for (VAR_8 = 0; VAR_8 < VAR_9 && VAR_5 != VAR_4[VAR_8]; VAR_8++)
  ;

 FUNC_0(VAR_8 != VAR_9);

 if ((VAR_5 == VAR_6 && VAR_5 == VAR_2) || (VAR_3[VAR_8].flag)) {




  VAR_7 = VAR_3[VAR_8].twice_rdEdgePower;
  FUNC_0(VAR_7 > 0);
 } else
  VAR_7 = VAR_0;
 return VAR_7;
}
