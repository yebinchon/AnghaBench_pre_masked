
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
typedef int line ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct object_id*,int ,char const*,int ) ;
 int FUNC_2 (struct object_id*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int,int ) ;
 scalar_t__ FUNC_10 (char*,struct object_id*) ;
 scalar_t__ FUNC_11 (char*,struct object_id*,char const**) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_12(void)
{
 char VAR_6[VAR_1 + 1 + VAR_3 + 2];
 struct object_id VAR_7;
 const char *VAR_8;

 for (;;) {
  if (!FUNC_9(VAR_6, sizeof(VAR_6), VAR_5)) {
   if (FUNC_7(VAR_5))
    break;
   if (!FUNC_8(VAR_5))
    FUNC_5("BUG: fgets returned NULL, not EOF, not error!");
   if (VAR_4 != VAR_0)
    FUNC_6("fgets");
   FUNC_4(VAR_5);
   continue;
  }
  if (VAR_6[0] == '-') {
   if (FUNC_10(VAR_6+1, &VAR_7))
    FUNC_5(FUNC_0("expected edge object ID, got garbage:\n %s"),
        VAR_6);
   FUNC_2(&VAR_7);
   continue;
  }
  if (FUNC_11(VAR_6, &VAR_7, &VAR_8))
   FUNC_5(FUNC_0("expected object ID, got garbage:\n %s"), VAR_6);

  FUNC_3(VAR_8 + 1);
  FUNC_1(&VAR_7, VAR_2, VAR_8 + 1, 0);
 }
}
