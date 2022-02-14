
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sf_buffer {scalar_t__ sdbt; unsigned long* tail; void* num_sdbt; void* num_sdb; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long*,int ) ;
 int FUNC_1 (int ,int,char*,void*,void*) ;
 scalar_t__ FUNC_2 (unsigned long*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (unsigned long*) ;
 scalar_t__ FUNC_5 (unsigned long*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct sf_buffer *VAR_3,
       unsigned long VAR_4, gfp_t VAR_5)
{
 int VAR_6, VAR_7;
 unsigned long *VAR_8, *VAR_9;

 if (!VAR_3->sdbt || !VAR_3->tail)
  return -VAR_0;

 if (!FUNC_4(VAR_3->tail))
  return -VAR_0;






 VAR_9 = VAR_3->tail;




 if (VAR_3->sdbt != FUNC_2(VAR_9)) {
  FUNC_1(VAR_2, 3, "realloc_sampling_buffer: "
        "sampling buffer is not linked: origin=%p"
        "tail=%p\n",
        (void *) VAR_3->sdbt, (void *) VAR_9);
  return -VAR_0;
 }


 VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {

  if (FUNC_5(VAR_9)) {
   VAR_8 = (unsigned long *) FUNC_3(VAR_5);
   if (!VAR_8) {
    VAR_7 = -VAR_1;
    break;
   }
   VAR_3->num_sdbt++;

   *VAR_9 = (unsigned long)(void *) VAR_8 + 1;
   VAR_9 = VAR_8;
  }






  VAR_7 = FUNC_0(VAR_9, VAR_5);
  if (VAR_7)
   break;
  VAR_3->num_sdb++;
  VAR_9++;
 }


 *VAR_9 = (unsigned long) VAR_3->sdbt + 1;
 VAR_3->tail = VAR_9;

 FUNC_1(VAR_2, 4, "realloc_sampling_buffer: new buffer"
       " settings: sdbt=%lu sdb=%lu\n",
       VAR_3->num_sdbt, VAR_3->num_sdb);
 return VAR_7;
}
