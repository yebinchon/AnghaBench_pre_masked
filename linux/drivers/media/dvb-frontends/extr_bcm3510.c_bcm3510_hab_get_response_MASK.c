
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct bcm3510_state {int dummy; } ;
struct TYPE_5__ {scalar_t__ HABADR; } ;
struct TYPE_6__ {int HABDATA_a7; TYPE_1__ HABADR_a6; } ;
typedef TYPE_2__ bcm3510_register_value ;


 int FUNC_0 (struct bcm3510_state*,int,TYPE_2__*) ;
 int FUNC_1 (struct bcm3510_state*,int,TYPE_2__) ;

__attribute__((used)) static int FUNC_2(struct bcm3510_state *VAR_0, u8 *VAR_1, int VAR_2)
{
 bcm3510_register_value VAR_3;
 int VAR_4,VAR_5;

 VAR_3.HABADR_a6.HABADR = 0;
 if ((VAR_4 = FUNC_1(VAR_0,0xa6,VAR_3)) < 0)
  return VAR_4;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if ((VAR_4 = FUNC_0(VAR_0,0xa7,&VAR_3)) < 0)
   return VAR_4;
  VAR_1[VAR_5] = VAR_3.HABDATA_a7;
 }
 return 0;
}
