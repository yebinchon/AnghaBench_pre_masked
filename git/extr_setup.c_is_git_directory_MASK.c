
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; scalar_t__ buf; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct strbuf*,char const*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 int FUNC_4 (struct strbuf*,char) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*,size_t) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

int FUNC_9(const char *VAR_3)
{
 struct strbuf VAR_4 = VAR_1;
 int VAR_5 = 0;
 size_t VAR_6;


 FUNC_3(&VAR_4, VAR_3);
 FUNC_4(&VAR_4, '/');
 FUNC_3(&VAR_4, "HEAD");
 if (FUNC_8(VAR_4.buf))
  goto done;

 FUNC_6(&VAR_4);
 FUNC_1(&VAR_4, VAR_3);
 VAR_6 = VAR_4.len;


 if (FUNC_2(VAR_0)) {
  if (FUNC_0(FUNC_2(VAR_0), VAR_2))
   goto done;
 }
 else {
  FUNC_7(&VAR_4, VAR_6);
  FUNC_3(&VAR_4, "/objects");
  if (FUNC_0(VAR_4.buf, VAR_2))
   goto done;
 }

 FUNC_7(&VAR_4, VAR_6);
 FUNC_3(&VAR_4, "/refs");
 if (FUNC_0(VAR_4.buf, VAR_2))
  goto done;

 VAR_5 = 1;
done:
 FUNC_5(&VAR_4);
 return VAR_5;
}
