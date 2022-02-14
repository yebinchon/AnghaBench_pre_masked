
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rand_data {unsigned int data; } ;
typedef unsigned int __u64 ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int*) ;

__attribute__((used)) static __u64 FUNC_1(struct rand_data *VAR_1,
          unsigned int VAR_2, unsigned int VAR_3)
{
 __u64 VAR_4 = 0;
 __u64 VAR_5 = 0;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = (1<<VAR_2) - 1;

 FUNC_0(&VAR_4);




 if (VAR_1)
  VAR_4 ^= VAR_1->data;




 for (VAR_6 = 0; ((VAR_0 + VAR_2 - 1) / VAR_2) > VAR_6; VAR_6++) {
  VAR_5 ^= VAR_4 & VAR_7;
  VAR_4 = VAR_4 >> VAR_2;
 }





 return (VAR_5 + (1<<VAR_3));
}
