
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int aux; } ;
struct intel_digital_port {TYPE_1__ dp; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (int *,int ,int *,size_t) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static
int FUNC_3(struct intel_digital_port *VAR_3,
    int VAR_4, u8 *VAR_5)
{
 ssize_t VAR_6;
 int VAR_7;


 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7 += 3) {
  size_t VAR_8 = FUNC_2(VAR_4 - VAR_7, 3) * VAR_1;
  VAR_6 = FUNC_1(&VAR_3->dp.aux,
           VAR_0,
           VAR_5 + VAR_7 * VAR_1,
           VAR_8);
  if (VAR_6 != VAR_8) {
   FUNC_0("Read ksv[%d] from DP/AUX failed (%zd)\n",
          VAR_7, VAR_6);
   return VAR_6 >= 0 ? -VAR_2 : VAR_6;
  }
 }
 return 0;
}
