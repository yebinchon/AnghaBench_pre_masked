
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_options {int count; int ncmd; int lsb; int pcmd; } ;


 int FUNC_0 (void*,struct spi_options*) ;
 int FUNC_1 (int,void*,void*,int,int ) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (void*,int ,int) ;

__attribute__((used)) static int
FUNC_6(int VAR_0, struct spi_options *VAR_1)
{
 int VAR_2, VAR_3;
 void *VAR_4, *VAR_5;

 VAR_4 = ((void*)0);
 VAR_2 = VAR_1->count + VAR_1->ncmd;


 VAR_5 = FUNC_4(VAR_2);

 if (!VAR_5) {
  VAR_3 = -1;
  goto the_end;
 }

 FUNC_2(VAR_5, VAR_2);


 if (VAR_1->pcmd && VAR_1->ncmd > 0)
  FUNC_5(VAR_5, VAR_1->pcmd, VAR_1->ncmd);

 VAR_4 = FUNC_4(VAR_2 + 1);

 if (!VAR_4) {
  VAR_3 = -2;
  goto the_end;
 }

 FUNC_2(VAR_4, VAR_2);

 VAR_3 = FUNC_1(VAR_0, VAR_5, VAR_4, VAR_2, VAR_1->lsb);

 if (!VAR_3 && VAR_1->count > 0)
  VAR_3 = FUNC_0(VAR_4, VAR_1);

the_end:

 FUNC_3(VAR_4);
 FUNC_3(VAR_5);

 return VAR_3;
}
