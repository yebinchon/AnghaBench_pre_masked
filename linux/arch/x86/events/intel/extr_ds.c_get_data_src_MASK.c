
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int flags; } ;
struct perf_event {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct perf_event*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u64 FUNC_3(struct perf_event *VAR_4, u64 VAR_5)
{
 u64 VAR_6 = VAR_0;
 int VAR_7 = VAR_4->hw.flags;
 bool VAR_8 = VAR_7 & (VAR_3 | VAR_1);

 if (VAR_7 & VAR_2)
  VAR_6 = FUNC_0(VAR_5);
 else if (VAR_8 && (VAR_7 & VAR_1))
  VAR_6 = FUNC_1(VAR_4, VAR_5);
 else if (VAR_8)
  VAR_6 = FUNC_2(VAR_5);
 return VAR_6;
}
