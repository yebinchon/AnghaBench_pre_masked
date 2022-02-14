
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int ktime_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(void *VAR_1, u64 *VAR_2)
{
 ktime_t VAR_3, VAR_4;
 int VAR_5;
 int VAR_6;
 FUNC_0(VAR_0);

 VAR_5 = 1000000;
 VAR_6 = 1;

 VAR_3 = FUNC_1();

 while (VAR_6) {
  FUNC_3(&VAR_0);
  VAR_5--;
  if (VAR_5 == 0)
   VAR_6 = 0;
  FUNC_4(&VAR_0);
 }

 VAR_4 = FUNC_1();

 *VAR_2 = FUNC_2(VAR_4, VAR_3);

 return 0;
}
