
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (char const*,struct object_id*,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (char const*,struct object_id*) ;
 char const* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (char const*,char) ;

__attribute__((used)) static void FUNC_9(const char *VAR_5)
{
 struct object_id VAR_6;
 if (!FUNC_6(VAR_5, &VAR_6)) {
  FUNC_1(VAR_5, &VAR_6, 0);
  return;
 }
 if (FUNC_8(VAR_5, '*') || FUNC_8(VAR_5, '?') || FUNC_8(VAR_5, '[')) {

  int VAR_7 = VAR_4;

  VAR_2 = VAR_5;
  VAR_3 = FUNC_2(VAR_5);
  FUNC_5(VAR_1, ((void*)0));
  if (VAR_7 == VAR_4 &&
      VAR_4 < VAR_0)
   FUNC_4(FUNC_0("no matching refs with %s"), VAR_5);
  FUNC_7(VAR_7, VAR_4);
  return;
 }
 FUNC_3("bad sha1 reference %s", VAR_5);
}
