
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int,int*) ;
 int FUNC_1 (char*,int,...) ;

__attribute__((used)) static int FUNC_2(int VAR_2, int VAR_3, u32 *VAR_4)
{
 u32 VAR_5, VAR_6;
 FUNC_1("local_read_config from %d size %d\n", VAR_2, VAR_3);
 VAR_5 = VAR_2 % 4;
 FUNC_0(VAR_2 & ~3, &VAR_6);
 *VAR_4 = (VAR_6 >> (8*VAR_5)) & VAR_1[VAR_3];
 FUNC_1("local_read_config read %#x\n", *VAR_4);
 return VAR_0;
}
