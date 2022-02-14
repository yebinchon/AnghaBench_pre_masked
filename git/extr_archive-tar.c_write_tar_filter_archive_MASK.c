
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct child_process {char const** argv; int use_shell; int in; } ;
struct archiver_args {int compression_level; } ;
struct archiver {int data; } ;


 int FUNC_0 (char*) ;
 struct child_process VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ,...) ;
 scalar_t__ FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (struct child_process*) ;
 scalar_t__ FUNC_7 (struct child_process*) ;
 int FUNC_8 (struct strbuf*,char*,int ) ;
 int FUNC_9 (struct strbuf*,int ) ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (struct archiver const*,struct archiver_args*) ;

__attribute__((used)) static int FUNC_12(const struct archiver *VAR_2,
        struct archiver_args *VAR_3)
{
 struct strbuf VAR_4 = VAR_1;
 struct child_process VAR_5 = VAR_0;
 const char *VAR_6[2];
 int VAR_7;

 if (!VAR_2->data)
  FUNC_0("tar-filter archiver called with no filter defined");

 FUNC_9(&VAR_4, VAR_2->data);
 if (VAR_3->compression_level >= 0)
  FUNC_8(&VAR_4, " -%d", VAR_3->compression_level);

 VAR_6[0] = VAR_4.buf;
 VAR_6[1] = ((void*)0);
 VAR_5.argv = VAR_6;
 VAR_5.use_shell = 1;
 VAR_5.in = -1;

 if (FUNC_7(&VAR_5) < 0)
  FUNC_4(FUNC_1("unable to start '%s' filter"), VAR_6[0]);
 FUNC_2(1);
 if (FUNC_5(VAR_5.in, 1) < 0)
  FUNC_4(FUNC_1("unable to redirect descriptor"));
 FUNC_2(VAR_5.in);

 VAR_7 = FUNC_11(VAR_2, VAR_3);

 FUNC_2(1);
 if (FUNC_6(&VAR_5) != 0)
  FUNC_3(FUNC_1("'%s' filter reported error"), VAR_6[0]);

 FUNC_10(&VAR_4);
 return VAR_7;
}
