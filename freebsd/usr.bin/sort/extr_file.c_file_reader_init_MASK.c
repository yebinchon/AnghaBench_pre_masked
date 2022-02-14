
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {size_t st_size; } ;
struct file_reader {char elsymb; int fd; size_t mmapsize; int cbsz; scalar_t__ bsz; int * file; void* buffer; scalar_t__ strbeg; int * mmapaddr; int * mmapptr; int fname; } ;
struct TYPE_2__ {scalar_t__ zflag; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int * VAR_7 ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (void*,int,int,int *) ;
 scalar_t__ FUNC_4 (int,struct stat*) ;
 int FUNC_5 (struct file_reader*,int ,int) ;
 void* FUNC_6 (int *,size_t,int ,int,int,int ) ;
 int FUNC_7 (char const*,int ) ;
 int * FUNC_8 (char const*,char*) ;
 void* FUNC_9 (int) ;
 TYPE_1__ VAR_8 ;
 int FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 scalar_t__ VAR_9 ;

struct file_reader *
FUNC_12(const char *VAR_10)
{
 struct file_reader *VAR_11;

 if (VAR_10 == ((void*)0))
  VAR_10 = "-";

 VAR_11 = FUNC_9(sizeof(struct file_reader));
 FUNC_5(VAR_11, 0, sizeof(struct file_reader));

 VAR_11->elsymb = '\n';
 if (VAR_8.zflag)
  VAR_11->elsymb = 0;

 VAR_11->fname = FUNC_10(VAR_10);

 if (FUNC_11(VAR_10, "-") && (VAR_7 == ((void*)0)) && VAR_9) {

  do {
   struct stat VAR_12;
   void *VAR_13;
   size_t VAR_14 = 0;
   int VAR_15, VAR_16;

   VAR_16 = VAR_1 | VAR_2;

   VAR_15 = FUNC_7(VAR_10, VAR_4);
   if (VAR_15 < 0)
    FUNC_1(2, ((void*)0));

   if (FUNC_4(VAR_15, &VAR_12) < 0) {
    FUNC_0(VAR_15);
    break;
   }

   VAR_14 = VAR_12.st_size;





   VAR_13 = FUNC_6(((void*)0), VAR_14, VAR_5, VAR_16, VAR_15, 0);
   if (VAR_13 == VAR_0) {
    FUNC_0(VAR_15);
    break;
   }

   VAR_11->fd = VAR_15;
   VAR_11->mmapaddr = VAR_13;
   VAR_11->mmapsize = VAR_14;
   VAR_11->mmapptr = VAR_11->mmapaddr;

  } while (0);
 }

 if (VAR_11->mmapaddr == ((void*)0)) {
  VAR_11->file = FUNC_8(VAR_10, "r");
  if (VAR_11->file == ((void*)0))
   FUNC_1(2, ((void*)0));

  if (FUNC_11(VAR_10, "-")) {
   VAR_11->cbsz = VAR_6;
   VAR_11->buffer = FUNC_9(VAR_11->cbsz);
   VAR_11->bsz = 0;
   VAR_11->strbeg = 0;

   VAR_11->bsz = FUNC_3(VAR_11->buffer, 1, VAR_11->cbsz, VAR_11->file);
   if (VAR_11->bsz == 0) {
    if (FUNC_2(VAR_11->file))
     FUNC_1(2, ((void*)0));
   }
  }
 }

 return (VAR_11);
}
