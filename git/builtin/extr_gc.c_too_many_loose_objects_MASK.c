
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dirent {char* d_name; } ;
struct TYPE_2__ {int hexsz; } ;
typedef int DIR ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ) ;
 struct dirent* FUNC_4 (int *) ;
 unsigned int const FUNC_5 (char*,char*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_6(void)
{






 DIR *VAR_2;
 struct dirent *VAR_3;
 int VAR_4;
 int VAR_5 = 0;
 int VAR_6 = 0;
 const unsigned VAR_7 = VAR_1->hexsz - 2;

 VAR_2 = FUNC_3(FUNC_2("objects/17"));
 if (!VAR_2)
  return 0;

 VAR_4 = FUNC_0(VAR_0, 256);
 while ((VAR_3 = FUNC_4(VAR_2)) != ((void*)0)) {
  if (FUNC_5(VAR_3->d_name, "0123456789abcdef") != VAR_7 ||
      VAR_3->d_name[VAR_7] != '\0')
   continue;
  if (++VAR_5 > VAR_4) {
   VAR_6 = 1;
   break;
  }
 }
 FUNC_1(VAR_2);
 return VAR_6;
}
