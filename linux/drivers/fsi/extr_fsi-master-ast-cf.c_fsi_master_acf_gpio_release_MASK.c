
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_master_acf {scalar_t__ cvic; scalar_t__ sram; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(void *VAR_2)
{
 struct fsi_master_acf *VAR_3 = VAR_2;


 FUNC_1(0, VAR_3->sram + VAR_0);


 if (VAR_3->cvic)
  FUNC_0(0x2, VAR_3->cvic + VAR_1);

 return 0;
}
