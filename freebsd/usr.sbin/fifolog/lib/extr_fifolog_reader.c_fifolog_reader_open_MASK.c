
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fifolog_reader {int olen; int magic; TYPE_1__* ff; int * obuf; } ;
struct TYPE_2__ {int recsize; int zs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int,char*,...) ;
 char* FUNC_3 (TYPE_1__**,char const*,int ) ;
 int FUNC_4 (int ) ;

struct fifolog_reader *
FUNC_5(const char *VAR_2)
{
 const char *VAR_3;
 struct fifolog_reader *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(1, sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  FUNC_2(1, "Cannot malloc");

 VAR_3 = FUNC_3(&VAR_4->ff, VAR_2, 0);
 if (VAR_3 != ((void*)0))
  FUNC_2(1, "%s", VAR_3);

 VAR_4->obuf = FUNC_1(16, VAR_4->ff->recsize);
 if (VAR_4->obuf == ((void*)0))
  FUNC_2(1, "Cannot malloc");
 VAR_4->olen = VAR_4->ff->recsize * 16;

 VAR_5 = FUNC_4(VAR_4->ff->zs);
 FUNC_0(VAR_5 == VAR_1);

 VAR_4->magic = VAR_0;
 return (VAR_4);
}
