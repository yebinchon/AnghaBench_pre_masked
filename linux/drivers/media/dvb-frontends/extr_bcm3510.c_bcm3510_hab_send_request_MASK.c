
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct bcm3510_state {int dummy; } ;
struct TYPE_7__ {int HABR; int LDHABR; } ;
struct TYPE_6__ {scalar_t__ HABADR; } ;
struct TYPE_8__ {TYPE_2__ HABSTAT_a8; scalar_t__ raw; int HABDATA_a7; TYPE_1__ HABADR_a6; } ;
typedef TYPE_3__ bcm3510_register_value ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm3510_state*,int,TYPE_3__*) ;
 int FUNC_1 (struct bcm3510_state*,int,TYPE_3__) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct bcm3510_state *VAR_3, u8 *VAR_4, int VAR_5)
{
 bcm3510_register_value VAR_6,VAR_7;
 int VAR_8,VAR_9;
 unsigned long VAR_10;



 if ((VAR_8 = FUNC_0(VAR_3,0xa8,&VAR_6)) < 0)
  return VAR_8;
 if (VAR_6.HABSTAT_a8.HABR) {
  FUNC_2("HAB is running already - clearing it.\n");
  VAR_6.HABSTAT_a8.HABR = 0;
  FUNC_1(VAR_3,0xa8,VAR_6);

 }



 VAR_7.HABADR_a6.HABADR = 0;
 if ((VAR_8 = FUNC_1(VAR_3,0xa6,VAR_7)) < 0)
  return VAR_8;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_7.HABDATA_a7 = VAR_4[VAR_9];
  if ((VAR_8 = FUNC_1(VAR_3,0xa7,VAR_7)) < 0)
   return VAR_8;
 }



 VAR_6.raw = 0; VAR_6.HABSTAT_a8.HABR = 1; VAR_6.HABSTAT_a8.LDHABR = 1;
 if ((VAR_8 = FUNC_1(VAR_3,0xa8,VAR_6)) < 0)
  return VAR_8;


 VAR_10 = VAR_2 + 1*VAR_1;
 while (FUNC_4(VAR_2, VAR_10)) {
  FUNC_2("waiting for HAB to complete\n");
  FUNC_3(10);
  if ((VAR_8 = FUNC_0(VAR_3,0xa8,&VAR_6)) < 0)
   return VAR_8;

  if (!VAR_6.HABSTAT_a8.HABR)
   return 0;
 }

 FUNC_2("send_request execution timed out.\n");
 return -VAR_0;
}
