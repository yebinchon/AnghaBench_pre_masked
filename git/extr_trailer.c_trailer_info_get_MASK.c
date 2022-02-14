
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trailer_info {char const* trailer_start; char const* trailer_end; char** trailers; size_t trailer_nr; int blank_line_before_trailer; } ;
struct strbuf {int * buf; } ;
struct process_trailer_options {scalar_t__ no_divider; } ;


 int FUNC_0 (char**,size_t,size_t) ;
 struct strbuf VAR_0 ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char const*,int) ;
 int FUNC_6 (char const*,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_1 ;
 int FUNC_8 (struct strbuf*,struct strbuf*) ;
 int FUNC_9 (struct strbuf*,char*,int,int) ;
 char* FUNC_10 (struct strbuf*,int *) ;
 int FUNC_11 (struct strbuf**) ;
 struct strbuf** FUNC_12 (char const*,int,char,int ) ;
 int FUNC_13 (char const*) ;

void FUNC_14(struct trailer_info *VAR_2, const char *VAR_3,
        const struct process_trailer_options *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct strbuf **VAR_8, **VAR_9;
 char **VAR_10 = ((void*)0);
 size_t VAR_11 = 0, VAR_12 = 0;
 char **VAR_13 = ((void*)0);

 FUNC_2();

 if (VAR_4->no_divider)
  VAR_5 = FUNC_13(VAR_3);
 else
  VAR_5 = FUNC_3(VAR_3);

 VAR_6 = FUNC_5(VAR_3, VAR_5);
 VAR_7 = FUNC_6(VAR_3, VAR_6);

 VAR_8 = FUNC_12(VAR_3 + VAR_7,
      VAR_6 - VAR_7,
      '\n',
      0);
 for (VAR_9 = VAR_8; *VAR_9; VAR_9++) {
  if (VAR_13 && FUNC_7((*VAR_9)->buf[0])) {
   struct strbuf VAR_14 = VAR_0;
   FUNC_9(&VAR_14, *VAR_13, FUNC_13(*VAR_13), FUNC_13(*VAR_13));
   FUNC_8(&VAR_14, *VAR_9);
   *VAR_13 = FUNC_10(&VAR_14, ((void*)0));
   continue;
  }
  FUNC_0(VAR_10, VAR_11 + 1, VAR_12);
  VAR_10[VAR_11] = FUNC_10(*VAR_9, ((void*)0));
  VAR_13 = FUNC_4(VAR_10[VAR_11], VAR_1) >= 1
   ? &VAR_10[VAR_11]
   : ((void*)0);
  VAR_11++;
 }
 FUNC_11(VAR_8);

 VAR_2->blank_line_before_trailer = FUNC_1(VAR_3,
              VAR_7);
 VAR_2->trailer_start = VAR_3 + VAR_7;
 VAR_2->trailer_end = VAR_3 + VAR_6;
 VAR_2->trailers = VAR_10;
 VAR_2->trailer_nr = VAR_11;
}
