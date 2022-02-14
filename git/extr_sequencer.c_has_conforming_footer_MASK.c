
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trailer_info {scalar_t__ trailer_start; scalar_t__ trailer_end; size_t trailer_nr; int * trailers; } ;
struct strbuf {int len; int buf; } ;
struct process_trailer_options {int no_divider; } ;


 struct process_trailer_options VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct trailer_info*,int ,struct process_trailer_options*) ;
 int FUNC_2 (struct trailer_info*) ;

__attribute__((used)) static int FUNC_3(struct strbuf *VAR_1, struct strbuf *VAR_2,
 size_t VAR_3)
{
 struct process_trailer_options VAR_4 = VAR_0;
 struct trailer_info VAR_5;
 size_t VAR_6;
 int VAR_7 = 0, VAR_8 = 0;

 VAR_4.no_divider = 1;

 FUNC_1(&VAR_5, VAR_1->buf, &VAR_4);

 if (VAR_5.trailer_start == VAR_5.trailer_end)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_5.trailer_nr; VAR_6++)
  if (VAR_2 && !FUNC_0(VAR_5.trailers[VAR_6], VAR_2->buf, VAR_2->len)) {
   VAR_7 = 1;
   if (VAR_6 == VAR_5.trailer_nr - 1)
    VAR_8 = 1;
  }

 FUNC_2(&VAR_5);

 if (VAR_8)
  return 3;
 if (VAR_7)
  return 2;
 return 1;
}
