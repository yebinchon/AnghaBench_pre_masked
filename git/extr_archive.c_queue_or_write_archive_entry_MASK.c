
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {scalar_t__ len; int buf; } ;
struct object_id {int hash; } ;
struct directory {scalar_t__ len; struct directory* up; int path; } ;
struct attr_check {int dummy; } ;
struct archiver_context {TYPE_2__* args; struct directory* bottom; } ;
struct TYPE_4__ {TYPE_1__* repo; } ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (struct attr_check const*) ;
 int FUNC_2 (struct directory*) ;
 struct attr_check* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct strbuf*,char const*,unsigned int,int,struct archiver_context*) ;
 int FUNC_5 (struct strbuf*,char) ;
 int FUNC_6 (struct strbuf*,char const*) ;
 int FUNC_7 (struct strbuf*,size_t) ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (struct object_id const*,int ,size_t,char const*,unsigned int,int,void*) ;
 scalar_t__ FUNC_10 (struct archiver_context*) ;

__attribute__((used)) static int FUNC_11(const struct object_id *VAR_1,
  struct strbuf *VAR_2, const char *VAR_3,
  unsigned VAR_4, int VAR_5, void *VAR_6)
{
 struct archiver_context *VAR_7 = VAR_6;

 while (VAR_7->bottom &&
        !(VAR_2->len >= VAR_7->bottom->len &&
   !FUNC_8(VAR_2->buf, VAR_7->bottom->path, VAR_7->bottom->len))) {
  struct directory *VAR_8 = VAR_7->bottom->up;
  FUNC_2(VAR_7->bottom);
  VAR_7->bottom = VAR_8;
 }

 if (FUNC_0(VAR_4)) {
  size_t VAR_9 = VAR_2->len;
  const struct attr_check *VAR_10;


  FUNC_6(VAR_2, VAR_3);
  FUNC_5(VAR_2, '/');
  VAR_10 = FUNC_3(VAR_7->args->repo->index, VAR_2->buf);
  FUNC_7(VAR_2, VAR_9);

  if (FUNC_1(VAR_10))
   return 0;
  FUNC_4(VAR_1->hash, VAR_2, VAR_3,
    VAR_4, VAR_5, VAR_7);
  return VAR_0;
 }

 if (FUNC_10(VAR_7))
  return -1;
 return FUNC_9(VAR_1, VAR_2->buf, VAR_2->len, VAR_3, VAR_4,
       VAR_5, VAR_6);
}
