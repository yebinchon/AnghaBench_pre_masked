
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prev_count; } ;
struct perf_event {TYPE_1__ hw; } ;
typedef int s64 ;






 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int *,unsigned long,int ) ;
 unsigned long FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct perf_event *VAR_13, int VAR_14)
{
 int VAR_15 = FUNC_1(VAR_13);
 s64 VAR_16 = 0;

 if (VAR_15 < 0)
  return VAR_15;

 switch (VAR_15) {
 case 131:
  VAR_16 = FUNC_3();
  break;
 case 129:
  if (FUNC_0(&VAR_3) == 1)
   FUNC_5(VAR_0, 0xc0080007);
  VAR_16 = FUNC_2();
  break;
 case 128:
  if (FUNC_0(&VAR_5) == 1) {
   unsigned long VAR_17 = FUNC_7(&VAR_12);

   FUNC_6(&VAR_10, VAR_17, 0);

   FUNC_6(&VAR_11, VAR_17, 0);

  }
  VAR_16 = VAR_4;
  break;
 case 130:
  if (FUNC_0(&VAR_2) == 1) {
   unsigned long VAR_18 = FUNC_7(&VAR_9);

   FUNC_6(&VAR_6, VAR_18, 0);
   FUNC_6(&VAR_7, VAR_18, 0);
   FUNC_6(&VAR_8, VAR_18, 0);
  }
  VAR_16 = VAR_1;
  break;
 }
 FUNC_4(&VAR_13->hw.prev_count, VAR_16);
 return 0;
}
