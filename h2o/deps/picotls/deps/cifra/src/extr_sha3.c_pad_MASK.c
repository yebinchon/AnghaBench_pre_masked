
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int rate; int npartial; int partial; } ;
typedef TYPE_1__ cf_sha3_context ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ,int ,int,int,size_t,int ,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(cf_sha3_context *VAR_1, uint8_t VAR_2, size_t VAR_3)
{
  FUNC_0(VAR_3 >= 1);

  FUNC_1(VAR_1->partial, &VAR_1->npartial, VAR_1->rate,
                       VAR_2, 0x00, 0x80,
                       VAR_3,
                       VAR_0, VAR_1);
}
