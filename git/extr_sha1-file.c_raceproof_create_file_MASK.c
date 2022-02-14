
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; int len; } ;
typedef enum scld_error { ____Placeholder_scld_error } scld_error ;
typedef int (* create_file_fn ) (char const*,void*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct strbuf VAR_5 ;
 int FUNC_0 (char const) ;
 int VAR_6 ;
 int FUNC_1 (struct strbuf*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 int FUNC_4 (struct strbuf*) ;

int FUNC_5(const char *VAR_7, create_file_fn VAR_8, void *VAR_9)
{






 int VAR_10 = 1;
 int VAR_11 = 3;


 struct strbuf VAR_12 = VAR_5;

 int VAR_13, VAR_14;


 FUNC_0(*VAR_7);

retry_fn:
 VAR_13 = VAR_8(VAR_7, VAR_9);
 VAR_14 = VAR_6;
 if (!VAR_13)
  goto out;

 if (VAR_6 == VAR_0 && VAR_10-- > 0) {




  if (!VAR_12.len)
   FUNC_3(&VAR_12, VAR_7);

  if (!FUNC_1(&VAR_12, VAR_2))
   goto retry_fn;
 } else if (VAR_6 == VAR_1 && VAR_11-- > 0) {






  enum scld_error VAR_15;

  if (!VAR_12.len)
   FUNC_3(&VAR_12, VAR_7);

  do {
   VAR_15 = FUNC_2(VAR_12.buf);
   if (VAR_15 == VAR_3)
    goto retry_fn;
  } while (VAR_15 == VAR_4 && VAR_11-- > 0);
 }

out:
 FUNC_4(&VAR_12);
 VAR_6 = VAR_14;
 return VAR_13;
}
