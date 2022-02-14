
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa_open_data {int tmp_size; scalar_t__ tmp_length; struct ipv4_range* tmp_base; } ;
struct ipv4_range {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct sa_open_data *VAR_2, gfp_t VAR_3)
{
 if (!VAR_2->tmp_base) {




  if (VAR_2->tmp_size < 100)
   VAR_2->tmp_size = 100;
  VAR_2->tmp_base = (struct ipv4_range *)FUNC_1(
   sizeof(struct ipv4_range) * VAR_2->tmp_size );
  if (!VAR_2->tmp_base) {
   FUNC_0(VAR_1,
    "salist: cannot allocate the temporary list for enlarging it.\n");
   return -VAR_0;
  }
  VAR_2->tmp_length = 0;
 }
 return 0;
}
