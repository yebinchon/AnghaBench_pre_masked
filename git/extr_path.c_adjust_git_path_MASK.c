
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {char* buf; int len; } ;
struct repository {int commondir; scalar_t__ different_commondir; TYPE_2__* objects; int index_file; int graft_file; } ;
struct TYPE_4__ {TYPE_1__* odb; } ;
struct TYPE_3__ {scalar_t__ path; } ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (char const*,char*,char*) ;
 int FUNC_2 (struct strbuf*,int,scalar_t__) ;
 int FUNC_3 (struct strbuf*,int ,int ,int ,int ) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct strbuf*,int,int ) ;

__attribute__((used)) static void FUNC_7(const struct repository *VAR_1,
       struct strbuf *VAR_2, int VAR_3)
{
 const char *VAR_4 = VAR_2->buf + VAR_3;
 if (FUNC_1(VAR_4, "info", "grafts"))
  FUNC_3(VAR_2, 0, VAR_2->len,
         VAR_1->graft_file, FUNC_5(VAR_1->graft_file));
 else if (!FUNC_4(VAR_4, "index"))
  FUNC_3(VAR_2, 0, VAR_2->len,
         VAR_1->index_file, FUNC_5(VAR_1->index_file));
 else if (FUNC_0(VAR_4, "objects"))
  FUNC_2(VAR_2, VAR_3 + 7, VAR_1->objects->odb->path);
 else if (VAR_0 && FUNC_0(VAR_4, "hooks"))
  FUNC_2(VAR_2, VAR_3 + 5, VAR_0);
 else if (VAR_1->different_commondir)
  FUNC_6(VAR_2, VAR_3, VAR_1->commondir);
}
