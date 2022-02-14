
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {char* name; int * raw; int type; } ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,struct message const*) ;
 int VAR_0 ;
 size_t FUNC_3 (int *,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,size_t) ;
 int FUNC_6 (char*,char*) ;
 size_t FUNC_7 (int *) ;

void
FUNC_8 (const struct message *VAR_1)
{
  FUNC_4(VAR_1->type);

  size_t VAR_2;
  size_t VAR_3 = FUNC_7(VAR_1->raw);
  size_t VAR_4, VAR_5;
  size_t VAR_6 = 4024;

  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4+= VAR_6) {
    VAR_5 = FUNC_0(VAR_3-VAR_4, VAR_6);
    VAR_2 = FUNC_3(VAR_1->raw + VAR_4, VAR_5);
    if (VAR_2 != VAR_5) {
      FUNC_5(VAR_1->raw, VAR_2);
      FUNC_1();
    }
  }


  VAR_2 = FUNC_3(((void*)0), 0);
  if (VAR_2 != 0) {
    FUNC_5(VAR_1->raw, VAR_2);
    FUNC_1();
  }

  if (VAR_0 != 1) {
    FUNC_6("\n*** num_messages != 1 after testing '%s' ***\n\n", VAR_1->name);
    FUNC_1();
  }

  if(!FUNC_2(0, 0, VAR_1)) FUNC_1();
}
