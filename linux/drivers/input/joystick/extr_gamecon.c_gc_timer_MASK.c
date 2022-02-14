
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct gc {int timer; scalar_t__* pad_count; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 struct gc* FUNC_0 (int ,struct timer_list*,int ) ;
 struct gc* VAR_9 ;
 int FUNC_1 (struct gc*) ;
 int FUNC_2 (struct gc*) ;
 int FUNC_3 (struct gc*) ;
 int FUNC_4 (struct gc*) ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (int *,scalar_t__) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_12)
{
 struct gc *VAR_13 = FUNC_0(VAR_13, VAR_12, VAR_11);





 if (VAR_13->pad_count[VAR_3])
  FUNC_2(VAR_13);





 if (VAR_13->pad_count[VAR_4] ||
     VAR_13->pad_count[VAR_7] ||
     VAR_13->pad_count[VAR_8]) {
  FUNC_3(VAR_13);
 }





 if (VAR_13->pad_count[VAR_1] || VAR_13->pad_count[VAR_2])
  FUNC_1(VAR_13);





 if (VAR_13->pad_count[VAR_5] || VAR_13->pad_count[VAR_0])
  FUNC_4(VAR_13);

 FUNC_5(&VAR_13->timer, VAR_10 + VAR_6);
}
