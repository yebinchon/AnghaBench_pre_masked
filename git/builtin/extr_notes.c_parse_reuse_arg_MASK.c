
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct option {struct note_data* value; } ;
struct object_id {int dummy; } ;
struct TYPE_3__ {scalar_t__ len; } ;
struct note_data {int given; TYPE_1__ buf; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const*,struct object_id*) ;
 char* FUNC_5 (struct object_id*,int*,unsigned long*) ;
 int FUNC_6 (TYPE_1__*,char*,unsigned long) ;
 int FUNC_7 (TYPE_1__*,char) ;

__attribute__((used)) static int FUNC_8(const struct option *VAR_1, const char *VAR_2, int VAR_3)
{
 struct note_data *VAR_4 = VAR_1->value;
 char *VAR_5;
 struct object_id VAR_6;
 enum object_type VAR_7;
 unsigned long VAR_8;

 FUNC_0(VAR_3);

 if (VAR_4->buf.len)
  FUNC_7(&VAR_4->buf, '\n');

 if (FUNC_4(VAR_2, &VAR_6))
  FUNC_2(FUNC_1("failed to resolve '%s' as a valid ref."), VAR_2);
 if (!(VAR_5 = FUNC_5(&VAR_6, &VAR_7, &VAR_8)))
  FUNC_2(FUNC_1("failed to read object '%s'."), VAR_2);
 if (VAR_7 != VAR_0) {
  FUNC_3(VAR_5);
  FUNC_2(FUNC_1("cannot read note data from non-blob object '%s'."), VAR_2);
 }
 FUNC_6(&VAR_4->buf, VAR_5, VAR_8);
 FUNC_3(VAR_5);

 VAR_4->given = 1;
 return 0;
}
