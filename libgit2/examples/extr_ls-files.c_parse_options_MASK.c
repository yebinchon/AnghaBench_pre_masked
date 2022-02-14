
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int file_count; char** files; int error_unmatch; } ;
typedef TYPE_1__ ls_options ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(ls_options *VAR_1, int VAR_2, char *VAR_3[])
{
 int VAR_4 = 0;
 int VAR_5;

 FUNC_1(VAR_1, 0, sizeof(ls_options));

 if (VAR_2 < 2)
  return 0;

 for (VAR_5 = 1; VAR_5 < VAR_2; ++VAR_5) {
  char *VAR_6 = VAR_3[VAR_5];


  if (VAR_6[0] != '-' || VAR_4) {
   VAR_4 = 1;


   if (VAR_1->file_count == 1024) {
    FUNC_0(VAR_0, "ls-files can only support 1024 files at this time.\n");
    return -1;
   }

   VAR_1->files[VAR_1->file_count++] = VAR_6;
  } else if (!FUNC_2(VAR_6, "--")) {
   VAR_4 = 1;
  } else if (!FUNC_2(VAR_6, "--error-unmatch")) {
   VAR_1->error_unmatch = 1;
  } else {
   FUNC_3("Unsupported argument", VAR_6);
   return -1;
  }
 }

 return 0;
}
