
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {int file_name; int file_size; } ;
typedef int FILE ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int ,int,int *) ;

int FUNC_4(const struct file_info *VAR_3, char *VAR_4)
{
 FILE *VAR_5;
 int VAR_6 = VAR_0;

 VAR_5 = FUNC_2(VAR_3->file_name, "r");
 if (VAR_5 == ((void*)0)) {
  FUNC_0("could not open \"%s\" for reading", VAR_3->file_name);
  goto out;
 }

 VAR_2 = 0;
 FUNC_3(VAR_4, VAR_3->file_size, 1, VAR_5);
 if (VAR_2 != 0) {
  FUNC_0("unable to read from file \"%s\"", VAR_3->file_name);
  goto out_close;
 }

 VAR_6 = VAR_1;

 out_close:
 FUNC_1(VAR_5);
 out:
 return VAR_6;
}
