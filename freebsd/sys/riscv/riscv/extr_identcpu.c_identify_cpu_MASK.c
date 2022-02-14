
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef size_t u_int ;
struct cpu_parts {scalar_t__ part_id; char* part_name; } ;
struct TYPE_5__ {char* cpu_impl_name; char* cpu_part_name; scalar_t__ cpu_part_num; scalar_t__ cpu_impl; } ;
struct TYPE_4__ {scalar_t__ impl_id; char* impl_name; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct cpu_parts* VAR_3 ;
 int VAR_4 ;
 size_t FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,size_t,char*,char*) ;

void
FUNC_5(void)
{
 const struct cpu_parts *VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;
 uint64_t VAR_8;
 uint64_t VAR_9;
 u_int VAR_10;
 size_t VAR_11;

 VAR_5 = ((void*)0);


 VAR_8 = 0;
 VAR_9 = 0;

 VAR_10 = FUNC_2(VAR_4);

 VAR_7 = FUNC_0(VAR_8);
 for (VAR_11 = 0; VAR_11 < FUNC_3(VAR_2); VAR_11++) {
  if (VAR_7 == VAR_2[VAR_11].impl_id ||
      VAR_2[VAR_11].impl_id == 0) {
   VAR_1[VAR_10].cpu_impl = VAR_7;
   VAR_1[VAR_10].cpu_impl_name = VAR_2[VAR_11].impl_name;
   VAR_5 = VAR_3;
   break;
  }
 }

 VAR_6 = FUNC_1(VAR_9);
 for (VAR_11 = 0; &VAR_5[VAR_11] != ((void*)0); VAR_11++) {
  if (VAR_6 == VAR_5[VAR_11].part_id ||
      VAR_5[VAR_11].part_id == -1) {
   VAR_1[VAR_10].cpu_part_num = VAR_6;
   VAR_1[VAR_10].cpu_part_name = VAR_5[VAR_11].part_name;
   break;
  }
 }


 if (VAR_10 == 0 || VAR_0) {
  FUNC_4("CPU(%d): %s %s\n", VAR_10,
      VAR_1[VAR_10].cpu_impl_name,
      VAR_1[VAR_10].cpu_part_name);
 }
}
