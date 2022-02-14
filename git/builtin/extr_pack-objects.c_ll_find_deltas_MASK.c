
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_params {int window; int depth; unsigned int* processed; int working; int data_ready; unsigned int list_size; unsigned int remaining; int mutex; int cond; int thread; struct object_entry** list; } ;
struct object_entry {scalar_t__ hash; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct object_entry**,unsigned int*,int,int,unsigned int*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct thread_params*) ;
 int FUNC_6 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_7 () ;
 int VAR_4 ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *,int ,struct thread_params*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int VAR_5 ;
 int FUNC_19 (int) ;
 int VAR_6 ;
 struct thread_params* FUNC_20 (int,int) ;

__attribute__((used)) static void FUNC_21(struct object_entry **VAR_7, unsigned VAR_8,
      int VAR_9, int VAR_10, unsigned *VAR_11)
{
 struct thread_params *VAR_12;
 int VAR_13, VAR_14, VAR_15 = 0;

 FUNC_6();

 if (VAR_0 <= 1) {
  FUNC_3(VAR_7, &VAR_8, VAR_9, VAR_10, VAR_11);
  FUNC_1();
  return;
 }
 if (VAR_2 > VAR_1)
  FUNC_4(VAR_5, FUNC_0("Delta compression using up to %d threads"),
      VAR_0);
 VAR_12 = FUNC_20(VAR_0, sizeof(*VAR_12));


 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  unsigned VAR_16 = VAR_8 / (VAR_0 - VAR_13);


  if (VAR_16 < 2*VAR_9 && VAR_13+1 < VAR_0)
   VAR_16 = 0;

  VAR_12[VAR_13].window = VAR_9;
  VAR_12[VAR_13].depth = VAR_10;
  VAR_12[VAR_13].processed = VAR_11;
  VAR_12[VAR_13].working = 1;
  VAR_12[VAR_13].data_ready = 0;


  while (VAR_16 && VAR_16 < VAR_8 &&
         VAR_7[VAR_16]->hash &&
         VAR_7[VAR_16]->hash == VAR_7[VAR_16-1]->hash)
   VAR_16++;

  VAR_12[VAR_13].list = VAR_7;
  VAR_12[VAR_13].list_size = VAR_16;
  VAR_12[VAR_13].remaining = VAR_16;

  VAR_7 += VAR_16;
  VAR_8 -= VAR_16;
 }


 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  if (!VAR_12[VAR_13].list_size)
   continue;
  FUNC_16(&VAR_12[VAR_13].mutex, ((void*)0));
  FUNC_10(&VAR_12[VAR_13].cond, ((void*)0));
  VAR_14 = FUNC_13(&VAR_12[VAR_13].thread, ((void*)0),
         VAR_6, &VAR_12[VAR_13]);
  if (VAR_14)
   FUNC_2(FUNC_0("unable to create thread: %s"), FUNC_19(VAR_14));
  VAR_15++;
 }
 while (VAR_15) {
  struct thread_params *VAR_17 = ((void*)0);
  struct thread_params *VAR_18 = ((void*)0);
  unsigned VAR_19 = 0;

  FUNC_7();
  for (;;) {
   for (VAR_13 = 0; !VAR_17 && VAR_13 < VAR_0; VAR_13++)
    if (!VAR_12[VAR_13].working)
     VAR_17 = &VAR_12[VAR_13];
   if (VAR_17)
    break;
   FUNC_12(&VAR_3, &VAR_4);
  }

  for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++)
   if (VAR_12[VAR_13].remaining > 2*VAR_9 &&
       (!VAR_18 || VAR_18->remaining < VAR_12[VAR_13].remaining))
    VAR_18 = &VAR_12[VAR_13];
  if (VAR_18) {
   VAR_19 = VAR_18->remaining / 2;
   VAR_7 = VAR_18->list + VAR_18->list_size - VAR_19;
   while (VAR_19 && VAR_7[0]->hash &&
          VAR_7[0]->hash == VAR_7[-1]->hash) {
    VAR_7++;
    VAR_19--;
   }
   if (!VAR_19) {






    VAR_19 = VAR_18->remaining / 2;
    VAR_7 -= VAR_19;
   }
   VAR_17->list = VAR_7;
   VAR_18->list_size -= VAR_19;
   VAR_18->remaining -= VAR_19;
  }
  VAR_17->list_size = VAR_19;
  VAR_17->remaining = VAR_19;
  VAR_17->working = 1;
  FUNC_8();

  FUNC_17(&VAR_17->mutex);
  VAR_17->data_ready = 1;
  FUNC_11(&VAR_17->cond);
  FUNC_18(&VAR_17->mutex);

  if (!VAR_19) {
   FUNC_14(VAR_17->thread, ((void*)0));
   FUNC_9(&VAR_17->cond);
   FUNC_15(&VAR_17->mutex);
   VAR_15--;
  }
 }
 FUNC_1();
 FUNC_5(VAR_12);
}
