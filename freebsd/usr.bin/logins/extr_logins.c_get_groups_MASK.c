
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct group {char* gr_name; char* gr_passwd; int ** gr_mem; int gr_gid; } ;
struct TYPE_4__ {char* gr_mem; int gr_gid; void* gr_passwd; void* gr_name; } ;


 int FUNC_0 () ;
 struct group* FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,char*,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 char* FUNC_5 (size_t) ;
 TYPE_1__* FUNC_6 (TYPE_1__*,int) ;
 void* FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(void)
{
 struct group *VAR_3;
 size_t VAR_4;
 int VAR_5;

 FUNC_2();
 for (;;) {
  if (VAR_2 == VAR_1) {
   VAR_1 += VAR_1 ? VAR_1 : 128;
   VAR_0 = FUNC_6(VAR_0, VAR_1 * sizeof *VAR_0);
  }
  if ((VAR_3 = FUNC_1()) == ((void*)0))
   break;
  VAR_0[VAR_2].gr_name = FUNC_7(VAR_3->gr_name);
  VAR_0[VAR_2].gr_passwd = FUNC_7(VAR_3->gr_passwd);
  VAR_0[VAR_2].gr_gid = VAR_3->gr_gid;
  VAR_0[VAR_2].gr_mem = FUNC_7("");
  for (VAR_5 = 0, VAR_4 = 1; VAR_3->gr_mem[VAR_5] != ((void*)0); ++VAR_5)
   VAR_4 += FUNC_4(VAR_3->gr_mem[VAR_5]) + 1;
  VAR_0[VAR_2].gr_mem = FUNC_5(VAR_4);
  for (VAR_5 = 0, VAR_4 = 0; VAR_3->gr_mem[VAR_5] != ((void*)0); ++VAR_5)
   VAR_4 += FUNC_3(VAR_0[VAR_2].gr_mem + VAR_4,
       VAR_5 ? ",%s" : "%s", VAR_3->gr_mem[VAR_5]);
  VAR_0[VAR_2].gr_mem[VAR_4] = '\0';
  VAR_2++;
 }
 FUNC_0();
}
