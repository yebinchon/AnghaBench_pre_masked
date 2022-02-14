
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ (* find_func ) (char*,int,char*,int,int ) ;int find_func_priv; } ;
typedef TYPE_3__ xdemitconf_t ;
struct userdiff_funcname {int cflags; scalar_t__ pattern; } ;
struct grep_source {TYPE_2__* driver; } ;
struct grep_opt {TYPE_3__* priv; TYPE_1__* repo; } ;
struct TYPE_6__ {struct userdiff_funcname funcname; } ;
struct TYPE_5__ {int index; } ;


 int FUNC_0 (struct grep_source*,int ) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char*,int,char*,int,int ) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct grep_opt *VAR_0, struct grep_source *VAR_1, char *VAR_2, char *VAR_3)
{
 xdemitconf_t *VAR_4 = VAR_0->priv;
 if (VAR_4 && !VAR_4->find_func) {
  FUNC_0(VAR_1, VAR_0->repo->index);
  if (VAR_1->driver->funcname.pattern) {
   const struct userdiff_funcname *VAR_5 = &VAR_1->driver->funcname;
   FUNC_3(VAR_4, VAR_5->pattern, VAR_5->cflags);
  } else {
   VAR_4 = VAR_0->priv = ((void*)0);
  }
 }

 if (VAR_4) {
  char VAR_6[1];
  return VAR_4->find_func(VAR_2, VAR_3 - VAR_2, VAR_6, 1,
     VAR_4->find_func_priv) >= 0;
 }

 if (VAR_2 == VAR_3)
  return 0;
 if (FUNC_1(*VAR_2) || *VAR_2 == '_' || *VAR_2 == '$')
  return 1;
 return 0;
}
