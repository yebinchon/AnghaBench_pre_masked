
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct TYPE_2__ {char const* pack_name; int hash; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct strbuf*,int ,char*) ;
 TYPE_1__* VAR_1 ;
 char* FUNC_7 (struct strbuf*,int *) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int,char const*,int ) ;

__attribute__((used)) static char *FUNC_10(const char *VAR_2)
{
 static const char *VAR_3 = "fast-import";
 struct strbuf VAR_4 = VAR_0;
 int VAR_5;

 FUNC_6(&VAR_4, VAR_1->hash, "keep");
 VAR_5 = FUNC_5(VAR_4.buf);
 if (VAR_5 < 0)
  FUNC_2("cannot create keep file");
 FUNC_9(VAR_5, VAR_3, FUNC_8(VAR_3));
 if (FUNC_0(VAR_5))
  FUNC_2("failed to write keep file");

 FUNC_6(&VAR_4, VAR_1->hash, "pack");
 if (FUNC_3(VAR_1->pack_name, VAR_4.buf))
  FUNC_1("cannot store pack file");

 FUNC_6(&VAR_4, VAR_1->hash, "idx");
 if (FUNC_3(VAR_2, VAR_4.buf))
  FUNC_1("cannot store index file");
 FUNC_4((void *)VAR_2);
 return FUNC_7(&VAR_4, ((void*)0));
}
