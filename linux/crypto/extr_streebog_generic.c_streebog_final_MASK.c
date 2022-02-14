
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * qword; } ;
struct streebog_state {TYPE_1__ hash; scalar_t__ fillsize; } ;
struct shash_desc {int tfm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 struct streebog_state* FUNC_2 (struct shash_desc*) ;
 int FUNC_3 (struct streebog_state*) ;

__attribute__((used)) static int FUNC_4(struct shash_desc *VAR_2, u8 *VAR_3)
{
 struct streebog_state *VAR_4 = FUNC_2(VAR_2);

 FUNC_3(VAR_4);
 VAR_4->fillsize = 0;
 if (FUNC_0(VAR_2->tfm) == VAR_0)
  FUNC_1(VAR_3, &VAR_4->hash.qword[4], VAR_0);
 else
  FUNC_1(VAR_3, &VAR_4->hash.qword[0], VAR_1);
 return 0;
}
