
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {char* name; int type; scalar_t__ raw; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int,struct message const*) ;
 int VAR_0 ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 size_t FUNC_5 (scalar_t__) ;

void
FUNC_6 (const struct message *VAR_1)
{
  char *VAR_2 = (char*) VAR_1->raw;
  size_t VAR_3 = FUNC_5(VAR_1->raw);

  FUNC_3(VAR_1->type);

  FUNC_2(VAR_2, VAR_3);

  if (VAR_0 != 1) {
    FUNC_4("\n*** num_messages != 1 after testing '%s' ***\n\n", VAR_1->name);
    FUNC_0();
  }

  if(!FUNC_1(0, 1, VAR_1)) FUNC_0();
}
