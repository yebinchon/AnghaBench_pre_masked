
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; } ;
struct diff_options {int output_prefix_data; struct strbuf* (* output_prefix ) (struct diff_options*,int ) ;} ;


 struct strbuf* FUNC_0 (struct diff_options*,int ) ;

const char *FUNC_1(struct diff_options *VAR_0)
{
 struct strbuf *VAR_1;
 if (!VAR_0->output_prefix)
  return "";

 VAR_1 = VAR_0->output_prefix(VAR_0, VAR_0->output_prefix_data);
 return VAR_1->buf;
}
