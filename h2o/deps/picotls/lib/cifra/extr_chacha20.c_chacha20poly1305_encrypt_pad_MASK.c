
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cf_poly1305 ;


 int FUNC_0 (int *,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(cf_poly1305 *VAR_1, size_t VAR_2)
{
    if (VAR_2 % 16 != 0)
        FUNC_0(VAR_1, VAR_0, 16 - (VAR_2 % 16));
}
