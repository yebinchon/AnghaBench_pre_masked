
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvcall_mpp_data {scalar_t__ loan_request; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,long,long,long,long,long) ;
 long FUNC_1 (int ,int) ;
 int FUNC_2 (struct hvcall_mpp_data*) ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 long FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_6;
 struct hvcall_mpp_data VAR_7;
 signed long VAR_8, VAR_9, VAR_10;
 signed long VAR_11 = FUNC_3() + VAR_2;
 signed long VAR_12 = (VAR_4 * 1024 * 1024) / VAR_1;

 VAR_6 = FUNC_2(&VAR_7);

 if (VAR_6 != VAR_0)
  return;

 VAR_9 = FUNC_1((s64)VAR_7.loan_request, VAR_1);
 VAR_10 = VAR_9 + (signed long)VAR_2;

 if (VAR_10 < 0 || VAR_11 < VAR_12)
  VAR_10 = 0;

 if (VAR_10 > VAR_5)
  VAR_10 -= VAR_5;
 else
  VAR_10 = 0;

 VAR_8 = VAR_11 - VAR_10;

 if (VAR_12 > VAR_8)
  VAR_10 = VAR_11 - VAR_12;

 if (VAR_10 < 0)
  VAR_10 = 0;

 VAR_3 = VAR_10;

 FUNC_0("delta = %ld, loaned = %lu, target = %lu, oom = %lu, totalram = %lu\n",
  VAR_9, VAR_2, VAR_3,
  VAR_5, FUNC_3());
}
