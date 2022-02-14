
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(__u64 VAR_3)
{
 bool VAR_4 = 0;
 bool VAR_5 = 0;

 if (!&FUNC_0)
  return;


 if (VAR_3 & VAR_1)
  VAR_4 = 1;

 if (VAR_3 & VAR_2)
  VAR_5 = 1;

 if (!VAR_4 && !VAR_5)
  return;

 if (&FUNC_1 &&
  FUNC_1()) {

  FUNC_0(VAR_3);
  return;
 }


 if (VAR_4 && FUNC_2(VAR_0, 0))
  FUNC_0(VAR_3);

 if (VAR_5 && FUNC_2(VAR_0, 1))
  FUNC_0(VAR_3);
}
