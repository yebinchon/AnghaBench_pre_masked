
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct pack_chain_elem {size_t size; scalar_t__ offset; scalar_t__ base_key; scalar_t__ type; } ;
struct git_pack_file {int mwf; int bases; } ;
typedef int git_pack_cache_entry ;
typedef scalar_t__ git_off_t ;
typedef scalar_t__ git_object_t ;
typedef int git_mwindow ;
struct TYPE_8__ {size_t size; int ptr; } ;
typedef TYPE_1__ git_dependency_chain ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_1__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int * FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (struct git_pack_file*,int **,scalar_t__*,scalar_t__,scalar_t__) ;
 struct pack_chain_elem* FUNC_3 (TYPE_1__) ;
 int FUNC_4 (TYPE_1__) ;
 int FUNC_5 (TYPE_1__,size_t) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (size_t*,scalar_t__*,int *,int **,scalar_t__*) ;
 int FUNC_8 (int ,struct pack_chain_elem*,size_t) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(git_dependency_chain *VAR_4,
     git_pack_cache_entry **VAR_5, git_off_t *VAR_6,
     struct pack_chain_elem *VAR_7, size_t *VAR_8,
     struct git_pack_file *VAR_9, git_off_t VAR_10)
{
 git_dependency_chain VAR_11 = VAR_0;
 git_mwindow *VAR_12 = ((void*)0);
 git_off_t VAR_13 = VAR_10, VAR_14;
 int VAR_15 = 0, VAR_16 = 0;
 size_t VAR_17, VAR_18;
 git_object_t VAR_19;

 VAR_18 = 0;
 while (1) {
  struct pack_chain_elem *VAR_20;
  git_pack_cache_entry *VAR_21 = ((void*)0);


  if ((VAR_21 = FUNC_1(&VAR_9->bases, VAR_10)) != ((void*)0)) {
   *VAR_5 = VAR_21;
   *VAR_6 = VAR_10;
   break;
  }


  if (VAR_18 == VAR_3) {
   FUNC_5(VAR_11, VAR_18);
   FUNC_0(VAR_11);
   FUNC_8(VAR_11.ptr, VAR_7, VAR_18 * sizeof(struct pack_chain_elem));
   VAR_11.size = VAR_18;
   VAR_16 = 1;
  }

  VAR_13 = VAR_10;
  if (!VAR_16) {
   VAR_20 = &VAR_7[VAR_18];
  } else {
   VAR_20 = FUNC_3(VAR_11);
   if (!VAR_20) {
    VAR_15 = -1;
    goto on_error;
   }
  }

  VAR_20->base_key = VAR_10;

  VAR_15 = FUNC_7(&VAR_17, &VAR_19, &VAR_9->mwf, &VAR_12, &VAR_13);

  if (VAR_15 < 0)
   goto on_error;

  VAR_20->offset = VAR_13;
  VAR_20->size = VAR_17;
  VAR_20->type = VAR_19;
  VAR_20->base_key = VAR_10;

  if (VAR_19 != VAR_1 && VAR_19 != VAR_2)
   break;

  VAR_14 = FUNC_2(VAR_9, &VAR_12, &VAR_13, VAR_19, VAR_10);
  FUNC_6(&VAR_12);

  if (VAR_14 == 0) {
   VAR_15 = FUNC_9("delta offset is zero");
   goto on_error;
  }
  if (VAR_14 < 0) {
   VAR_15 = (int)VAR_14;
   goto on_error;
  }


  VAR_20->offset = VAR_13;


  VAR_10 = VAR_14;
  VAR_18++;
 }


 *VAR_8 = VAR_18 + 1;
 *VAR_4 = VAR_11;
 return VAR_15;

on_error:
 FUNC_4(VAR_11);
 return VAR_15;
}
