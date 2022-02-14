
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; scalar_t__ buf; } ;
struct process_trailer_options {scalar_t__ in_place; int only_trailers; int only_input; } ;
struct list_head {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 struct strbuf VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,int,scalar_t__,int *) ;
 int VAR_2 ;
 int FUNC_7 (int *,int *,struct process_trailer_options const*) ;
 int FUNC_8 (int *,struct list_head*) ;
 size_t FUNC_9 (int *,scalar_t__,int *,struct process_trailer_options const*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (struct strbuf*,char const*) ;
 scalar_t__ FUNC_12 (int *,char const*) ;
 int * VAR_3 ;
 int FUNC_13 (struct strbuf*) ;
 int VAR_4 ;

void FUNC_14(const char *VAR_5,
        const struct process_trailer_options *VAR_6,
        struct list_head *VAR_7)
{
 FUNC_0(VAR_2);
 struct strbuf VAR_8 = VAR_0;
 size_t VAR_9;
 FILE *VAR_10 = VAR_3;

 FUNC_4();

 FUNC_11(&VAR_8, VAR_5);

 if (VAR_6->in_place)
  VAR_10 = FUNC_2(VAR_5);


 VAR_9 = FUNC_9(VAR_10, VAR_8.buf, &VAR_2, VAR_6);

 if (!VAR_6->only_input) {
  FUNC_0(VAR_1);
  FUNC_8(&VAR_1, VAR_7);
  FUNC_10(&VAR_2, &VAR_1);
 }

 FUNC_7(VAR_10, &VAR_2, VAR_6);

 FUNC_5(&VAR_2);


 if (!VAR_6->only_trailers)
  FUNC_6(VAR_8.buf + VAR_9, 1, VAR_8.len - VAR_9, VAR_10);

 if (VAR_6->in_place)
  if (FUNC_12(&VAR_4, VAR_5))
   FUNC_3(FUNC_1("could not rename temporary file to %s"), VAR_5);

 FUNC_13(&VAR_8);
}
