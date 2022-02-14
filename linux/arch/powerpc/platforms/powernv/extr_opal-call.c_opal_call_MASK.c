
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,unsigned long) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int64_t FUNC_7(int64_t VAR_4, int64_t VAR_5, int64_t VAR_6, int64_t VAR_7,
      int64_t VAR_8, int64_t VAR_9, int64_t VAR_10, int64_t VAR_11, int64_t VAR_12)
{
 unsigned long VAR_13;
 unsigned long VAR_14 = FUNC_5();
 bool VAR_15 = (VAR_14 & (VAR_3|VAR_1));
 int64_t VAR_16;

 VAR_14 &= ~VAR_2;

 if (FUNC_6(!VAR_15))
  return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_14);

 FUNC_4(VAR_13);
 FUNC_2();

 if (VAR_0) {
  VAR_16 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_14);
 } else {
  VAR_16 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_14);
 }

 FUNC_3(VAR_13);

 return VAR_16;
}
