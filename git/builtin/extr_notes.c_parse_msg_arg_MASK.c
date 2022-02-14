
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct option {struct note_data* value; } ;
struct TYPE_5__ {scalar_t__ len; } ;
struct note_data {int given; TYPE_1__ buf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(const struct option *VAR_0, const char *VAR_1, int VAR_2)
{
 struct note_data *VAR_3 = VAR_0->value;

 FUNC_0(VAR_2);

 FUNC_3(&VAR_3->buf, FUNC_5(VAR_1) + 2);
 if (VAR_3->buf.len)
  FUNC_1(&VAR_3->buf, '\n');
 FUNC_2(&VAR_3->buf, VAR_1);
 FUNC_4(&VAR_3->buf, 0);

 VAR_3->given = 1;
 return 0;
}
