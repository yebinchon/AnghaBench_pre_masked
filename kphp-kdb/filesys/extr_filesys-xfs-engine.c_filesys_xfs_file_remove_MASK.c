
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_filesys_rmdir {int dirpath_size; int dirpath; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,int *,char*,int *) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4 (struct lev_filesys_rmdir *VAR_2) {
  char VAR_3[VAR_0];
  FUNC_0 (VAR_2->dirpath_size < VAR_0);
  FUNC_1 (VAR_3, VAR_2->dirpath, VAR_2->dirpath_size);
  VAR_3[VAR_2->dirpath_size] = 0;
  FUNC_3 (FUNC_2 (VAR_1, ((void*)0), VAR_3, ((void*)0)));
}
