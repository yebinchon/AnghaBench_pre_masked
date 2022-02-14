
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct its_node {scalar_t__ base; } ;
struct its_cmd_block {int dummy; } ;
typedef scalar_t__ s64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct its_node*,struct its_cmd_block*) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct its_node *VAR_2,
      u64 VAR_3,
      struct its_cmd_block *VAR_4)
{
 u64 VAR_5, VAR_6, VAR_7;
 u32 VAR_8 = 1000000;


 VAR_6 = FUNC_1(VAR_2, VAR_4);
 if (VAR_6 < VAR_3)
  VAR_6 += VAR_1;

 VAR_7 = VAR_3;

 while (1) {
  s64 VAR_9;

  VAR_5 = FUNC_3(VAR_2->base + VAR_0);





  VAR_9 = VAR_5 - VAR_3;
  if (VAR_5 < VAR_3)
   VAR_9 += VAR_1;

  VAR_7 += VAR_9;
  if (VAR_7 >= VAR_6)
   break;

  VAR_8--;
  if (!VAR_8) {
   FUNC_2("ITS queue timeout (%llu %llu)\n",
        VAR_6, VAR_7);
   return -1;
  }
  VAR_3 = VAR_5;
  FUNC_0();
  FUNC_4(1);
 }

 return 0;
}
