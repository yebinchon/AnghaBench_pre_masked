
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status {int whence; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4(struct wt_status *VAR_6)
{
 if (FUNC_0(FUNC_2(VAR_4)))
  VAR_5 = VAR_2;
 else if (FUNC_0(FUNC_1(VAR_4))) {
  VAR_5 = VAR_0;
  if (FUNC_0(FUNC_3()))
   VAR_3 = 1;
 }
 else
  VAR_5 = VAR_1;
 if (VAR_6)
  VAR_6->whence = VAR_5;
}
