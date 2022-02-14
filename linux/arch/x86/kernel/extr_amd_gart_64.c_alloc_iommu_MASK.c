
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct device {int dummy; } ;


 unsigned long FUNC_0 (int,int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*) ;
 unsigned long FUNC_2 (int ,unsigned long,unsigned long,int,unsigned long,unsigned long,unsigned long) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_5(struct device *VAR_9, int VAR_10,
     unsigned long VAR_11)
{
 unsigned long VAR_12, VAR_13;
 unsigned long VAR_14;
 unsigned long VAR_15;

 VAR_15 = FUNC_0(VAR_3 & FUNC_1(VAR_9),
      VAR_1) >> VAR_0;
 VAR_14 = FUNC_0((u64)FUNC_1(VAR_9) + 1,
         VAR_1) >> VAR_0;

 FUNC_3(&VAR_2, VAR_13);
 VAR_12 = FUNC_2(VAR_5, VAR_6, VAR_8,
      VAR_10, VAR_15, VAR_14, VAR_11);
 if (VAR_12 == -1) {
  VAR_7 = 1;
  VAR_12 = FUNC_2(VAR_5, VAR_6, 0,
       VAR_10, VAR_15, VAR_14,
       VAR_11);
 }
 if (VAR_12 != -1) {
  VAR_8 = VAR_12+VAR_10;
  if (VAR_8 >= VAR_6) {
   VAR_8 = 0;
   VAR_7 = 1;
  }
 }
 if (VAR_4)
  VAR_7 = 1;
 FUNC_4(&VAR_2, VAR_13);

 return VAR_12;
}
