
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* wi_t ;
typedef int wi_status ;
struct TYPE_3__ {scalar_t__* is_debug; } ;


 int VAR_0 ;
 int FUNC_0 (char**,char const*,size_t,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,size_t,char*) ;

wi_status FUNC_3(wi_t VAR_1, const char *VAR_2,
    const char *VAR_3, size_t VAR_4) {
  if (VAR_1->is_debug && *VAR_1->is_debug) {
    char *VAR_5;
    FUNC_0(&VAR_5, VAR_3, VAR_4, 80, 30);
    FUNC_2("%s[%zd]:\n%s\n", VAR_2, VAR_4, VAR_5);
    FUNC_1(VAR_5);
  }
  return VAR_0;
}
