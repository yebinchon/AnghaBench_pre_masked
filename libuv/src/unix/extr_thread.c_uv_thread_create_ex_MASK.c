
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_thread_t ;
struct TYPE_3__ {int flags; size_t stack_size; } ;
typedef TYPE_1__ uv_thread_options_t ;
typedef int pthread_attr_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *,int *,void* (*) (void*),void*) ;
 size_t FUNC_7 () ;

int FUNC_8(uv_thread_t* VAR_2,
                        const uv_thread_options_t* VAR_3,
                        void (*VAR_4)(void *VAR_5),
                        void *VAR_6) {
  int VAR_7;
  pthread_attr_t* VAR_8;
  pthread_attr_t VAR_9;
  size_t VAR_10;
  size_t VAR_11;


  union {
    void (*in)(void*);
    void* (*out)(void*);
  } VAR_12;

  VAR_11 =
      VAR_3->flags & VAR_1 ? VAR_3->stack_size : 0;

  VAR_8 = ((void*)0);
  if (VAR_11 == 0) {
    VAR_11 = FUNC_7();
  } else {
    VAR_10 = (size_t)FUNC_2();

    VAR_11 = (VAR_11 + VAR_10 - 1) &~ (VAR_10 - 1);




  }

  if (VAR_11 > 0) {
    VAR_8 = &VAR_9;

    if (FUNC_4(VAR_8))
      FUNC_1();

    if (FUNC_5(VAR_8, VAR_11))
      FUNC_1();
  }

  VAR_12.in = VAR_4;
  VAR_7 = FUNC_6(VAR_2, VAR_8, VAR_12.out, VAR_6);

  if (VAR_8 != ((void*)0))
    FUNC_3(VAR_8);

  return FUNC_0(VAR_7);
}
