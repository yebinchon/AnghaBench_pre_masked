
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc_buffer {scalar_t__ cbidx; struct callback* callbacks; } ;
struct callback {void (* fn ) (void*) ;void* data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mc_buffer* FUNC_0 (int *) ;
 int FUNC_1 (void (*) (void*),void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

void FUNC_4(void (*VAR_3)(void *), void *VAR_4)
{
 struct mc_buffer *VAR_5 = FUNC_0(&VAR_2);
 struct callback *VAR_6;

 if (VAR_5->cbidx == VAR_0) {
  FUNC_2(VAR_1);
  FUNC_3();
 }

 FUNC_1(VAR_3, VAR_4);

 VAR_6 = &VAR_5->callbacks[VAR_5->cbidx++];
 VAR_6->fn = VAR_3;
 VAR_6->data = VAR_4;
}
