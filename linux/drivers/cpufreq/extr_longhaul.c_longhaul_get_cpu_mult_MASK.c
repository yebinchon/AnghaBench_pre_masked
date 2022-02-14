
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_1(void)
{
 unsigned long VAR_5 = 0, VAR_6, VAR_7;

 FUNC_0(VAR_0, VAR_6, VAR_7);
 VAR_5 = (VAR_6 & (1<<22|1<<23|1<<24|1<<25))>>22;
 if (VAR_4 == VAR_1 ||
     VAR_4 == VAR_2) {
  if (VAR_6 & (1<<27))
   VAR_5 += 16;
 }
 return VAR_3[VAR_5];
}
