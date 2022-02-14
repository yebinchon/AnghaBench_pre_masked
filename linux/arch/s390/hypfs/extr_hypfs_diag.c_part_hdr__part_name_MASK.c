
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diag204_x_part_hdr {int part_name; } ;
struct diag204_part_hdr {int part_name; } ;
typedef enum diag204_format { ____Placeholder_diag204_format } diag204_format ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (char*,int ,size_t) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static inline void FUNC_3(enum diag204_format VAR_2, void *VAR_3,
           char *VAR_4)
{
 if (VAR_2 == VAR_0)
  FUNC_1(VAR_4, ((struct diag204_part_hdr *)VAR_3)->part_name,
         VAR_1);
 else
  FUNC_1(VAR_4, ((struct diag204_x_part_hdr *)VAR_3)->part_name,
         VAR_1);
 FUNC_0(VAR_4, VAR_1);
 VAR_4[VAR_1] = 0;
 FUNC_2(VAR_4);
}
