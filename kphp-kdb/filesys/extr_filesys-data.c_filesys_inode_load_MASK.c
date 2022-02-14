
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_inode {scalar_t__ index_offset; long index_filesize; int * index_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct filesys_inode*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct filesys_inode*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ) ;
 int * FUNC_5 (long) ;
 scalar_t__ VAR_3 ;
 long FUNC_6 (int ,int *,long) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_7 (struct filesys_inode *VAR_6) {
  if (VAR_6->index_offset < 0) {
    return;
  }

  if (VAR_6->index_data != ((void*)0)) {
    FUNC_2 (VAR_6);
    FUNC_0 (VAR_6);
    return;
  }

  VAR_6->index_data = FUNC_5 (VAR_6->index_filesize);
  FUNC_1 (FUNC_4 (VAR_1, VAR_6->index_offset, VAR_0) >= 0);
  long VAR_7 = FUNC_6 (VAR_1, VAR_6->index_data, VAR_6->index_filesize);
  FUNC_1 (VAR_7 == VAR_6->index_filesize);
  VAR_4 += VAR_6->index_filesize;
  VAR_5++;
  FUNC_0 (VAR_6);
  while (VAR_5 > 1 && VAR_4 > VAR_3) {
    FUNC_3 (VAR_2);
  }
}
