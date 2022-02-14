
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct perf_event*,int ) ;
 struct perf_event** FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (int ,int,unsigned long) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_9)
{
 int VAR_10;
 struct perf_event **VAR_11;
 for (VAR_11 = FUNC_1(VAR_5), VAR_10 = 0; VAR_10 < VAR_6; ++VAR_10) {
  if (VAR_11[VAR_10]) {
   FUNC_0(VAR_11[VAR_10], VAR_4);
  } else {
   FUNC_2(VAR_0, VAR_10, 0UL);
   FUNC_2(VAR_1, VAR_10, 0UL);
  }
 }

 for (VAR_11 = FUNC_1(VAR_8), VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10) {
  if (VAR_11[VAR_10]) {
   FUNC_0(VAR_11[VAR_10], VAR_4);
  } else {
   FUNC_2(VAR_2, VAR_10, 0UL);
   FUNC_2(VAR_3, VAR_10, 0UL);
  }
 }

 return 0;
}
