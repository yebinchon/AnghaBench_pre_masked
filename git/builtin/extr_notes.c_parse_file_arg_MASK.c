
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct option {struct note_data* value; } ;
struct TYPE_5__ {scalar_t__ len; } ;
struct note_data {int given; TYPE_1__ buf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (TYPE_1__*,char) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,char const*,int) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(const struct option *VAR_0, const char *VAR_1, int VAR_2)
{
 struct note_data *VAR_3 = VAR_0->value;

 FUNC_0(VAR_2);

 if (VAR_3->buf.len)
  FUNC_3(&VAR_3->buf, '\n');
 if (!FUNC_7(VAR_1, "-")) {
  if (FUNC_4(&VAR_3->buf, 0, 1024) < 0)
   FUNC_2(FUNC_1("cannot read '%s'"), VAR_1);
 } else if (FUNC_5(&VAR_3->buf, VAR_1, 1024) < 0)
  FUNC_2(FUNC_1("could not open or read '%s'"), VAR_1);
 FUNC_6(&VAR_3->buf, 0);

 VAR_3->given = 1;
 return 0;
}
