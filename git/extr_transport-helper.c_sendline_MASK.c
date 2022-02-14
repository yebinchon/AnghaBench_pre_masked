
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char* buf; int len; } ;
struct helper_data {TYPE_1__* helper; } ;
struct TYPE_2__ {int in; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_4(struct helper_data *VAR_2, struct strbuf *VAR_3)
{
 if (VAR_0)
  FUNC_2(VAR_1, "Debug: Remote helper: -> %s", VAR_3->buf);
 if (FUNC_3(VAR_2->helper->in, VAR_3->buf, VAR_3->len) < 0)
  FUNC_1(FUNC_0("full write to remote helper failed"));
}
