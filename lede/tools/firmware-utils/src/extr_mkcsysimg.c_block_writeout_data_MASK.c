
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csys_block {size_t size_avail; size_t file_size; int css; int padc; } ;
typedef int FILE ;


 int FUNC_0 (int,char*,size_t) ;
 int FUNC_1 (int *,struct csys_block*) ;
 int FUNC_2 (int *,size_t,int ,int ) ;

int
FUNC_3(FILE *VAR_0, struct csys_block *VAR_1)
{
 int VAR_2;
 size_t VAR_3;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;


 VAR_3 = VAR_1->size_avail - VAR_1->file_size;
 FUNC_0(1,"padding block, length=%zu", VAR_3);
 VAR_2 = FUNC_2(VAR_0, VAR_3, VAR_1->padc, VAR_1->css);

 return VAR_2;
}
