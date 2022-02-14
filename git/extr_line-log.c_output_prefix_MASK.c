
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct diff_options {int output_prefix_data; struct strbuf* (* output_prefix ) (struct diff_options*,int ) ;} ;


 struct strbuf* FUNC_0 (struct diff_options*,int ) ;

__attribute__((used)) static char *FUNC_1(struct diff_options *VAR_0)
{
 char *VAR_1 = "";

 if (VAR_0->output_prefix) {
  struct strbuf *VAR_2 = VAR_0->output_prefix(VAR_0, VAR_0->output_prefix_data);
  VAR_1 = VAR_2->buf;
 }

 return VAR_1;
}
