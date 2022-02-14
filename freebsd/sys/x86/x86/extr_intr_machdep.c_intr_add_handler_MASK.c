
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intsrc {int is_handlers; int is_domain; TYPE_1__* is_pic; int is_event; } ;
typedef enum intr_type { ____Placeholder_intr_type } intr_type ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
struct TYPE_2__ {int (* pic_enable_source ) (struct intsrc*) ;int (* pic_enable_intr ) (struct intsrc*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,int ,int ,void*,int ,int,void**) ;
 struct intsrc* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct intsrc*) ;
 int VAR_1 ;
 int FUNC_4 (struct intsrc*) ;
 int FUNC_5 (struct intsrc*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(const char *VAR_2, int VAR_3, driver_filter_t VAR_4,
    driver_intr_t VAR_5, void *VAR_6, enum intr_type VAR_7, void **VAR_8,
    int VAR_9)
{
 struct intsrc *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_1(VAR_3);
 if (VAR_10 == ((void*)0))
  return (VAR_0);
 VAR_11 = FUNC_0(VAR_10->is_event, VAR_2, VAR_4, VAR_5,
     VAR_6, FUNC_2(VAR_7), VAR_7, VAR_8);
 if (VAR_11 == 0) {
  FUNC_6(&VAR_1);
  FUNC_3(VAR_10);
  VAR_10->is_handlers++;
  if (VAR_10->is_handlers == 1) {
   VAR_10->is_domain = VAR_9;
   VAR_10->is_pic->pic_enable_intr(VAR_10);
   VAR_10->is_pic->pic_enable_source(VAR_10);
  }
  FUNC_7(&VAR_1);
 }
 return (VAR_11);
}
