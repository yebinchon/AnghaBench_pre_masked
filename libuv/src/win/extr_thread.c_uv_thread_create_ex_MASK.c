
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * uv_thread_t ;
struct TYPE_5__ {int flags; size_t stack_size; } ;
typedef TYPE_1__ uv_thread_options_t ;
struct thread_ctx {void (* entry ) (void*) ;int * self; void* arg; } ;
struct TYPE_6__ {scalar_t__ dwPageSize; } ;
typedef TYPE_2__ SYSTEM_INFO ;
typedef int * HANDLE ;


 int VAR_0 ;



 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *,unsigned int,int ,struct thread_ctx*,int ,int *) ;
 int VAR_7 ;
 int FUNC_3 (struct thread_ctx*) ;
 struct thread_ctx* FUNC_4 (int) ;
 int VAR_8 ;

int FUNC_5(uv_thread_t* VAR_9,
                        const uv_thread_options_t* VAR_10,
                        void (*VAR_11)(void *VAR_12),
                        void *VAR_13) {
  struct thread_ctx* VAR_14;
  int VAR_15;
  HANDLE VAR_16;
  SYSTEM_INFO VAR_17;
  size_t VAR_18;
  size_t VAR_19;

  VAR_18 =
      VAR_10->flags & VAR_6 ? VAR_10->stack_size : 0;

  if (VAR_18 != 0) {
    FUNC_0(&VAR_17);
    VAR_19 = (size_t)VAR_17.dwPageSize;

    VAR_18 = (VAR_18 + VAR_19 - 1) &~ (VAR_19 - 1);

    if ((unsigned)VAR_18 != VAR_18)
      return VAR_3;
  }

  VAR_14 = FUNC_4(sizeof(*VAR_14));
  if (VAR_14 == ((void*)0))
    return VAR_5;

  VAR_14->entry = VAR_11;
  VAR_14->arg = VAR_13;



  VAR_16 = (HANDLE) FUNC_2(((void*)0),
                                   (unsigned)VAR_18,
                                   VAR_8,
                                   VAR_14,
                                   VAR_0,
                                   ((void*)0));
  if (VAR_16 == ((void*)0)) {
    VAR_15 = VAR_7;
    FUNC_3(VAR_14);
  } else {
    VAR_15 = 0;
    *VAR_9 = VAR_16;
    VAR_14->self = VAR_16;
    FUNC_1(VAR_16);
  }

  switch (VAR_15) {
    case 0:
      return 0;
    case 130:
      return VAR_1;
    case 129:
      return VAR_2;
    case 128:
      return VAR_3;
  }

  return VAR_4;
}
