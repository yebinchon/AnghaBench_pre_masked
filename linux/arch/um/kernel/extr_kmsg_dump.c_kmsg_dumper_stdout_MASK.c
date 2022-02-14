
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmsg_dumper {int dummy; } ;
typedef int line ;
typedef enum kmsg_dump_reason { ____Placeholder_kmsg_dump_reason } kmsg_dump_reason ;


 int * VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct kmsg_dumper*,int,char*,int,size_t*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(struct kmsg_dumper *VAR_1,
    enum kmsg_dump_reason VAR_2)
{
 static char VAR_3[1024];

 size_t VAR_4 = 0;
 bool VAR_5 = 0;


 if (!FUNC_0())
  return;

 if (VAR_0 != ((void*)0))
  VAR_5 = 1;

 FUNC_1();

 if (VAR_5 == 1)
  return;

 FUNC_3("kmsg_dump:\n");
 while (FUNC_2(VAR_1, 1, VAR_3, sizeof(VAR_3), &VAR_4)) {
  VAR_3[VAR_4] = '\0';
  FUNC_3("%s", VAR_3);
 }
}
