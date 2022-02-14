
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image_desc {int * file_name; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 struct image_desc VAR_3 ;
 int FUNC_2 (char*) ;
 struct image_desc VAR_4 ;
 int FUNC_3 (char*,char*,char**) ;
 int * FUNC_4 (char*) ;

int
FUNC_5(char VAR_5, char *VAR_6)
{
 char VAR_7[VAR_2];
 char *VAR_8[VAR_1];
 int VAR_9;
 char *VAR_10;
 struct image_desc *VAR_11 = ((void*)0);
 int VAR_12;

 switch (VAR_5) {
 case 'K':
  if (VAR_4.file_name) {
   FUNC_1("only one kernel option allowed");
   break;
  }
  VAR_11 = &VAR_4;
  break;
 case 'F':
  if (VAR_3.file_name) {
   FUNC_1("only one fs option allowed");
   break;
  }
  VAR_11 = &VAR_3;
  break;
 }

 if (!VAR_11)
  return VAR_0;

 VAR_9 = FUNC_3(VAR_6, VAR_7, VAR_8);

 VAR_12 = 0;
 VAR_10 = VAR_8[VAR_12++];
 if (!FUNC_2(VAR_10)) {
  VAR_11->file_name = FUNC_4(VAR_10);
  if (VAR_11->file_name == ((void*)0)) {
   FUNC_0("not enough memory");
   return VAR_0;
  }
 } else {
  FUNC_0("no file specified for option %c", VAR_5);
  return VAR_0;
 }

 return 0;
}
