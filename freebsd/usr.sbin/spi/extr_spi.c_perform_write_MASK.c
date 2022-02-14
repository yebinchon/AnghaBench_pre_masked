
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_options {int lsb; scalar_t__ ncmd; scalar_t__ count; } ;


 int FUNC_0 (int,void*,int *,scalar_t__,int ) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (struct spi_options*) ;

__attribute__((used)) static int
FUNC_3(int VAR_0, struct spi_options *VAR_1)
{
 int VAR_2;
 void *VAR_3;



 VAR_3 = FUNC_2(VAR_1);

 if (!VAR_3) {
  VAR_2 = -1;
  goto the_end;
 }

 VAR_2 = FUNC_0(VAR_0, VAR_3, ((void*)0), VAR_1->count + VAR_1->ncmd, VAR_1->lsb);

the_end:

 FUNC_1(VAR_3);

 return VAR_2;
}
