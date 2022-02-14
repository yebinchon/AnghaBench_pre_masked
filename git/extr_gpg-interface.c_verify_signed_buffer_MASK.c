
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf; } ;
struct tempfile {TYPE_1__ filename; int fd; } ;
struct strbuf {int buf; } ;
struct gpg_format {int verify_args; int program; } ;
struct child_process {int args; } ;


 int FUNC_0 (char*,char const*) ;
 struct child_process VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,char*,int ,char*,int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (struct tempfile*) ;
 int FUNC_6 (struct tempfile**) ;
 int FUNC_7 (int ,...) ;
 struct gpg_format* FUNC_8 (char const*) ;
 struct tempfile* FUNC_9 (char*) ;
 int FUNC_10 (struct child_process*,char const*,size_t,struct strbuf*,int ,struct strbuf*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct strbuf*) ;
 int FUNC_14 (int ,char*) ;
 scalar_t__ FUNC_15 (int ,char const*,size_t) ;

int FUNC_16(const char *VAR_4, size_t VAR_5,
    const char *VAR_6, size_t VAR_7,
    struct strbuf *VAR_8, struct strbuf *VAR_9)
{
 struct child_process VAR_10 = VAR_0;
 struct gpg_format *VAR_11;
 struct tempfile *VAR_12;
 int VAR_13;
 struct strbuf VAR_14 = VAR_3;

 VAR_12 = FUNC_9(".git_vtag_tmpXXXXXX");
 if (!VAR_12)
  return FUNC_7(FUNC_1("could not create temporary file"));
 if (FUNC_15(VAR_12->fd, VAR_6, VAR_7) < 0 ||
     FUNC_5(VAR_12) < 0) {
  FUNC_7(FUNC_1("failed writing detached signature to '%s'"),
       VAR_12->filename.buf);
  FUNC_6(&VAR_12);
  return -1;
 }

 VAR_11 = FUNC_8(VAR_6);
 if (!VAR_11)
  FUNC_0("bad signature '%s'", VAR_6);

 FUNC_2(&VAR_10.args, VAR_11->program);
 FUNC_4(&VAR_10.args, VAR_11->verify_args);
 FUNC_3(&VAR_10.args,
    "--status-fd=1",
    "--verify", VAR_12->filename.buf, "-",
    ((void*)0));

 if (!VAR_9)
  VAR_9 = &VAR_14;

 FUNC_12(VAR_1, VAR_2);
 VAR_13 = FUNC_10(&VAR_10, VAR_4, VAR_5,
      VAR_9, 0, VAR_8, 0);
 FUNC_11(VAR_1);

 FUNC_6(&VAR_12);

 VAR_13 |= !FUNC_14(VAR_9->buf, "\n[GNUPG:] GOODSIG ");
 FUNC_13(&VAR_14);

 return VAR_13;
}
