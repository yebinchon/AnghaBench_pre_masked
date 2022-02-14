
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_2__ {scalar_t__ nr; } ;
struct remote {scalar_t__ mirror; int name; TYPE_1__ push; } ;
struct branch {char* refname; int name; } ;


 int FUNC_0 (char*) ;






 int FUNC_1 (char*) ;
 char* FUNC_2 (TYPE_1__*,char*) ;
 char const* FUNC_3 (struct branch*,struct strbuf*) ;
 char const* FUNC_4 (struct strbuf*,int ,...) ;
 int FUNC_5 (char*) ;
 int VAR_0 ;
 int FUNC_6 (struct branch*,int *) ;
 struct remote* FUNC_7 (int ) ;
 int FUNC_8 (char const*,char const*) ;
 char const* FUNC_9 (struct remote*,char*,struct strbuf*) ;

__attribute__((used)) static const char *FUNC_10(struct branch *VAR_1, struct strbuf *VAR_2)
{
 struct remote *VAR_3;

 VAR_3 = FUNC_7(FUNC_6(VAR_1, ((void*)0)));
 if (!VAR_3)
  return FUNC_4(VAR_2,
     FUNC_1("branch '%s' has no remote for pushing"),
     VAR_1->name);

 if (VAR_3->push.nr) {
  char *VAR_4;
  const char *VAR_5;

  VAR_4 = FUNC_2(&VAR_3->push, VAR_1->refname);
  if (!VAR_4)
   return FUNC_4(VAR_2,
      FUNC_1("push refspecs for '%s' do not include '%s'"),
      VAR_3->name, VAR_1->name);

  VAR_5 = FUNC_9(VAR_3, VAR_4, VAR_2);
  FUNC_5(VAR_4);
  return VAR_5;
 }

 if (VAR_3->mirror)
  return FUNC_9(VAR_3, VAR_1->refname, VAR_2);

 switch (VAR_0) {
 case 131:
  return FUNC_4(VAR_2, FUNC_1("push has no destination (push.default is 'nothing')"));

 case 132:
 case 133:
  return FUNC_9(VAR_3, VAR_1->refname, VAR_2);

 case 128:
  return FUNC_3(VAR_1, VAR_2);

 case 129:
 case 130:
  {
   const char *VAR_6, *VAR_7;

   VAR_6 = FUNC_3(VAR_1, VAR_2);
   if (!VAR_6)
    return ((void*)0);
   VAR_7 = FUNC_9(VAR_3, VAR_1->refname, VAR_2);
   if (!VAR_7)
    return ((void*)0);
   if (FUNC_8(VAR_7, VAR_6))
    return FUNC_4(VAR_2,
       FUNC_1("cannot resolve 'simple' push to a single destination"));
   return VAR_7;
  }
 }

 FUNC_0("unhandled push situation");
}
