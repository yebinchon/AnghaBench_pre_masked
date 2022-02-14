
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {int file_size; int file_name; int file_data; } ;
typedef int FILE ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int,int,int *) ;
 int FUNC_5 (int *,long,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct file_info* VAR_1) {
 int VAR_2 = 0;
 FILE* VAR_3 = ((void*)0);

 if (!VAR_1 || !VAR_1->file_name) {
  FUNC_1("Invalid pointer provided!\n");
  return -1;
 }

 FUNC_0("Opening file: %s\n", VAR_1->file_name);

 if (!(VAR_3 = FUNC_3(VAR_1->file_name, "rb"))) {
  FUNC_1("Error opening file: %s\n", VAR_1->file_name);
  return -1;
 }


 FUNC_8(VAR_3);
 FUNC_5(VAR_3, 0L, VAR_0);
 VAR_2 = FUNC_6(VAR_3);
 FUNC_8(VAR_3);

 if (VAR_2 < 0) {
  FUNC_1("Error getting filesize: %s\n", VAR_1->file_name);
  FUNC_2(VAR_3);
  return -1;
 }

 FUNC_0("Filesize: %i\n", VAR_2);
 VAR_1->file_size = VAR_2;

 if (!(VAR_1->file_data = FUNC_7(VAR_2))) {
  FUNC_1("Out of memory!\n");
  FUNC_2(VAR_3);
  return -1;
 }

 if (FUNC_4(VAR_1->file_data, 1, VAR_2, VAR_3) != VAR_2) {
  FUNC_1("Error reading file %s\n", VAR_1->file_name);
  FUNC_2(VAR_3);
  return -1;
 }

 FUNC_0("File: read successful\n");
 FUNC_2(VAR_3);

 return 0;
}
