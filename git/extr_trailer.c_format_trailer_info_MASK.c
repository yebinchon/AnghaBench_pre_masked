
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trailer_info {size_t trailer_nr; char** trailers; scalar_t__ trailer_start; scalar_t__ trailer_end; } ;
struct strbuf {size_t len; int buf; } ;
struct process_trailer_options {struct strbuf* separator; int only_trailers; int value_only; scalar_t__ unfold; int filter_data; scalar_t__ (* filter ) (struct strbuf*,int ) ;} ;
typedef int ssize_t ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct strbuf*,struct strbuf*,int *,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct strbuf*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct strbuf*,struct strbuf*) ;
 int FUNC_4 (struct strbuf*,char) ;
 int FUNC_5 (struct strbuf*,char*,int ) ;
 int FUNC_6 (struct strbuf*,char*) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (struct strbuf*) ;
 scalar_t__ FUNC_9 (struct strbuf*,int ) ;
 int FUNC_10 (struct strbuf*) ;

__attribute__((used)) static void FUNC_11(struct strbuf *VAR_2,
    const struct trailer_info *VAR_3,
    const struct process_trailer_options *VAR_4)
{
 size_t VAR_5 = VAR_2->len;
 size_t VAR_6;


 if (!VAR_4->only_trailers && !VAR_4->unfold && !VAR_4->filter && !VAR_4->separator) {
  FUNC_2(VAR_2, VAR_3->trailer_start,
      VAR_3->trailer_end - VAR_3->trailer_start);
  return;
 }

 for (VAR_6 = 0; VAR_6 < VAR_3->trailer_nr; VAR_6++) {
  char *VAR_7 = VAR_3->trailers[VAR_6];
  ssize_t VAR_8 = FUNC_0(VAR_7, VAR_1);

  if (VAR_8 >= 1) {
   struct strbuf VAR_9 = VAR_0;
   struct strbuf VAR_10 = VAR_0;

   FUNC_1(&VAR_9, &VAR_10, ((void*)0), VAR_7, VAR_8);
   if (!VAR_4->filter || VAR_4->filter(&VAR_9, VAR_4->filter_data)) {
    if (VAR_4->unfold)
     FUNC_10(&VAR_10);

    if (VAR_4->separator && VAR_2->len != VAR_5)
     FUNC_3(VAR_2, VAR_4->separator);
    if (!VAR_4->value_only)
     FUNC_5(VAR_2, "%s: ", VAR_9.buf);
    FUNC_3(VAR_2, &VAR_10);
    if (!VAR_4->separator)
     FUNC_4(VAR_2, '\n');
   }
   FUNC_7(&VAR_9);
   FUNC_7(&VAR_10);

  } else if (!VAR_4->only_trailers) {
   if (VAR_4->separator && VAR_2->len != VAR_5) {
    FUNC_3(VAR_2, VAR_4->separator);
   }
   FUNC_6(VAR_2, VAR_7);
   if (VAR_4->separator) {
    FUNC_8(VAR_2);
   }
  }
 }

}
