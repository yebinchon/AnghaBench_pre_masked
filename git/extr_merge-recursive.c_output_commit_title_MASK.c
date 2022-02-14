
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct merge_remote_desc {int name; } ;
struct merge_options {int obuf; TYPE_1__* priv; } ;
struct TYPE_4__ {int oid; } ;
struct commit {TYPE_2__ object; } ;
struct TYPE_3__ {int call_depth; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char const**) ;
 int FUNC_2 (struct merge_options*) ;
 char* FUNC_3 (struct commit*,int *) ;
 struct merge_remote_desc* FUNC_4 (struct commit*) ;
 scalar_t__ FUNC_5 (struct commit*) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,char) ;
 int FUNC_8 (int *,char,int) ;
 int FUNC_9 (int *,char*,int,...) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (struct commit*,char const*) ;

__attribute__((used)) static void FUNC_12(struct merge_options *VAR_1, struct commit *VAR_2)
{
 struct merge_remote_desc *VAR_3;

 FUNC_8(&VAR_1->obuf, ' ', VAR_1->priv->call_depth * 2);
 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3)
  FUNC_9(&VAR_1->obuf, "virtual %s\n", VAR_3->name);
 else {
  FUNC_6(&VAR_1->obuf, &VAR_2->object.oid,
      VAR_0);
  FUNC_7(&VAR_1->obuf, ' ');
  if (FUNC_5(VAR_2) != 0)
   FUNC_10(&VAR_1->obuf, FUNC_0("(bad commit)\n"));
  else {
   const char *VAR_4;
   const char *VAR_5 = FUNC_3(VAR_2, ((void*)0));
   int VAR_6 = FUNC_1(VAR_5, &VAR_4);
   if (VAR_6)
    FUNC_9(&VAR_1->obuf, "%.*s\n", VAR_6, VAR_4);
   FUNC_11(VAR_2, VAR_5);
  }
 }
 FUNC_2(VAR_1);
}
