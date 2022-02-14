
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_thread_req {int length; int sectorsize; char* buffer; void* error; int * fds; int req; scalar_t__* offsets; scalar_t__ offset; int sector_mask; } ;
typedef scalar_t__ __u64 ;


 void* VAR_0 ;

 int VAR_1 ;



 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*,int ,unsigned long) ;
 int FUNC_3 (int ,scalar_t__,unsigned long) ;
 int FUNC_4 (int ,char*,unsigned long,scalar_t__) ;
 int FUNC_5 (int ,char*,unsigned long,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,unsigned char*) ;
 void* FUNC_9 (struct io_thread_req*) ;

__attribute__((used)) static void FUNC_10(struct io_thread_req *VAR_2)
{
 char *VAR_3 = ((void*)0);
 unsigned long VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 __u64 VAR_10;



 if (FUNC_7(VAR_2->req) == VAR_1) {

  VAR_2->error = FUNC_1(-FUNC_6(VAR_2->fds[0]));
  return;
 }

 VAR_6 = VAR_2->length / VAR_2->sectorsize;
 VAR_7 = 0;
 do {
  VAR_9 = FUNC_8(VAR_7, (unsigned char *) &VAR_2->sector_mask);
  VAR_8 = VAR_7;
  while((VAR_8 < VAR_6) &&
        (FUNC_8(VAR_8, (unsigned char *)
        &VAR_2->sector_mask) == VAR_9))
   VAR_8++;

  VAR_10 = VAR_2->offset + VAR_2->offsets[VAR_9] +
   VAR_7 * VAR_2->sectorsize;
  VAR_4 = (VAR_8 - VAR_7) * VAR_2->sectorsize;
  if (VAR_2->buffer != ((void*)0))
   VAR_3 = &VAR_2->buffer[VAR_7 * VAR_2->sectorsize];

  switch (FUNC_7(VAR_2->req)) {
  case 130:
   VAR_5 = 0;
   do {
    VAR_3 = &VAR_3[VAR_5];
    VAR_4 -= VAR_5;
    VAR_5 = FUNC_4(VAR_2->fds[VAR_9], VAR_3, VAR_4, VAR_10);
    if (VAR_5 < 0) {
     VAR_2->error = FUNC_1(-VAR_5);
     return;
    }
   } while((VAR_5 < VAR_4) && (VAR_5 != 0));
   if (VAR_5 < VAR_4) FUNC_2(&VAR_3[VAR_5], 0, VAR_4 - VAR_5);
   break;
  case 129:
   VAR_5 = FUNC_5(VAR_2->fds[VAR_9], VAR_3, VAR_4, VAR_10);
   if(VAR_5 != VAR_4){
    VAR_2->error = FUNC_1(-VAR_5);
    return;
   }
   break;
  case 131:
  case 128:
   VAR_5 = FUNC_3(VAR_2->fds[VAR_9], VAR_10, VAR_4);
   if (VAR_5) {
    VAR_2->error = FUNC_1(-VAR_5);
    return;
   }
   break;
  default:
   FUNC_0(1);
   VAR_2->error = VAR_0;
   return;
  }

  VAR_7 = VAR_8;
 } while(VAR_7 < VAR_6);

 VAR_2->error = FUNC_9(VAR_2);
}
