
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct strbuf {unsigned long len; void* buf; } ;
struct object_id {int dummy; } ;
struct index_state {int dummy; } ;
struct diff_tempfile {int mode; int hex; TYPE_1__* tempfile; int name; } ;
struct TYPE_4__ {int fd; } ;


 struct strbuf VAR_0 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct index_state*,char const*,char const*,size_t,struct strbuf*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (void*,scalar_t__) ;
 int FUNC_7 (int ,struct object_id const*) ;
 int FUNC_8 (struct strbuf*,char const*) ;
 int FUNC_9 (struct strbuf*) ;
 scalar_t__ FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (int ,void*,unsigned long) ;
 int FUNC_12 (int ,int,char*,int) ;
 char* FUNC_13 (char const*) ;

__attribute__((used)) static void FUNC_14(struct index_state *VAR_1,
      const char *VAR_2, struct diff_tempfile *VAR_3,
      void *VAR_4,
      unsigned long VAR_5,
      const struct object_id *VAR_6,
      int VAR_7)
{
 struct strbuf VAR_8 = VAR_0;
 struct strbuf VAR_9 = VAR_0;
 char *VAR_10 = FUNC_13(VAR_2);
 const char *VAR_11 = FUNC_0(VAR_10);


 FUNC_8(&VAR_9, "XXXXXX_");
 FUNC_8(&VAR_9, VAR_11);

 VAR_3->tempfile = FUNC_6(VAR_9.buf, FUNC_10(VAR_11) + 1);
 if (!VAR_3->tempfile)
  FUNC_3("unable to create temp-file");
 if (FUNC_2(VAR_1, VAR_2,
   (const char *)VAR_4, (size_t)VAR_5, &VAR_8)) {
  VAR_4 = VAR_8.buf;
  VAR_5 = VAR_8.len;
 }
 if (FUNC_11(VAR_3->tempfile->fd, VAR_4, VAR_5) < 0 ||
     FUNC_1(VAR_3->tempfile))
  FUNC_3("unable to write temp-file");
 VAR_3->name = FUNC_5(VAR_3->tempfile);
 FUNC_7(VAR_3->hex, VAR_6);
 FUNC_12(VAR_3->mode, sizeof(VAR_3->mode), "%06o", VAR_7);
 FUNC_9(&VAR_8);
 FUNC_9(&VAR_9);
 FUNC_4(VAR_10);
}
