
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cipher_suites; int key_exchanges; int * get_time; int random_bytes; } ;
typedef TYPE_1__ ptls_context_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_4(ptls_context_t *VAR_5, char const * VAR_6, char const * VAR_7)
{
 int VAR_8 = 0;


 FUNC_1(VAR_5, 0, sizeof(ptls_context_t));
 VAR_5->random_bytes = VAR_3;
    VAR_5->get_time = &VAR_0;
 VAR_5->key_exchanges = VAR_2;
 VAR_5->cipher_suites = VAR_1;

 VAR_8 = FUNC_2(VAR_5, VAR_7);

 if (VAR_8 != 0)
 {
  FUNC_0(VAR_4, "Could not read the server certificates\n");
 }
 else
 {
  VAR_8 = FUNC_3(VAR_5, VAR_6);
 }

 return VAR_8;
}
