
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double* cp_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (double,int,int ) ;
 int FUNC_1 (int ,int,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(int VAR_5, int VAR_6)
{
 int VAR_7;
 double VAR_8;

 VAR_8 = 0.0;
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  VAR_8 += VAR_3.cp_time[VAR_7];
 if (VAR_8 == 0.0)
  VAR_8 = 1.0;
 FUNC_1(VAR_4, VAR_5, VAR_2);

 FUNC_0(100.0 * VAR_3.cp_time[VAR_6] / VAR_8, 50, 0.5);
}
