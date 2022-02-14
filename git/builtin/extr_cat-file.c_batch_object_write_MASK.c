
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;
struct expand_data {int oid; int info; int skip_object_info; } ;
struct batch_options {scalar_t__ print_contents; int format; } ;


 int VAR_0 ;
 int FUNC_0 (struct batch_options*,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int *,int ) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (struct batch_options*,struct expand_data*) ;
 int FUNC_5 (char*,char const*) ;
 int VAR_2 ;
 int FUNC_6 (struct strbuf*,char) ;
 int FUNC_7 (struct strbuf*,int ,int ,struct expand_data*) ;
 int FUNC_8 (struct strbuf*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_9(const char *VAR_4,
          struct strbuf *VAR_5,
          struct batch_options *VAR_6,
          struct expand_data *VAR_7)
{
 if (!VAR_7->skip_object_info &&
     FUNC_2(VAR_3, &VAR_7->oid, &VAR_7->info,
         VAR_0) < 0) {
  FUNC_5("%s missing\n",
         VAR_4 ? VAR_4 : FUNC_3(&VAR_7->oid));
  FUNC_1(VAR_2);
  return;
 }

 FUNC_8(VAR_5);
 FUNC_7(VAR_5, VAR_6->format, VAR_1, VAR_7);
 FUNC_6(VAR_5, '\n');
 FUNC_0(VAR_6, VAR_5->buf, VAR_5->len);

 if (VAR_6->print_contents) {
  FUNC_4(VAR_6, VAR_7);
  FUNC_0(VAR_6, "\n", 1);
 }
}
