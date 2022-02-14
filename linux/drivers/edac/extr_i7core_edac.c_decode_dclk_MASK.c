
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct memdev_dmi_entry {scalar_t__ conf_mem_clk_speed; scalar_t__ speed; scalar_t__ size; unsigned long length; int type; } ;
struct dmi_header {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(const struct dmi_header *VAR_1, void *VAR_2)
{
 int *VAR_3 = VAR_2;
 u16 VAR_4;

 if (*VAR_3 == -1)
  return;

 if (VAR_1->type == VAR_0) {
  struct memdev_dmi_entry *VAR_5 =
   (struct memdev_dmi_entry *)VAR_1;
  unsigned long VAR_6 =
   (unsigned long)&VAR_5->conf_mem_clk_speed -
   (unsigned long)&VAR_5->type;
  unsigned long VAR_7 =
   (unsigned long)&VAR_5->speed -
   (unsigned long)&VAR_5->type;


  if (VAR_5->size == 0)
   return;





  if (VAR_5->length > VAR_6) {
   VAR_4 =
    VAR_5->conf_mem_clk_speed;
  } else if (VAR_5->length > VAR_7) {
   VAR_4 = VAR_5->speed;
  } else {
   *VAR_3 = -1;
   return;
  }

  if (*VAR_3 == 0) {

   if (VAR_4 > 0) {

    *VAR_3 = VAR_4;
   } else {

    *VAR_3 = -1;
   }
  } else if (*VAR_3 > 0 &&
      *VAR_3 != VAR_4) {




   *VAR_3 = -1;
  }
 }
}
