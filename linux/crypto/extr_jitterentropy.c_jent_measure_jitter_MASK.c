
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rand_data {scalar_t__ prev_time; } ;
typedef scalar_t__ __u64 ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct rand_data*,scalar_t__,int ) ;
 int FUNC_2 (struct rand_data*,int ) ;
 int FUNC_3 (struct rand_data*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct rand_data *VAR_0)
{
 __u64 VAR_1 = 0;
 __u64 VAR_2 = 0;


 FUNC_2(VAR_0, 0);





 FUNC_0(&VAR_1);
 VAR_2 = VAR_1 - VAR_0->prev_time;
 VAR_0->prev_time = VAR_1;


 FUNC_1(VAR_0, VAR_2, 0);


 return FUNC_3(VAR_0, VAR_2);
}
