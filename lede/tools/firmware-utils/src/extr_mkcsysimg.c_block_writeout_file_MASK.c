
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csys_block {size_t file_size; int css; int * file_name; } ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,size_t,int,int *) ;
 int FUNC_4 (int *,char*,size_t,int ) ;

int
FUNC_5(FILE *VAR_3, struct csys_block *VAR_4)
{
 char VAR_5[VAR_1];
 size_t VAR_6 = sizeof(VAR_5);
 FILE *VAR_7;
 size_t VAR_8;
 int VAR_9;

 if (VAR_4->file_name == ((void*)0))
  return 0;

 if (VAR_4->file_size == 0)
  return 0;

 VAR_2 = 0;
 VAR_7 = FUNC_2(VAR_4->file_name,"r");
 if (VAR_2) {
  FUNC_0("unable to open file: %s", VAR_4->file_name);
  return VAR_0;
 }

 VAR_8 = VAR_4->file_size;
 while (VAR_8 > 0) {
  if (VAR_8 < VAR_6)
   VAR_6 = VAR_8;


  VAR_2 = 0;
  FUNC_3(VAR_5, VAR_6, 1, VAR_7);
  if (VAR_2 != 0) {
   FUNC_0("unable to read from file: %s", VAR_4->file_name);
   VAR_9 = VAR_0;
   break;
  }

  VAR_9 = FUNC_4(VAR_3, VAR_5, VAR_6, VAR_4->css);
  if (VAR_9)
   break;

  VAR_8 -= VAR_6;
 }

 FUNC_1(VAR_7);
 return VAR_9;
}
