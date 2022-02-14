
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mfi_ld_props {int ld; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int,int ,struct mfi_ld_props*,int,int *,int,int *) ;

__attribute__((used)) static int
FUNC_2(int VAR_1, struct mfi_ld_props *VAR_2)
{
 uint8_t VAR_3[4];

 FUNC_0(VAR_3, &VAR_2->ld);
 return (FUNC_1(VAR_1, VAR_0, VAR_2,
     sizeof(struct mfi_ld_props), VAR_3, 4, ((void*)0)));
}
