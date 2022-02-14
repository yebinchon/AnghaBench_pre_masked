
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {size_t len; char* buf; } ;
struct child_process {int args; } ;
struct TYPE_2__ {int program; } ;


 struct child_process VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,char*,char*,char const*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct child_process*,char*,size_t,struct strbuf*,int,struct strbuf*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*,size_t) ;
 int FUNC_8 (char*,char*) ;
 TYPE_1__* VAR_4 ;

int FUNC_9(struct strbuf *VAR_5, struct strbuf *VAR_6, const char *VAR_7)
{
 struct child_process VAR_8 = VAR_0;
 int VAR_9;
 size_t VAR_10, VAR_11, VAR_12;
 struct strbuf VAR_13 = VAR_3;

 FUNC_1(&VAR_8.args,
    VAR_4->program,
    "--status-fd=2",
    "-bsau", VAR_7,
    ((void*)0));

 VAR_12 = VAR_6->len;





 FUNC_5(VAR_1, VAR_2);
 VAR_9 = FUNC_3(&VAR_8, VAR_5->buf, VAR_5->len,
      VAR_6, 1024, &VAR_13, 0);
 FUNC_4(VAR_1);

 VAR_9 |= !FUNC_8(VAR_13.buf, "\n[GNUPG:] SIG_CREATED ");
 FUNC_6(&VAR_13);
 if (VAR_9)
  return FUNC_2(FUNC_0("gpg failed to sign the data"));


 for (VAR_10 = VAR_11 = VAR_12; VAR_10 < VAR_6->len; VAR_10++)
  if (VAR_6->buf[VAR_10] != '\r') {
   if (VAR_10 != VAR_11)
    VAR_6->buf[VAR_11] = VAR_6->buf[VAR_10];
   VAR_11++;
  }
 FUNC_7(VAR_6, VAR_11);

 return 0;
}
