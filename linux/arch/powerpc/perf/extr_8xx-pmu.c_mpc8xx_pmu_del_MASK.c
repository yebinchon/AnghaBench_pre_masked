
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;






 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (struct perf_event*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct perf_event*) ;
 int FUNC_5 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct perf_event *VAR_12, int VAR_13)
{

 unsigned int VAR_14 = VAR_0 | FUNC_0(VAR_1) |
       FUNC_1(VAR_3);

 FUNC_4(VAR_12);


 switch (FUNC_3(VAR_12)) {
 case 131:
  break;
 case 129:
  if (FUNC_2(&VAR_5) == 0)
   FUNC_5(VAR_2, 7);
  break;
 case 128:
  if (FUNC_2(&VAR_6) == 0) {
   FUNC_6(&VAR_10, VAR_14);

   FUNC_6(&VAR_11, VAR_14);

  }
  break;
 case 130:
  if (FUNC_2(&VAR_4) == 0) {
   FUNC_6(&VAR_7, VAR_14);
   FUNC_6(&VAR_8, VAR_14);
   FUNC_6(&VAR_9, VAR_14);
  }
  break;
 }
}
