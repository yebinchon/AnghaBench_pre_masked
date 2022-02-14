
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int buf; scalar_t__ len; } ;
struct TYPE_2__ {int hash; } ;
struct directory {unsigned int mode; int stage; TYPE_1__ oid; int path; int len; scalar_t__ baselen; struct directory* up; } ;
struct archiver_context {struct directory* bottom; } ;


 int FUNC_0 (int ,unsigned char const*) ;
 int FUNC_1 (int,size_t) ;
 size_t FUNC_2 (scalar_t__,int,int ,int) ;
 int FUNC_3 (char const*) ;
 struct directory* FUNC_4 (int ) ;
 int FUNC_5 (int ,size_t,char*,int,int ,char const*) ;

__attribute__((used)) static void FUNC_6(const unsigned char *VAR_0,
  struct strbuf *VAR_1, const char *VAR_2,
  unsigned VAR_3, int VAR_4, struct archiver_context *VAR_5)
{
 struct directory *VAR_6;
 size_t VAR_7 = FUNC_2(VAR_1->len, 1, FUNC_3(VAR_2), 1);
 VAR_6 = FUNC_4(FUNC_1(sizeof(*VAR_6), VAR_7));
 VAR_6->up = VAR_5->bottom;
 VAR_6->baselen = VAR_1->len;
 VAR_6->mode = VAR_3;
 VAR_6->stage = VAR_4;
 VAR_5->bottom = VAR_6;
 VAR_6->len = FUNC_5(VAR_6->path, VAR_7, "%.*s%s/", (int)VAR_1->len, VAR_1->buf, VAR_2);
 FUNC_0(VAR_6->oid.hash, VAR_0);
}
