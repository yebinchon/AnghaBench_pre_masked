
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_kcounters {int ** pfrkc_bytes; int ** pfrkc_packets; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct pfr_kcounters *VAR_0, int VAR_1, int VAR_2)
{
 FUNC_0(VAR_0->pfrkc_packets[VAR_1][VAR_2]);
 FUNC_0(VAR_0->pfrkc_bytes[VAR_1][VAR_2]);
}
