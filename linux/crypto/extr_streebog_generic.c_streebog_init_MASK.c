
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * qword; } ;
struct streebog_state {TYPE_1__ h; } ;
struct shash_desc {int tfm; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct streebog_state*,int ,int) ;
 struct streebog_state* FUNC_3 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_4(struct shash_desc *VAR_1)
{
 struct streebog_state *VAR_2 = FUNC_3(VAR_1);
 unsigned int VAR_3 = FUNC_1(VAR_1->tfm);
 unsigned int VAR_4;

 FUNC_2(VAR_2, 0, sizeof(struct streebog_state));
 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  if (VAR_3 == VAR_0)
   VAR_2->h.qword[VAR_4] = FUNC_0(0x0101010101010101ULL);
 }
 return 0;
}
