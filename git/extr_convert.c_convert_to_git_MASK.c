
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char* buf; size_t len; } ;
struct index_state {int dummy; } ;
struct conv_attrs {int ident; int crlf_action; int working_tree_encoding; TYPE_1__* drv; } ;
struct TYPE_2__ {int name; scalar_t__ required; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char const*,size_t,int,struct strbuf*,TYPE_1__*,int ,int *) ;
 int FUNC_2 (struct index_state const*,struct conv_attrs*,char const*) ;
 int FUNC_3 (struct index_state const*,char const*,char const*,size_t,struct strbuf*,int ,int) ;
 int FUNC_4 (int ,char const*,int ) ;
 int FUNC_5 (char const*,char const*,size_t,struct strbuf*,int ,int) ;
 int FUNC_6 (char const*,size_t,struct strbuf*,int ) ;

int FUNC_7(const struct index_state *VAR_2,
     const char *VAR_3, const char *VAR_4, size_t VAR_5,
     struct strbuf *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 struct conv_attrs VAR_9;

 FUNC_2(VAR_2, &VAR_9, VAR_3);

 VAR_8 |= FUNC_1(VAR_3, VAR_4, VAR_5, -1, VAR_6, VAR_9.drv, VAR_0, ((void*)0));
 if (!VAR_8 && VAR_9.drv && VAR_9.drv->required)
  FUNC_4(FUNC_0("%s: clean filter '%s' failed"), VAR_3, VAR_9.drv->name);

 if (VAR_8 && VAR_6) {
  VAR_4 = VAR_6->buf;
  VAR_5 = VAR_6->len;
 }

 VAR_8 |= FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6, VAR_9.working_tree_encoding, VAR_7);
 if (VAR_8 && VAR_6) {
  VAR_4 = VAR_6->buf;
  VAR_5 = VAR_6->len;
 }

 if (!(VAR_7 & VAR_1)) {
  VAR_8 |= FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_9.crlf_action, VAR_7);
  if (VAR_8 && VAR_6) {
   VAR_4 = VAR_6->buf;
   VAR_5 = VAR_6->len;
  }
 }
 return VAR_8 | FUNC_6(VAR_4, VAR_5, VAR_6, VAR_9.ident);
}
