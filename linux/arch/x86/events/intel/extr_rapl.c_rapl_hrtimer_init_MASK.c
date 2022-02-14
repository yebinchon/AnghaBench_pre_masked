
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer {int function; } ;
struct rapl_pmu {struct hrtimer hrtimer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hrtimer*,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct rapl_pmu *VAR_3)
{
 struct hrtimer *VAR_4 = &VAR_3->hrtimer;

 FUNC_0(VAR_4, VAR_0, VAR_1);
 VAR_4->function = VAR_2;
}
