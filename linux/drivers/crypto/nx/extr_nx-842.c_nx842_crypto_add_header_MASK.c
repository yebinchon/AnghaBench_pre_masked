
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nx842_crypto_header {TYPE_1__* group; int groups; } ;
struct TYPE_2__ {int padding; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct nx842_crypto_header*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int,int,int *,int,int ) ;

__attribute__((used)) static int FUNC_5(struct nx842_crypto_header *VAR_2, u8 *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2->groups);


 if (VAR_4 > FUNC_1(VAR_2->group[0].padding)) {
  FUNC_3("Internal error: no space for header\n");
  return -VAR_1;
 }

 FUNC_2(VAR_3, VAR_2, VAR_4);

 FUNC_4("header ", VAR_0, 16, 1, VAR_3, VAR_4, 0);

 return 0;
}
