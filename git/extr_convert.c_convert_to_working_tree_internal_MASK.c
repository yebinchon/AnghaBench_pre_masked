
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char* buf; size_t len; } ;
struct index_state {int dummy; } ;
struct delayed_checkout {int dummy; } ;
struct conv_attrs {TYPE_1__* drv; int working_tree_encoding; int crlf_action; int ident; } ;
struct TYPE_2__ {int name; scalar_t__ required; scalar_t__ process; scalar_t__ smudge; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char const*,size_t,int,struct strbuf*,TYPE_1__*,int ,struct delayed_checkout*) ;
 int FUNC_2 (struct index_state const*,struct conv_attrs*,char const*) ;
 int FUNC_3 (char const*,size_t,struct strbuf*,int ) ;
 int FUNC_4 (int ,char const*,int ) ;
 int FUNC_5 (char const*,char const*,size_t,struct strbuf*,int ) ;
 int FUNC_6 (char const*,size_t,struct strbuf*,int ) ;

__attribute__((used)) static int FUNC_7(const struct index_state *VAR_1,
         const char *VAR_2, const char *VAR_3,
         size_t VAR_4, struct strbuf *VAR_5,
         int VAR_6, struct delayed_checkout *VAR_7)
{
 int VAR_8 = 0, VAR_9 = 0;
 struct conv_attrs VAR_10;

 FUNC_2(VAR_1, &VAR_10, VAR_2);

 VAR_8 |= FUNC_6(VAR_3, VAR_4, VAR_5, VAR_10.ident);
 if (VAR_8) {
  VAR_3 = VAR_5->buf;
  VAR_4 = VAR_5->len;
 }





 if ((VAR_10.drv && (VAR_10.drv->smudge || VAR_10.drv->process)) || !VAR_6) {
  VAR_8 |= FUNC_3(VAR_3, VAR_4, VAR_5, VAR_10.crlf_action);
  if (VAR_8) {
   VAR_3 = VAR_5->buf;
   VAR_4 = VAR_5->len;
  }
 }

 VAR_8 |= FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5, VAR_10.working_tree_encoding);
 if (VAR_8) {
  VAR_3 = VAR_5->buf;
  VAR_4 = VAR_5->len;
 }

 VAR_9 = FUNC_1(
  VAR_2, VAR_3, VAR_4, -1, VAR_5, VAR_10.drv, VAR_0, VAR_7);
 if (!VAR_9 && VAR_10.drv && VAR_10.drv->required)
  FUNC_4(FUNC_0("%s: smudge filter %s failed"), VAR_2, VAR_10.drv->name);

 return VAR_8 | VAR_9;
}
