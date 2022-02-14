
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct openpic {int dummy; } ;
typedef int gpa_t ;


 int FUNC_0 (struct openpic*,int,int ,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, gpa_t VAR_1, u32 VAR_2)
{
 struct openpic *VAR_3 = VAR_0;

 return FUNC_0(VAR_3, VAR_1, VAR_2,
      (VAR_1 & 0x1f000) >> 12);
}
