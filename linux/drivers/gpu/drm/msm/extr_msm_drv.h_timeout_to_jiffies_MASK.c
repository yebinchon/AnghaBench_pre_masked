
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
typedef int ktime_t ;


 scalar_t__ FUNC_0 (int const,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int const,int ) ;
 struct timespec FUNC_3 (int ) ;
 unsigned long FUNC_4 (struct timespec*) ;

__attribute__((used)) static inline unsigned long FUNC_5(const ktime_t *VAR_0)
{
 ktime_t VAR_1 = FUNC_1();
 unsigned long VAR_2;

 if (FUNC_0(*VAR_0, VAR_1) < 0) {
  VAR_2 = 0;
 } else {
  ktime_t VAR_3 = FUNC_2(*VAR_0, VAR_1);
  struct timespec VAR_4 = FUNC_3(VAR_3);
  VAR_2 = FUNC_4(&VAR_4);
 }

 return VAR_2;
}
