
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; int buf; } ;
struct dirent {char* d_name; } ;
typedef int (* each_file_in_pack_dir_fn ) (int ,size_t,char*,void*) ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (char*) ;
 int * FUNC_3 (int ) ;
 struct dirent* FUNC_4 (int *) ;
 int FUNC_5 (struct strbuf*,char) ;
 int FUNC_6 (struct strbuf*,char const*) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (struct strbuf*,size_t) ;

void FUNC_9(const char *VAR_3,
          each_file_in_pack_dir_fn VAR_4,
          void *VAR_5)
{
 struct strbuf VAR_6 = VAR_1;
 size_t VAR_7;
 DIR *VAR_8;
 struct dirent *VAR_9;

 FUNC_6(&VAR_6, VAR_3);
 FUNC_6(&VAR_6, "/pack");
 VAR_8 = FUNC_3(VAR_6.buf);
 if (!VAR_8) {
  if (VAR_2 != VAR_0)
   FUNC_1("unable to open object pack directory: %s",
        VAR_6.buf);
  FUNC_7(&VAR_6);
  return;
 }
 FUNC_5(&VAR_6, '/');
 VAR_7 = VAR_6.len;
 while ((VAR_9 = FUNC_4(VAR_8)) != ((void*)0)) {
  if (FUNC_2(VAR_9->d_name))
   continue;

  FUNC_8(&VAR_6, VAR_7);
  FUNC_6(&VAR_6, VAR_9->d_name);

  VAR_4(VAR_6.buf, VAR_6.len, VAR_9->d_name, VAR_5);
 }

 FUNC_0(VAR_8);
 FUNC_7(&VAR_6);
}
