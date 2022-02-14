
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ desc_size; int * desc_ptr; } ;
struct TYPE_3__ {scalar_t__ desc_size; int * desc_ptr; } ;
struct uclogic_params {TYPE_2__ frame; TYPE_1__ pen; scalar_t__ desc_size; int * desc_ptr; int pen_unused; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int *,int *,scalar_t__) ;

int FUNC_3(const struct uclogic_params *VAR_3,
    __u8 **VAR_4,
    unsigned int *VAR_5)
{
 bool VAR_6;
 bool VAR_7;
 bool VAR_8;
 unsigned int VAR_9;
 __u8 *VAR_10 = ((void*)0);


 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_9 = 0;

 VAR_6 = (VAR_3->desc_ptr != ((void*)0));
 VAR_7 = (!VAR_3->pen_unused && VAR_3->pen.desc_ptr != ((void*)0));
 VAR_8 = (VAR_3->frame.desc_ptr != ((void*)0));

 if (VAR_6)
  VAR_9 += VAR_3->desc_size;
 if (VAR_7)
  VAR_9 += VAR_3->pen.desc_size;
 if (VAR_8)
  VAR_9 += VAR_3->frame.desc_size;

 if (VAR_6 || VAR_7 || VAR_8) {
  __u8 *VAR_11;

  VAR_10 = FUNC_1(VAR_9, VAR_2);
  if (VAR_10 == ((void*)0))
   return -VAR_1;
  VAR_11 = VAR_10;

  if (VAR_6) {
   FUNC_2(VAR_11, VAR_3->desc_ptr,
    VAR_3->desc_size);
   VAR_11 += VAR_3->desc_size;
  }
  if (VAR_7) {
   FUNC_2(VAR_11, VAR_3->pen.desc_ptr,
    VAR_3->pen.desc_size);
   VAR_11 += VAR_3->pen.desc_size;
  }
  if (VAR_8) {
   FUNC_2(VAR_11, VAR_3->frame.desc_ptr,
    VAR_3->frame.desc_size);
   VAR_11 += VAR_3->frame.desc_size;
  }

  FUNC_0(VAR_11 != VAR_10 + VAR_9);

  *VAR_5 = VAR_9;
 }

 *VAR_4 = VAR_10;
 return 0;
}
