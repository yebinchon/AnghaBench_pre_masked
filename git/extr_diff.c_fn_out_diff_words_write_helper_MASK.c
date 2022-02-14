
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; int buf; } ;
struct diff_words_style_elem {char const* color; char const* prefix; char const* suffix; } ;
struct diff_options {int dummy; } ;


 int VAR_0 ;
 char* VAR_1 ;
 struct strbuf VAR_2 ;
 char const* FUNC_0 (struct diff_options*) ;
 int FUNC_1 (struct diff_options*,int ,int ,scalar_t__,int ) ;
 char* FUNC_2 (char const*,char,size_t) ;
 int FUNC_3 (struct strbuf*,char const*,int) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct strbuf*) ;

__attribute__((used)) static int FUNC_7(struct diff_options *VAR_3,
       struct diff_words_style_elem *VAR_4,
       const char *VAR_5,
       size_t VAR_6, const char *VAR_7)
{
 int VAR_8 = 0;
 struct strbuf VAR_9 = VAR_2;

 while (VAR_6) {
  char *VAR_10 = FUNC_2(VAR_7, '\n', VAR_6);
  if (VAR_8)
   FUNC_4(&VAR_9, FUNC_0(VAR_3));

  if (VAR_10 != VAR_7) {
   const char *VAR_11 = VAR_4->color && *VAR_4->color ?
         VAR_1 : ((void*)0);
   if (VAR_4->color && *VAR_4->color)
    FUNC_4(&VAR_9, VAR_4->color);
   FUNC_4(&VAR_9, VAR_4->prefix);
   FUNC_3(&VAR_9, VAR_7, VAR_10 ? VAR_10 - VAR_7 : VAR_6);
   FUNC_4(&VAR_9, VAR_4->suffix);
   if (VAR_11)
    FUNC_4(&VAR_9, VAR_11);
  }
  if (!VAR_10)
   goto out;

  FUNC_4(&VAR_9, VAR_5);
  VAR_6 -= VAR_10 + 1 - VAR_7;
  VAR_7 = VAR_10 + 1;
  VAR_8 = 1;
  if (VAR_6) {
   FUNC_1(VAR_3, VAR_0,
      VAR_9.buf, VAR_9.len, 0);
   FUNC_6(&VAR_9);
  }
 }

out:
 if (VAR_9.len)
  FUNC_1(VAR_3, VAR_0,
     VAR_9.buf, VAR_9.len, 0);
 FUNC_5(&VAR_9);
 return 0;
}
