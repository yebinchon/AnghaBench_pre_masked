
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr2_cfg_data {int line; int file; } ;
struct strbuf {int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf** VAR_2 ;
 int FUNC_0 (int ,int ,char const*,char const*) ;
 int FUNC_1 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_2(const char *VAR_3, const char *VAR_4, void *VAR_5)
{
 struct strbuf **VAR_6;
 struct tr2_cfg_data *VAR_7 = (struct tr2_cfg_data *)VAR_5;

 for (VAR_6 = VAR_2; *VAR_6; VAR_6++) {
  struct strbuf *VAR_8 = *VAR_6;
  int VAR_9 = FUNC_1(VAR_8->buf, VAR_3, VAR_0);
  if (VAR_9 == VAR_1) {
   FUNC_0(VAR_7->file, VAR_7->line, VAR_3, VAR_4);
   return 0;
  }
 }

 return 0;
}
