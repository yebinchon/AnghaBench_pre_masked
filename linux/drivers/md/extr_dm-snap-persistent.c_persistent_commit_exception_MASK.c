
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstore {int valid; scalar_t__ current_committed; unsigned int callback_count; scalar_t__ exceptions_per_area; struct commit_callback* callbacks; scalar_t__ current_area; int pending_count; } ;
struct dm_exception_store {int dummy; } ;
struct dm_exception {int new_chunk; int old_chunk; } ;
struct core_exception {int new_chunk; int old_chunk; } ;
struct commit_callback {void (* callback ) (void*,int) ;void* context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct pstore*,int ,int) ;
 int FUNC_1 (int *) ;
 struct pstore* FUNC_2 (struct dm_exception_store*) ;
 void FUNC_3 (void*,int) ;
 int FUNC_4 (struct pstore*,int ,struct core_exception*) ;
 scalar_t__ FUNC_5 (struct pstore*,scalar_t__) ;
 int FUNC_6 (struct pstore*) ;

__attribute__((used)) static void FUNC_7(struct dm_exception_store *VAR_4,
     struct dm_exception *VAR_5, int VAR_6,
     void (*VAR_7) (void *, int VAR_8),
     void *VAR_9)
{
 unsigned int VAR_10;
 struct pstore *VAR_11 = FUNC_2(VAR_4);
 struct core_exception VAR_12;
 struct commit_callback *VAR_13;

 if (!VAR_6)
  VAR_11->valid = 0;

 VAR_12.old_chunk = VAR_5->old_chunk;
 VAR_12.new_chunk = VAR_5->new_chunk;
 FUNC_4(VAR_11, VAR_11->current_committed++, &VAR_12);







 VAR_13 = VAR_11->callbacks + VAR_11->callback_count++;
 VAR_13->callback = VAR_7;
 VAR_13->context = VAR_9;





 if (!FUNC_1(&VAR_11->pending_count) &&
     (VAR_11->current_committed != VAR_11->exceptions_per_area))
  return;




 if ((VAR_11->current_committed == VAR_11->exceptions_per_area) &&
     FUNC_5(VAR_11, VAR_11->current_area + 1))
  VAR_11->valid = 0;




 if (VAR_11->valid && FUNC_0(VAR_11, VAR_1,
     VAR_2 | VAR_0 | VAR_3))
  VAR_11->valid = 0;




 if (VAR_11->current_committed == VAR_11->exceptions_per_area) {
  VAR_11->current_committed = 0;
  VAR_11->current_area++;
  FUNC_6(VAR_11);
 }

 for (VAR_10 = 0; VAR_10 < VAR_11->callback_count; VAR_10++) {
  VAR_13 = VAR_11->callbacks + VAR_10;
  VAR_13->callback(VAR_13->context, VAR_11->valid);
 }

 VAR_11->callback_count = 0;
}
