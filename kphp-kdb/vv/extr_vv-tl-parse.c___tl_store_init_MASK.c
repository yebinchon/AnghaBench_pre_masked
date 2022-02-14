
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_out_methods {int flags; int * copy_through; scalar_t__ prepend_bytes; scalar_t__ (* store_get_ptr ) (scalar_t__) ;int (* store_clear ) () ;} ;
typedef enum tl_type { ____Placeholder_tl_type } tl_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 struct tl_out_methods* VAR_7 ;
 scalar_t__ VAR_8 ;
 long long VAR_9 ;
 int VAR_10 ;
 int* VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_13 ;

__attribute__((used)) static inline int FUNC_3 (void *VAR_14, void *VAR_15, enum tl_type VAR_16, struct tl_out_methods *VAR_17, int VAR_18, int VAR_19, long long VAR_20) {
  if (VAR_7 && VAR_7->store_clear) {
    VAR_7->store_clear ();
  }
  VAR_5 = VAR_14;
  VAR_6 = VAR_15;
  if (VAR_14) {
    VAR_7 = VAR_17;
    VAR_12 = VAR_16;
  } else {
    VAR_12 = VAR_13;
  }

  if (!(VAR_7->flags & VAR_0)) {
    VAR_11 = (int *)VAR_7->store_get_ptr (12 + VAR_7->prepend_bytes);
  }

  if (!VAR_19) {
    if (VAR_3) {
      FUNC_0 (VAR_3);
      VAR_3 = 0;
      VAR_2 = 0;
    }
  }
  VAR_8 = 0;
  VAR_9 = VAR_20;
  VAR_10 = VAR_18;

  if (VAR_14) {
    VAR_1 = VAR_7 ? VAR_7->copy_through[VAR_4] : 0;
  } else {
    VAR_1 = 0;
  }
  return 0;
}
