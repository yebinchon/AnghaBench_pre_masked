
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hisi_zip_sqe {int dw9; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct hisi_zip_sqe *VAR_1, u8 VAR_2)
{
 u32 VAR_3;

 VAR_3 = (VAR_1->dw9) & ~VAR_0;
 VAR_3 |= FUNC_0(VAR_0, VAR_2);
 VAR_1->dw9 = VAR_3;
}
