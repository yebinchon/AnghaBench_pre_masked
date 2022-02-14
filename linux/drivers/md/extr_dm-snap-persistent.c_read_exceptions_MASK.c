
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pstore {scalar_t__ current_area; TYPE_1__* store; int area; } ;
typedef void dm_bufio_client ;
struct dm_buffer {int dummy; } ;
typedef scalar_t__ chunk_t ;
struct TYPE_4__ {int bdev; } ;
struct TYPE_3__ {int chunk_size; int snap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct pstore*,scalar_t__) ;
 void* FUNC_3 (int ,int,int,int ,int *,int *) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*,scalar_t__) ;
 scalar_t__ FUNC_6 (void*) ;
 int FUNC_7 (void*,scalar_t__,int) ;
 void* FUNC_8 (void*,scalar_t__,struct dm_buffer**) ;
 int FUNC_9 (struct dm_buffer*) ;
 int FUNC_10 (void*,scalar_t__) ;
 TYPE_2__* FUNC_11 (int ) ;
 int FUNC_12 (struct pstore*,void*,int (*) (void*,chunk_t,chunk_t),void*,int*) ;
 int FUNC_13 (int ,void*,int) ;
 int FUNC_14 (struct pstore*) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct pstore *VAR_2,
      int (*VAR_3)(void *VAR_4, chunk_t VAR_5,
        chunk_t VAR_6),
      void *VAR_7)
{
 int VAR_8, VAR_9 = 1;
 struct dm_bufio_client *VAR_10;
 chunk_t VAR_11 = 0;

 VAR_10 = FUNC_3(FUNC_11(VAR_2->store->snap)->bdev,
     VAR_2->store->chunk_size << VAR_1,
     1, 0, ((void*)0), ((void*)0));

 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);




 FUNC_10(VAR_10, 1 + VAR_0);





 for (VAR_2->current_area = 0; VAR_9; VAR_2->current_area++) {
  struct dm_buffer *VAR_12;
  void *VAR_13;
  chunk_t VAR_14;

  if (FUNC_15(VAR_11 < VAR_2->current_area))
   VAR_11 = VAR_2->current_area;

  if (VAR_0) do {
   chunk_t VAR_15 = FUNC_2(VAR_2, VAR_11);
   if (FUNC_15(VAR_15 >= FUNC_6(VAR_10)))
    break;
   FUNC_7(VAR_10, VAR_15, 1);
   VAR_11++;
   if (FUNC_15(!VAR_11))
    break;
  } while (VAR_11 <= VAR_2->current_area + VAR_0);

  VAR_14 = FUNC_2(VAR_2, VAR_2->current_area);

  VAR_13 = FUNC_8(VAR_10, VAR_14, &VAR_12);
  if (FUNC_0(VAR_13)) {
   VAR_8 = FUNC_1(VAR_13);
   goto ret_destroy_bufio;
  }

  VAR_8 = FUNC_12(VAR_2, VAR_13, VAR_3, VAR_7,
          &VAR_9);

  if (!VAR_9)
   FUNC_13(VAR_2->area, VAR_13, VAR_2->store->chunk_size << VAR_1);

  FUNC_9(VAR_12);

  FUNC_5(VAR_10, VAR_14);

  if (FUNC_15(VAR_8))
   goto ret_destroy_bufio;
 }

 VAR_2->current_area--;

 FUNC_14(VAR_2);

 VAR_8 = 0;

ret_destroy_bufio:
 FUNC_4(VAR_10);

 return VAR_8;
}
