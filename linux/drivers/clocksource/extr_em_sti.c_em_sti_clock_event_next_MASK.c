
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct em_sti_priv {int dummy; } ;
struct clock_event_device {int dummy; } ;


 struct em_sti_priv* FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (struct em_sti_priv*) ;
 int FUNC_2 (struct em_sti_priv*,int) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_0,
       struct clock_event_device *VAR_1)
{
 struct em_sti_priv *VAR_2 = FUNC_0(VAR_1);
 u64 VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_2, FUNC_1(VAR_2) + VAR_0);
 VAR_4 = FUNC_1(VAR_2) < (VAR_3 - 1);

 return !VAR_4;
}
