
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int len; } ;
struct ref {int new_oid; int name; } ;
struct TYPE_2__ {int nr; } ;
struct helper_data {TYPE_1__ rs; scalar_t__ no_private_update; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct strbuf*,struct ref**,struct ref*) ;
 scalar_t__ FUNC_3 (struct helper_data*,struct strbuf*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (char*,char*,int *,int *,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct helper_data *VAR_2,
        struct ref *VAR_3,
        int VAR_4)
{
 struct strbuf VAR_5 = VAR_0;
 struct ref *VAR_6 = VAR_3;
 int VAR_7 = 0;

 for (;;) {
  char *VAR_8;

  if (FUNC_3(VAR_2, &VAR_5)) {
   VAR_7 = 1;
   break;
  }

  if (!VAR_5.len)
   break;

  if (FUNC_2(&VAR_5, &VAR_6, VAR_3))
   continue;

  if (VAR_4 & VAR_1 || !VAR_2->rs.nr || VAR_2->no_private_update)
   continue;


  VAR_8 = FUNC_0(&VAR_2->rs, VAR_6->name);
  if (!VAR_8)
   continue;
  FUNC_5("update by helper", VAR_8, &VAR_6->new_oid, ((void*)0),
      0, 0);
  FUNC_1(VAR_8);
 }
 FUNC_4(&VAR_5);
 return VAR_7;
}
