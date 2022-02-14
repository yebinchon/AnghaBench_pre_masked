
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int suspend_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 long FUNC_0 (int ,unsigned long*,int ) ;
 int FUNC_1 (char*,long) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(suspend_state_t VAR_7)
{
 long VAR_8, VAR_9;
 unsigned long VAR_10[VAR_5];


 VAR_9 = FUNC_0(VAR_3, VAR_10, VAR_6);

 VAR_8 = VAR_10[0];

 if (VAR_9) {
  FUNC_1("pseries_suspend_begin: vasi_state returned %ld\n",VAR_9);
  return VAR_9;
 } else if (VAR_8 == VAR_2) {
  return -VAR_0;
 } else if (VAR_8 != VAR_4) {
  FUNC_1("pseries_suspend_begin: vasi_state returned state %ld\n",
         VAR_8);
  return -VAR_1;
 }

 return 0;
}
