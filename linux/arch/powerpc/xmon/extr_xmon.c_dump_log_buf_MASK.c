
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmsg_dumper {int active; } ;
typedef int buf ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct kmsg_dumper*,int,unsigned char*,int,size_t*) ;
 int FUNC_2 (struct kmsg_dumper*) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(void)
{
 struct kmsg_dumper VAR_2 = { .active = 1 };
 unsigned char VAR_3[128];
 size_t VAR_4;

 if (FUNC_4(VAR_0) != 0) {
  FUNC_3("Error dumping printk buffer!\n");
  return;
 }

 VAR_1 = 1;
 FUNC_5();

 FUNC_2(&VAR_2);
 FUNC_7();
 while (FUNC_1(&VAR_2, 0, VAR_3, sizeof(VAR_3), &VAR_4)) {
  VAR_3[VAR_4] = '\0';
  FUNC_3("%s", VAR_3);
 }
 FUNC_6();

 FUNC_5();

 FUNC_0(200);
 VAR_1 = 0;
}
