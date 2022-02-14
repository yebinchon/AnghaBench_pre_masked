
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ar_context {unsigned int last_buffer_index; TYPE_1__* descriptors; } ;
typedef scalar_t__ __le16 ;
struct TYPE_2__ {int res_count; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ar_context*,char*) ;
 unsigned int FUNC_2 (struct ar_context*) ;
 unsigned int FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;

__attribute__((used)) static unsigned int FUNC_7(struct ar_context *VAR_2,
       unsigned int *VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6 = VAR_2->last_buffer_index;
 __le16 VAR_7, VAR_8;

 VAR_4 = FUNC_2(VAR_2);
 VAR_7 = FUNC_0(VAR_2->descriptors[VAR_4].res_count);


 while (VAR_4 != VAR_6 && VAR_7 == 0) {


  VAR_5 = FUNC_3(VAR_4);
  FUNC_6();
  VAR_8 = FUNC_0(VAR_2->descriptors[VAR_5].res_count);




  if (VAR_8 == FUNC_4(VAR_1)) {







   if (VAR_0 > VAR_1 && VAR_4 != VAR_6) {
    VAR_5 = FUNC_3(VAR_5);
    FUNC_6();
    VAR_8 = FUNC_0(VAR_2->descriptors[VAR_5].res_count);
    if (VAR_8 != FUNC_4(VAR_1))
     goto next_buffer_is_active;
   }

   break;
  }

next_buffer_is_active:
  VAR_4 = VAR_5;
  VAR_7 = VAR_8;
 }

 FUNC_6();

 *VAR_3 = VAR_1 - FUNC_5(VAR_7);
 if (*VAR_3 > VAR_1) {
  *VAR_3 = 0;
  FUNC_1(VAR_2, "corrupted descriptor");
 }

 return VAR_4;
}
