
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drmem_lmb {int flags; int aa_index; } ;
struct assoc_arrays {int array_sz; int n_arrays; int * arrays; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct assoc_arrays*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(struct drmem_lmb *VAR_5)
{
 struct assoc_arrays VAR_6 = { .arrays = ((void*)0) };
 int VAR_7 = VAR_2;
 int VAR_8 = VAR_7;
 int VAR_9, VAR_10;

 if ((VAR_3 < 0) || !VAR_4)
  return VAR_7;

 VAR_9 = FUNC_1(&VAR_6);
 if (VAR_9)
  return VAR_7;

 if (VAR_3 <= VAR_6.array_sz &&
     !(VAR_5->flags & VAR_0) && VAR_5->aa_index < VAR_6.n_arrays) {
  VAR_10 = VAR_5->aa_index * VAR_6.array_sz + VAR_3 - 1;
  VAR_8 = FUNC_2(&VAR_6.arrays[VAR_10], 1);

  if (VAR_8 == 0xffff || VAR_8 >= VAR_1)
   VAR_8 = VAR_7;

  if (VAR_8 > 0) {
   VAR_10 = VAR_5->aa_index * VAR_6.array_sz;
   FUNC_0(VAR_8,
       &VAR_6.arrays[VAR_10]);
  }
 }

 return VAR_8;
}
