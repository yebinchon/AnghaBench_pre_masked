
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {struct msg_arg* value; } ;
struct TYPE_2__ {scalar_t__ len; } ;
struct msg_arg {int given; TYPE_1__ buf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char const*) ;

__attribute__((used)) static int FUNC_2(const struct option *VAR_0, const char *VAR_1, int VAR_2)
{
 struct msg_arg *VAR_3 = VAR_0->value;

 FUNC_0(VAR_2);

 if (!VAR_1)
  return -1;
 if (VAR_3->buf.len)
  FUNC_1(&(VAR_3->buf), "\n\n");
 FUNC_1(&(VAR_3->buf), VAR_1);
 VAR_3->given = 1;
 return 0;
}
