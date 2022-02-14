
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct csys_block {int size_csum; int css; } ;
typedef int FILE ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int ,int *) ;

int
FUNC_4(FILE *VAR_0, struct csys_block *VAR_1)
{
 uint16_t VAR_2;
 int VAR_3;

 if (VAR_1->size_csum == 0)
  return 0;

 FUNC_0(1,"writing checksum for block");
 VAR_2 = FUNC_1(FUNC_2(VAR_1->css));
 VAR_3 = FUNC_3(VAR_0, (uint8_t *)&VAR_2, VAR_1->size_csum, ((void*)0));

 return VAR_3;
}
