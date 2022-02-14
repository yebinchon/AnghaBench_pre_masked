
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (long) ;
 long FUNC_1 (int ,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_2 (char*,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_3 (char*,unsigned long,unsigned long,unsigned long,long) ;

__attribute__((used)) static long FUNC_4(unsigned long VAR_1,
           unsigned long VAR_2,
           unsigned long VAR_3,
           unsigned long VAR_4,
           unsigned long VAR_5)
{
 long VAR_6;

 FUNC_2("H_INT_SET_QUEUE_CONFIG flags=%lx target=%lx priority=%lx qpage=%lx qsize=%lx\n",
  VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 do {
  VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2,
     VAR_3, VAR_4, VAR_5);
 } while (FUNC_0(VAR_6));

 if (VAR_6) {
  FUNC_3("H_INT_SET_QUEUE_CONFIG cpu=%ld prio=%ld qpage=%lx returned %ld\n",
         VAR_2, VAR_3, VAR_4, VAR_6);
  return VAR_6;
 }

 return 0;
}
