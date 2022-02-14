
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trailer_info {int dummy; } ;
struct strbuf {int dummy; } ;
struct process_trailer_options {int dummy; } ;


 int FUNC_0 (struct strbuf*,struct trailer_info*,struct process_trailer_options const*) ;
 int FUNC_1 (struct trailer_info*,char const*,struct process_trailer_options const*) ;
 int FUNC_2 (struct trailer_info*) ;

void FUNC_3(struct strbuf *VAR_0, const char *VAR_1,
     const struct process_trailer_options *VAR_2)
{
 struct trailer_info VAR_3;

 FUNC_1(&VAR_3, VAR_1, VAR_2);
 FUNC_0(VAR_0, &VAR_3, VAR_2);
 FUNC_2(&VAR_3);
}
