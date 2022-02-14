
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int bio; } ;
struct amiga_floppy_struct {char* trackbuf; int dirty; TYPE_2__* type; TYPE_1__* dtype; } ;
typedef int blk_status_t ;
struct TYPE_4__ {unsigned int sect_mult; } ;
struct TYPE_3__ {unsigned int sects; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct request*) ;
 unsigned int FUNC_2 (struct request*) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int,unsigned int) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (char*,unsigned int,unsigned int,char*) ;
 scalar_t__ FUNC_8 (struct request*) ;
 struct amiga_floppy_struct* VAR_5 ;

__attribute__((used)) static blk_status_t FUNC_9(struct amiga_floppy_struct *VAR_6,
        struct request *VAR_7)
{
 int VAR_8 = VAR_6 - VAR_5;
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12;
 char *VAR_13;

 for (VAR_9 = 0; VAR_9 < FUNC_1(VAR_7); VAR_9++) {





  VAR_10 = FUNC_2(VAR_7) + VAR_9;
  VAR_11 = VAR_10 / (VAR_6->dtype->sects * VAR_6->type->sect_mult);
  VAR_12 = VAR_10 % (VAR_6->dtype->sects * VAR_6->type->sect_mult);
  VAR_13 = FUNC_0(VAR_7->bio) + 512 * VAR_9;





  if (FUNC_4(VAR_8, VAR_11) == -1)
   return VAR_0;

  if (FUNC_8(VAR_7) == VAR_2) {
   FUNC_5(VAR_13, VAR_6->trackbuf + VAR_12 * 512, 512);
  } else {
   FUNC_5(VAR_6->trackbuf + VAR_12 * 512, VAR_13, 512);


   if (!FUNC_3(VAR_8))
    return VAR_0;




   VAR_6->dirty = 1;

   FUNC_6 (VAR_3 + VAR_8, VAR_4 + 1);
  }
 }

 return VAR_1;
}
