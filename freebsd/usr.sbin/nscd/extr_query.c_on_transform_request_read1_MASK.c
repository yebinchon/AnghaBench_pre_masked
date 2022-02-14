
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {scalar_t__ kevent_watermark; int (* read_func ) (struct query_state*,scalar_t__*,int) ;int process_func; int request; } ;
struct cache_transform_request {scalar_t__ entry_length; scalar_t__ transformation_type; int * entry; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int (*) (struct query_state*)) ;
 int FUNC_2 (int (*) (struct query_state*)) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int,scalar_t__) ;
 struct cache_transform_request* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct query_state*,scalar_t__*,int) ;
 int FUNC_8 (struct query_state*,scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_9(struct query_state *VAR_5)
{
 struct cache_transform_request *VAR_6;
 ssize_t VAR_7;

 FUNC_1(FUNC_9);
 if (VAR_5->kevent_watermark == 0)
  VAR_5->kevent_watermark = sizeof(size_t) + sizeof(int);
 else {
  FUNC_6(&VAR_5->request, VAR_0);
  VAR_6 =
   FUNC_5(&VAR_5->request);

  VAR_7 = VAR_5->read_func(VAR_5,
       &VAR_6->entry_length, sizeof(size_t));
  VAR_7 += VAR_5->read_func(VAR_5,
       &VAR_6->transformation_type, sizeof(int));

  if (VAR_7 != sizeof(size_t) + sizeof(int)) {
   FUNC_2(FUNC_9);
   return (-1);
  }

  if ((VAR_6->transformation_type != VAR_2) &&
      (VAR_6->transformation_type != VAR_1)) {
   FUNC_2(FUNC_9);
   return (-1);
  }

  if (VAR_6->entry_length != 0) {
   if (FUNC_0(VAR_6->entry_length)) {
    FUNC_2(FUNC_9);
    return (-1);
   }

   VAR_6->entry = FUNC_4(1,
    VAR_6->entry_length + 1);
   FUNC_3(VAR_6->entry != ((void*)0));

   VAR_5->process_func = VAR_4;
  } else
   VAR_5->process_func = VAR_3;

  VAR_5->kevent_watermark = VAR_6->entry_length;
 }

 FUNC_2(FUNC_9);
 return (0);
}
