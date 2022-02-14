
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int php_worker ;
struct TYPE_5__ {TYPE_3__* ans; } ;
struct TYPE_6__ {TYPE_1__ base; int max_len; int min_len; int buf; } ;
typedef TYPE_2__ php_query_http_load_post_t ;
struct TYPE_7__ {scalar_t__ loaded_bytes; } ;
typedef TYPE_3__ php_query_http_load_post_answer_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int,char*) ;

void FUNC_4 (php_worker *VAR_1, php_query_http_load_post_t *VAR_2) {
  FUNC_1 (VAR_0);

  static php_query_http_load_post_answer_t VAR_3;
  VAR_3.loaded_bytes = FUNC_2 (VAR_1, VAR_2->buf, VAR_2->min_len, VAR_2->max_len);
  VAR_2->base.ans = &VAR_3;

  FUNC_0 (VAR_0);

  if (VAR_3.loaded_bytes < 0) {
    FUNC_3 (VAR_1, 1, "error during loading big post data");
  }
}
