
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ide_atapi_pc {int flags; scalar_t__* c; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ide_atapi_pc*) ;
 int FUNC_2 (int ,unsigned int*) ;

__attribute__((used)) static void FUNC_3(struct ide_atapi_pc *VAR_2, int VAR_3, u8 VAR_4)
{
 FUNC_1(VAR_2);
 VAR_2->c[0] = VAR_1;
 FUNC_2(FUNC_0(VAR_3), (unsigned int *) &VAR_2->c[1]);
 VAR_2->c[1] = VAR_4;
 VAR_2->flags |= VAR_0;
}
