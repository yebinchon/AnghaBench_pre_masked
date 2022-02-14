
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct cpu_hw_events {scalar_t__ tfa_shadow; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct cpu_hw_events *VAR_2, bool VAR_3)
{
 u64 VAR_4 = VAR_3 ? VAR_0 : 0;

 if (VAR_2->tfa_shadow != VAR_4) {
  VAR_2->tfa_shadow = VAR_4;
  FUNC_0(VAR_1, VAR_4);
 }
}
