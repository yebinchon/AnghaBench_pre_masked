
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lev_filesys_xfs_file_chunk {int part; int size; int * data; } ;
struct TYPE_2__ {int chunk; int chunks; size_t M; int name; int * data; } ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*,int,int,int ) ;

__attribute__((used)) static void FUNC_4 (struct lev_filesys_xfs_file_chunk *VAR_1) {
  FUNC_0 (VAR_1->part == VAR_0.chunk);
  FUNC_0 (VAR_1->part < VAR_0.chunks);
  int VAR_2 = VAR_1->size + 1;
  FUNC_0 (VAR_1->part == VAR_0.chunks - 1 || VAR_2 == 0x10000);
  FUNC_1 (&VAR_0.data[VAR_0.M], &VAR_1->data[0], VAR_2);
  VAR_0.M += VAR_2;
  VAR_0.chunk++;
  FUNC_3 (4, "%d chunk of %d chunks readed (%s).\n", (int) VAR_0.chunk, (int) VAR_0.chunks, VAR_0.name);
  if (VAR_0.chunk == VAR_0.chunks) {
    FUNC_2 ();
  }
}
