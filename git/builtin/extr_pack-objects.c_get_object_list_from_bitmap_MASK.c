
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct rev_info*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int *,scalar_t__*,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct rev_info *VAR_7)
{
 if (!(VAR_1 = FUNC_3(VAR_7)))
  return -1;

 if (FUNC_2() &&
     !FUNC_4(
   VAR_1,
   &VAR_4,
   &VAR_5,
   &VAR_6)) {
  FUNC_0(VAR_5);
  VAR_2 += VAR_5;
  FUNC_1(VAR_3, VAR_2);
 }

 FUNC_5(VAR_1, &VAR_0);
 return 0;
}
