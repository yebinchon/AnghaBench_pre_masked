
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef scalar_t__ s64 ;
typedef int ktime_t ;


 int FUNC_0 (struct device*,char*,void*,int,unsigned long long) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1, ktime_t VAR_2,
      void *VAR_3, int VAR_4)
{
 ktime_t VAR_5;
 s64 VAR_6;

 if (!VAR_0)
  return;

 VAR_5 = FUNC_1();
 VAR_6 = (s64) FUNC_3(FUNC_2(VAR_5, VAR_2));

 FUNC_0(VAR_1, "%pS returned %d after %Ld usecs\n", VAR_3, VAR_4,
   (unsigned long long)VAR_6 >> 10);
}
