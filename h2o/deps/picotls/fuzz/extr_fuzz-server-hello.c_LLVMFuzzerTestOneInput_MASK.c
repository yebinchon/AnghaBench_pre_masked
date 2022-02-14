
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int cb; } ;
struct st_util_save_ticket_t {TYPE_1__ super; } ;
typedef int ptls_t ;
typedef int ptls_key_exchange_algorithm_t ;
struct TYPE_12__ {int * member_0; } ;
struct TYPE_11__ {TYPE_4__ member_0; } ;
struct TYPE_10__ {TYPE_3__ member_0; } ;
struct TYPE_13__ {TYPE_2__ member_0; } ;
typedef TYPE_5__ ptls_handshake_properties_t ;
struct TYPE_14__ {TYPE_1__* save_ticket; int * verify_certificate; int ** member_3; int ** member_2; int * member_1; int member_0; } ;
typedef TYPE_6__ ptls_context_t ;
typedef int ptls_cipher_suite_t ;
typedef int ptls_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *,int *,int const*,size_t*,TYPE_5__*) ;
 int * FUNC_4 (TYPE_6__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *,int *,int const*,size_t*) ;

int FUNC_6(const uint8_t *VAR_5, size_t VAR_6) {

  ptls_key_exchange_algorithm_t *VAR_7[128] = {((void*)0)};
  VAR_7[0] = &VAR_4;
  ptls_cipher_suite_t *VAR_8[] = {&VAR_3, ((void*)0)};


  ptls_context_t VAR_9 = {VAR_0, &VAR_2,
                               VAR_7, VAR_8};
  VAR_9.verify_certificate = ((void*)0);


  ptls_t *VAR_10 = FUNC_4(&VAR_9, 0);


  static struct st_util_save_ticket_t VAR_11;
  VAR_11.super.cb = VAR_1;
  VAR_9.save_ticket = &VAR_11.super;


  ptls_handshake_properties_t VAR_12 = {{{{((void*)0)}}}};


  ptls_buffer_t VAR_13;
  FUNC_1(&VAR_13, "", 0);


  FUNC_3(VAR_10, &VAR_13, ((void*)0), 0, &VAR_12);


  FUNC_0(&VAR_13);
  FUNC_1(&VAR_13, "", 0);


  size_t VAR_14 = VAR_6;
  int VAR_15 =
      FUNC_3(VAR_10, &VAR_13, VAR_5, &VAR_14, &VAR_12);


  if (VAR_15 == 0 && VAR_6 - VAR_14 > 0) {
    VAR_6 = VAR_6 - VAR_14;

    FUNC_0(&VAR_13);
    FUNC_1(&VAR_13, "", 0);

    FUNC_5(VAR_10, &VAR_13, VAR_5 + VAR_14, &VAR_6);
  }


  FUNC_0(&VAR_13);
  FUNC_2(VAR_10);

  return 0;
}
