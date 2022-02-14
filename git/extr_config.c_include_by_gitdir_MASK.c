
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; scalar_t__ buf; } ;
struct config_options {char* git_dir; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct strbuf*) ;
 int FUNC_1 (struct strbuf*,char const*,size_t) ;
 int FUNC_2 (struct strbuf*,char const*) ;
 int FUNC_3 (struct strbuf*,char const*,int) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,int) ;
 int FUNC_8 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_9(const struct config_options *VAR_3,
        const char *VAR_4, size_t VAR_5, int VAR_6)
{
 struct strbuf VAR_7 = VAR_0;
 struct strbuf VAR_8 = VAR_0;
 int VAR_9 = 0, VAR_10;
 const char *VAR_11;
 int VAR_12 = 0;

 if (VAR_3->git_dir)
  VAR_11 = VAR_3->git_dir;
 else
  goto done;

 FUNC_3(&VAR_7, VAR_11, 1);
 FUNC_1(&VAR_8, VAR_4, VAR_5);
 VAR_10 = FUNC_0(&VAR_8);

again:
 if (VAR_10 < 0)
  goto done;

 if (VAR_10 > 0) {




  if (VAR_7.len < VAR_10)
   goto done;
  if (!VAR_6 && FUNC_7(VAR_8.buf, VAR_7.buf, VAR_10))
   goto done;
  if (VAR_6 && FUNC_6(VAR_8.buf, VAR_7.buf, VAR_10))
   goto done;
 }

 VAR_9 = !FUNC_8(VAR_8.buf + VAR_10, VAR_7.buf + VAR_10,
    VAR_2 | (VAR_6 ? VAR_1 : 0));

 if (!VAR_9 && !VAR_12) {
  FUNC_5(&VAR_7);
  FUNC_2(&VAR_7, VAR_11);
  VAR_12 = 1;
  goto again;
 }
done:
 FUNC_4(&VAR_8);
 FUNC_4(&VAR_7);
 return VAR_9;
}
