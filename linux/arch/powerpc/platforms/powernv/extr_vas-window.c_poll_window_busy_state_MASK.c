
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vas_window {int dummy; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct vas_window*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct vas_window *VAR_3)
{
 int VAR_4;
 u64 VAR_5;

retry:
 VAR_5 = FUNC_3(VAR_3, FUNC_1(VAR_2));
 VAR_4 = FUNC_0(VAR_1, VAR_5);
 if (VAR_4) {
  VAR_5 = 0;
  FUNC_5(VAR_0);
  FUNC_4(FUNC_2(5));
  goto retry;
 }
}
