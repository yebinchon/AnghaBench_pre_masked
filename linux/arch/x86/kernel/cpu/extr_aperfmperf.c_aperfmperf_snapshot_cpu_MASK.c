
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ s64 ;
typedef int ktime_t ;
struct TYPE_2__ {int time; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int,int ,int *,int) ;

__attribute__((used)) static bool FUNC_3(int VAR_4, ktime_t VAR_5, bool VAR_6)
{
 s64 VAR_7 = FUNC_0(VAR_5, FUNC_1(VAR_3.time, VAR_4));


 if (VAR_7 < VAR_0)
  return 1;

 FUNC_2(VAR_4, VAR_2, ((void*)0), VAR_6);


 return VAR_7 <= VAR_1;
}
