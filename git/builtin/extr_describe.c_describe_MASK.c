
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct object_id {int dummy; } ;
struct commit {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (struct commit*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct object_id,struct strbuf*) ;
 int FUNC_3 (struct object_id*,struct strbuf*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int ,char*,char const*) ;
 scalar_t__ FUNC_6 (char const*,struct object_id*) ;
 struct commit* FUNC_7 (int ,struct object_id*,int) ;
 scalar_t__ FUNC_8 (int ,struct object_id*,int *) ;
 int FUNC_9 (int ) ;
 int VAR_3 ;
 int FUNC_10 (struct strbuf*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_11(const char *VAR_5, int VAR_6)
{
 struct object_id VAR_7;
 struct commit *VAR_8;
 struct strbuf VAR_9 = VAR_1;

 if (VAR_2)
  FUNC_5(VAR_3, FUNC_0("describe %s\n"), VAR_5);

 if (FUNC_6(VAR_5, &VAR_7))
  FUNC_4(FUNC_0("Not a valid object name %s"), VAR_5);
 VAR_8 = FUNC_7(VAR_4, &VAR_7, 1);

 if (VAR_8)
  FUNC_3(&VAR_7, &VAR_9);
 else if (FUNC_8(VAR_4, &VAR_7, ((void*)0)) == VAR_0)
  FUNC_2(VAR_7, &VAR_9);
 else
  FUNC_4(FUNC_0("%s is neither a commit nor blob"), VAR_5);

 FUNC_9(VAR_9.buf);

 if (!VAR_6)
  FUNC_1(VAR_8, -1);

 FUNC_10(&VAR_9);
}
