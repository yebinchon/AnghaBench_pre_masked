
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {unsigned int frequency; } ;
struct TYPE_3__ {int nr_pstates; int nominal; } ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static unsigned int FUNC_3(u8 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 >= VAR_1.nr_pstates || VAR_3 < 0) {
  FUNC_1("PState id 0x%x outside of PState table, reporting nominal id 0x%x instead\n",
   VAR_2, FUNC_0(VAR_1.nominal));
  VAR_3 = VAR_1.nominal;
 }

 return VAR_0[VAR_3].frequency;
}
