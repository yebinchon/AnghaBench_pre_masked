
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 unsigned long VAR_10 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (unsigned long,scalar_t__) ;

__attribute__((used)) static bool FUNC_8(void)
{
 unsigned int VAR_11 = FUNC_0(VAR_6);
 unsigned long VAR_12 = FUNC_0(VAR_9);
 unsigned long VAR_13 = VAR_10;
 int VAR_14;

 if (FUNC_0(VAR_8) != VAR_2)
  return 1;

 if (FUNC_7(VAR_13, VAR_12 + VAR_1)) {
  VAR_11++;
 } else {
  VAR_11 = 1;
  FUNC_1(VAR_9, VAR_13);
 }
 FUNC_1(VAR_6, VAR_11);

 if (VAR_11 <= VAR_3)
  return 0;

 FUNC_3(0);
 FUNC_1(VAR_8, VAR_0);
 VAR_14 = FUNC_2(1, &VAR_7);
 FUNC_4(VAR_1);
 FUNC_6(VAR_5, VAR_4);

 if (VAR_14 == 1)
  FUNC_5("CMCI storm detected: switching to poll mode\n");
 return 1;
}
