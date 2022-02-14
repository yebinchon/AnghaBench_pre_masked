
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdei_event {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sdei_event*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct sdei_event*) ;
 struct sdei_event* FUNC_7 (int ) ;
 int VAR_1 ;

int FUNC_8(u32 VAR_2)
{
 int VAR_3;
 struct sdei_event *VAR_4;

 FUNC_0(FUNC_2());

 FUNC_3(&VAR_1);
 VAR_4 = FUNC_7(VAR_2);
 do {
  if (!VAR_4) {
   FUNC_5("Event %u not registered\n", VAR_2);
   VAR_3 = -VAR_0;
   break;
  }

  VAR_3 = FUNC_1(VAR_4);
  if (VAR_3)
   break;

  FUNC_6(VAR_4);
 } while (0);
 FUNC_4(&VAR_1);

 return VAR_3;
}
