
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct branch {char const* push_tracking_ref; } ;


 int FUNC_0 (char*) ;
 char const* FUNC_1 (struct branch*,struct strbuf*) ;
 char const* FUNC_2 (struct strbuf*,int ) ;

const char *FUNC_3(struct branch *VAR_0, struct strbuf *VAR_1)
{
 if (!VAR_0)
  return FUNC_2(VAR_1, FUNC_0("HEAD does not point to a branch"));

 if (!VAR_0->push_tracking_ref)
  VAR_0->push_tracking_ref = FUNC_1(VAR_0, VAR_1);
 return VAR_0->push_tracking_ref;
}
