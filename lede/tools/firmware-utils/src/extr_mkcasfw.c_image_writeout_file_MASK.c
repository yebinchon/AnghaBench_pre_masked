
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image_desc {size_t file_size; int * file_name; } ;
struct csum_state {int dummy; } ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,size_t,int,int *) ;
 int FUNC_4 (int *,char*,size_t,struct csum_state*) ;

int
FUNC_5(FILE *VAR_3, struct image_desc *VAR_4,
   struct csum_state *VAR_5)
{
 char VAR_6[VAR_1];
 size_t VAR_7 = sizeof(VAR_6);
 FILE *VAR_8;
 size_t VAR_9;
 int VAR_10;

 if (VAR_4->file_name == ((void*)0))
  return 0;

 if (VAR_4->file_size == 0)
  return 0;

 VAR_2 = 0;
 VAR_8 = FUNC_2(VAR_4->file_name,"r");
 if (VAR_2) {
  FUNC_0("unable to open file: %s", VAR_4->file_name);
  return VAR_0;
 }

 VAR_9 = VAR_4->file_size;
 while (VAR_9 > 0) {
  if (VAR_9 < VAR_7)
   VAR_7 = VAR_9;


  VAR_2 = 0;
  FUNC_3(VAR_6, VAR_7, 1, VAR_8);
  if (VAR_2 != 0) {
   FUNC_0("unable to read from file: %s", VAR_4->file_name);
   VAR_10 = VAR_0;
   break;
  }

  VAR_10 = FUNC_4(VAR_3, VAR_6, VAR_7, VAR_5);
  if (VAR_10)
   break;

  VAR_9 -= VAR_7;
 }

 FUNC_1(VAR_8);
 return VAR_10;
}
