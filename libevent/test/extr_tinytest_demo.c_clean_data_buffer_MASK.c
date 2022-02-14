
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct testcase_t {int dummy; } ;
struct data_buffer {int dummy; } ;


 int FUNC_0 (struct data_buffer*) ;

int
FUNC_1(const struct testcase_t *VAR_0, void *VAR_1)
{
 struct data_buffer *VAR_2 = VAR_1;

 if (VAR_2) {
  FUNC_0(VAR_2);
  return 1;
 }
 return 0;
}
