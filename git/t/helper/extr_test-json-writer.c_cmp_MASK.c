
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* buf; } ;
struct json_writer {TYPE_1__ json; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,char*,char const*) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_0, const struct json_writer *VAR_1, const char *VAR_2)
{
 if (!FUNC_2(VAR_1->json.buf, VAR_2))
  return;

 FUNC_1("error[%s]: observed '%s' expected '%s'\n",
        VAR_0, VAR_1->json.buf, VAR_2);
 FUNC_0(1);
}
