
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_size; } ;
struct TYPE_3__ {size_t size; int ptr; } ;
typedef TYPE_1__ mmfile_t ;
typedef int FILE ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,size_t,int,int *) ;
 scalar_t__ FUNC_5 (char const*,struct stat*) ;
 int FUNC_6 (size_t) ;
 size_t FUNC_7 (int ) ;

int FUNC_8(mmfile_t *VAR_0, const char *VAR_1)
{
 struct stat VAR_2;
 FILE *VAR_3;
 size_t VAR_4;

 if (FUNC_5(VAR_1, &VAR_2))
  return FUNC_1("Could not stat %s", VAR_1);
 if ((VAR_3 = FUNC_3(VAR_1, "rb")) == ((void*)0))
  return FUNC_1("Could not open %s", VAR_1);
 VAR_4 = FUNC_7(VAR_2.st_size);
 VAR_0->ptr = FUNC_6(VAR_4 ? VAR_4 : 1);
 if (VAR_4 && FUNC_4(VAR_0->ptr, VAR_4, 1, VAR_3) != 1) {
  FUNC_2(VAR_3);
  return FUNC_0("Could not read %s", VAR_1);
 }
 FUNC_2(VAR_3);
 VAR_0->size = VAR_4;
 return 0;
}
