
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rand_data {scalar_t__ data; } ;
typedef scalar_t__ __u64 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct rand_data*,int ,int ) ;

__attribute__((used)) static __u64 FUNC_1(struct rand_data *VAR_3, __u64 VAR_4, __u64 VAR_5)
{
 unsigned int VAR_6;
 __u64 VAR_7 = 0;
 __u64 VAR_8 = 0;


 __u64 VAR_9 =
  FUNC_0(VAR_3, 4, 0);





 if (VAR_5)
  VAR_9 = VAR_5;
 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  VAR_8 = VAR_3->data;
  for (VAR_6 = 1; (VAR_0) >= VAR_6; VAR_6++) {
   __u64 VAR_10 = VAR_4 << (VAR_0 - VAR_6);

   VAR_10 = VAR_10 >> (VAR_0 - 1);
   VAR_10 ^= ((VAR_8 >> 63) & 1);
   VAR_10 ^= ((VAR_8 >> 60) & 1);
   VAR_10 ^= ((VAR_8 >> 55) & 1);
   VAR_10 ^= ((VAR_8 >> 30) & 1);
   VAR_10 ^= ((VAR_8 >> 27) & 1);
   VAR_10 ^= ((VAR_8 >> 22) & 1);
   VAR_8 <<= 1;
   VAR_8 ^= VAR_10;
  }
 }
 VAR_3->data = VAR_8;

 return VAR_9;
}
