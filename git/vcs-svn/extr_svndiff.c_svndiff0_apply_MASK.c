
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sliding_view {int dummy; } ;
struct line_buffer {int dummy; } ;
typedef scalar_t__ off_t ;
typedef int FILE ;


 scalar_t__ FUNC_0 (struct line_buffer*,scalar_t__*,struct sliding_view*,int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct sliding_view*,scalar_t__,size_t) ;
 scalar_t__ FUNC_3 (struct line_buffer*,size_t*,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct line_buffer*,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct line_buffer*,scalar_t__*,scalar_t__*) ;

int FUNC_6(struct line_buffer *VAR_0, off_t VAR_1,
   struct sliding_view *VAR_2, FILE *VAR_3)
{
 FUNC_1(VAR_0 && VAR_2 && VAR_3 && VAR_1 >= 0);

 if (FUNC_4(VAR_0, &VAR_1))
  return -1;
 while (VAR_1) {
  off_t VAR_4 = -1;
  size_t VAR_5;

  if (FUNC_5(VAR_0, &VAR_4, &VAR_1) ||
      FUNC_3(VAR_0, &VAR_5, &VAR_1) ||
      FUNC_2(VAR_2, VAR_4, VAR_5) ||
      FUNC_0(VAR_0, &VAR_1, VAR_2, VAR_3))
   return -1;
 }
 return 0;
}
