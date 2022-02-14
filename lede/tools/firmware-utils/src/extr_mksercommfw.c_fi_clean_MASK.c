
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {scalar_t__ file_size; int * file_data; int * file_name; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct file_info* VAR_0) {
 if (!VAR_0)
  return;

 if (VAR_0->file_name) {
  VAR_0->file_name = ((void*)0);
 }

 if (VAR_0->file_data) {
  FUNC_0(VAR_0->file_data);
  VAR_0->file_data = ((void*)0);
 }

 VAR_0->file_size = 0;
}
