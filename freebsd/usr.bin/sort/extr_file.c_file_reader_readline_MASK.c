
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_reader {unsigned char* mmapaddr; int mmapsize; unsigned char* mmapptr; scalar_t__ file; size_t bsz; size_t strbeg; unsigned char* buffer; size_t cbsz; int rb; int elsymb; } ;
struct bwstring {int dummy; } ;
struct TYPE_2__ {int zflag; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,size_t) ;
 struct bwstring* FUNC_1 (unsigned char*,int) ;
 struct bwstring* FUNC_2 (scalar_t__,size_t*,int ,int *) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 size_t FUNC_6 (unsigned char*,int,size_t,scalar_t__) ;
 unsigned char* FUNC_7 (unsigned char*,int ,size_t) ;
 TYPE_1__ VAR_1 ;
 unsigned char* FUNC_8 (unsigned char*,int) ;
 scalar_t__ VAR_2 ;

struct bwstring *
FUNC_9(struct file_reader *VAR_3)
{
 struct bwstring *VAR_4 = ((void*)0);

 if (VAR_3->mmapaddr) {
  unsigned char *VAR_5;

  VAR_5 = VAR_3->mmapaddr + VAR_3->mmapsize;
  if (VAR_3->mmapptr >= VAR_5)
   return (((void*)0));
  else {
   unsigned char *VAR_6;
   size_t VAR_7;

   VAR_7 = VAR_5 - VAR_3->mmapptr;
   VAR_6 = FUNC_7(VAR_3->mmapptr, VAR_3->elsymb, VAR_7);

   if (VAR_6 == ((void*)0)) {
    VAR_4 = FUNC_1(VAR_3->mmapptr, VAR_7);
    VAR_3->mmapptr = VAR_5;
   } else {
    VAR_4 = FUNC_1(VAR_3->mmapptr, VAR_6 -
        VAR_3->mmapptr);
    VAR_3->mmapptr = VAR_6 + 1;
   }
  }

 } else if (VAR_3->file != VAR_2) {
  unsigned char *VAR_8;
  size_t VAR_9, VAR_10, VAR_11;

  VAR_11 = 0;
  VAR_10 = 0;
  VAR_8 = ((void*)0);

  if (VAR_3->bsz > VAR_3->strbeg)
   VAR_10 = VAR_3->bsz - VAR_3->strbeg;


  for (;;) {
   if (VAR_10 > VAR_11)
    VAR_8 = FUNC_7(VAR_3->buffer + VAR_3->strbeg +
        VAR_11, VAR_3->elsymb, VAR_10 -
        VAR_11);
   else
    VAR_8 = ((void*)0);

   if (VAR_8)
    break;
   if (FUNC_4(VAR_3->file))
    break;

   if (VAR_3->bsz != VAR_3->cbsz)

    FUNC_3(2, "File read software error 1");

   if (VAR_10 > (VAR_0 >> 1)) {
    VAR_11 = VAR_3->cbsz - VAR_3->strbeg;
    VAR_3->cbsz += VAR_0;
    VAR_3->buffer = FUNC_8(VAR_3->buffer,
        VAR_3->cbsz);
    VAR_9 = FUNC_6(VAR_3->buffer + VAR_3->bsz, 1,
        VAR_0, VAR_3->file);
    if (VAR_9 == 0) {
     if (FUNC_5(VAR_3->file))
      FUNC_3(2, ((void*)0));
     break;
    }
    VAR_3->bsz += VAR_9;
    VAR_10 += VAR_9;
   } else {
    if (VAR_10 > 0 && VAR_3->strbeg>0)
     FUNC_0(VAR_3->buffer + VAR_3->strbeg,
         VAR_3->buffer, VAR_10);

    VAR_3->strbeg = 0;
    VAR_11 = VAR_10;
    VAR_9 = FUNC_6(VAR_3->buffer + VAR_10, 1,
        VAR_3->cbsz - VAR_10, VAR_3->file);
    if (VAR_9 == 0) {
     if (FUNC_5(VAR_3->file))
      FUNC_3(2, ((void*)0));
     break;
    }
    VAR_3->bsz = VAR_10 + VAR_9;
    VAR_10 = VAR_3->bsz;
   }
  }

  if (VAR_8 == ((void*)0))
   VAR_8 = VAR_3->buffer + VAR_3->bsz;

  if ((VAR_3->buffer + VAR_3->strbeg <= VAR_8) &&
      (VAR_3->strbeg < VAR_3->bsz) && (VAR_10>0))
   VAR_4 = FUNC_1(VAR_3->buffer + VAR_3->strbeg, VAR_8 -
       VAR_3->buffer - VAR_3->strbeg);

  VAR_3->strbeg = (VAR_8 - VAR_3->buffer) + 1;

 } else {
  size_t VAR_12 = 0;

  VAR_4 = FUNC_2(VAR_3->file, &VAR_12, VAR_1.zflag,
      &(VAR_3->rb));
 }

 return (VAR_4);
}
