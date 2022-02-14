
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buf; } ;
struct tmp_objdir {TYPE_1__ path; int env; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,char*,int ) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 struct tmp_objdir* VAR_5 ;
 int FUNC_13 (struct tmp_objdir*) ;
 int FUNC_14 (struct tmp_objdir*) ;
 struct tmp_objdir* FUNC_15 (int) ;

struct tmp_objdir *FUNC_16(void)
{
 static int VAR_6;
 struct tmp_objdir *VAR_7;

 if (VAR_5)
  FUNC_0("only one tmp_objdir can be used at a time");

 VAR_7 = FUNC_15(sizeof(*VAR_7));
 FUNC_12(&VAR_7->path, 0);
 FUNC_2(&VAR_7->env);

 FUNC_10(&VAR_7->path, "%s/incoming-XXXXXX", FUNC_6());







 FUNC_11(&VAR_7->path, 1024);

 if (!FUNC_7(VAR_7->path.buf)) {

  FUNC_14(VAR_7);
  return ((void*)0);
 }

 VAR_5 = VAR_7;
 if (!VAR_6) {
  FUNC_3(VAR_3);
  FUNC_9(VAR_4);
  VAR_6++;
 }

 if (FUNC_8(VAR_7->path.buf)) {
  FUNC_13(VAR_7);
  return ((void*)0);
 }

 FUNC_4(&VAR_7->env, VAR_0,
     FUNC_1(FUNC_6()));
 FUNC_5(&VAR_7->env, VAR_1, FUNC_1(VAR_7->path.buf));
 FUNC_5(&VAR_7->env, VAR_2,
      FUNC_1(VAR_7->path.buf));

 return VAR_7;
}
