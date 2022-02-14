
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmp ;
typedef int off_t ;
struct TYPE_2__ {int rootfd; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,char*) ;
 int * FUNC_2 (char*,int,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,int,int *) ;
 int FUNC_6 (int ,char*,int ) ;
 size_t FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char*,size_t) ;

__attribute__((used)) static void
FUNC_9(char const * VAR_3)
{
 char VAR_4[1014];
 FILE *VAR_5;
 int VAR_6;
 size_t VAR_7;
 off_t VAR_8 = 0;

 if ((VAR_6 = FUNC_6(VAR_2.rootfd, "etc/opiekeys", VAR_0)) == -1)
  return;

 VAR_5 = FUNC_1(VAR_6, "r+");
 VAR_7 = FUNC_7(VAR_3);

 while (FUNC_2(VAR_4, sizeof(VAR_4), VAR_5) != ((void*)0)) {
  if (FUNC_8(VAR_3, VAR_4, VAR_7) == 0 && VAR_4[VAR_7]==' ') {

   if (FUNC_3(VAR_5, VAR_8, VAR_1) == 0)
    FUNC_5("#", 1, 1, VAR_5);
   break;
  }
  VAR_8 = FUNC_4(VAR_5);
 }



 FUNC_0(VAR_5);
}
