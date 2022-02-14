
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc {scalar_t__ mode; int user_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct msc*,unsigned long) ;
 int FUNC_4 (struct msc*,unsigned long*,unsigned int) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct msc *VAR_6, unsigned long *VAR_7,
       unsigned int VAR_8)
{
 int VAR_9;


 if (FUNC_2(&VAR_6->user_count) != -1)
  return -VAR_0;

 if (VAR_6->mode == VAR_4) {
  if (VAR_8 != 1)
   return -VAR_1;

  VAR_9 = FUNC_3(VAR_6, VAR_7[0] << VAR_5);
 } else if (VAR_6->mode == VAR_3) {
  VAR_9 = FUNC_4(VAR_6, VAR_7, VAR_8);
 } else {
  VAR_9 = -VAR_2;
 }

 if (!VAR_9) {

  FUNC_5();

  if (FUNC_0(FUNC_1(&VAR_6->user_count, -1, 0) != -1))
   return -VAR_1;
 }

 return VAR_9;
}
