
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_chunk_cb_data {long offset; int ignore_diffs; int target; int parent; int srcq; int dstq; } ;


 int FUNC_0 (int *,int *,long,long,long,long,int ,int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(long VAR_0, long VAR_1,
     long VAR_2, long VAR_3, void *VAR_4)
{
 struct blame_chunk_cb_data *VAR_5 = VAR_4;
 if (VAR_0 - VAR_2 != VAR_5->offset)
  FUNC_1("internal error in blame::blame_chunk_cb");
 FUNC_0(&VAR_5->dstq, &VAR_5->srcq, VAR_2, VAR_0 - VAR_2,
      VAR_2 + VAR_3, VAR_1, VAR_5->parent, VAR_5->target,
      VAR_5->ignore_diffs);
 VAR_5->offset = VAR_0 + VAR_1 - (VAR_2 + VAR_3);
 return 0;
}
