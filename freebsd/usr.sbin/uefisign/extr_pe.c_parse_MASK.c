
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mz_header {char* mz_signature; int mz_lfanew; } ;
struct executable {scalar_t__ x_buf; } ;


 int FUNC_0 (int,char*) ;
 void FUNC_1 (struct executable*,int ) ;
 int FUNC_2 (struct executable*,int ,int,char*) ;

void
FUNC_3(struct executable *VAR_0)
{
 const struct mz_header *VAR_1;

 FUNC_2(VAR_0, 0, sizeof(*VAR_1), "MZ header");

 VAR_1 = (struct mz_header *)VAR_0->x_buf;
 if (VAR_1->mz_signature[0] != 'M' || VAR_1->mz_signature[1] != 'Z')
  FUNC_0(1, "MZ header not found");

 return (FUNC_1(VAR_0, VAR_1->mz_lfanew));
}
