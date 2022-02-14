
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amd64_pvt {int fam; int dclr0; int dbam0; int dbam1; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct amd64_pvt *VAR_1)
{
 int VAR_2, VAR_3, VAR_4 = 0;


 if (VAR_1->fam == 0x10 && (VAR_1->dclr0 & VAR_0))
  return 2;
 FUNC_2(0, "Data width is not 128 bits - need more decoding\n");






 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  u32 VAR_5 = (VAR_2 ? VAR_1->dbam1 : VAR_1->dbam0);

  for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
   if (FUNC_0(VAR_3, VAR_5) > 0) {
    VAR_4++;
    break;
   }
  }
 }

 if (VAR_4 > 2)
  VAR_4 = 2;

 FUNC_1("MCT channel count: %d\n", VAR_4);

 return VAR_4;
}
