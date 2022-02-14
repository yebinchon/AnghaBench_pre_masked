
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int buf; int len; } ;
struct repository {TYPE_2__* objects; } ;
struct TYPE_4__ {TYPE_1__* odb; } ;
struct TYPE_3__ {int path; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (struct repository*,int ,char const*,int,int ) ;
 char* FUNC_4 (char const*,int,struct strbuf*) ;
 int FUNC_5 (struct strbuf*,int ) ;
 scalar_t__ FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*) ;

__attribute__((used)) static void FUNC_8(struct repository *VAR_1, const char *VAR_2,
     int VAR_3, const char *VAR_4, int VAR_5)
{
 struct strbuf VAR_6 = VAR_0;
 struct strbuf VAR_7 = VAR_0;

 if (!VAR_2 || !*VAR_2)
  return;

 if (VAR_5 > 5) {
  FUNC_2(FUNC_0("%s: ignoring alternate object stores, nesting too deep"),
    VAR_4);
  return;
 }

 FUNC_5(&VAR_6, VAR_1->objects->odb->path);
 if (FUNC_6(&VAR_6) < 0)
  FUNC_1(FUNC_0("unable to normalize object directory: %s"),
      VAR_6.buf);

 while (*VAR_2) {
  VAR_2 = FUNC_4(VAR_2, VAR_3, &VAR_7);
  if (!VAR_7.len)
   continue;
  FUNC_3(VAR_1, VAR_7.buf,
       VAR_4, VAR_5, VAR_6.buf);
 }
 FUNC_7(&VAR_7);
 FUNC_7(&VAR_6);
}
