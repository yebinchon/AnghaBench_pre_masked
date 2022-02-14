
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* wi_t ;
typedef int wi_status ;
struct TYPE_4__ {int (* on_error ) (TYPE_1__*,char*,char const,char const,char const,char const,int ,int ,int ,int ,size_t) ;} ;


 size_t VAR_0 ;
 int FUNC_0 (char const) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,char*,char const,char const,char const,char const,int ,int ,int ,int ,size_t) ;

wi_status FUNC_2(wi_t VAR_3, const char *VAR_4, size_t *VAR_5) {
  if (!VAR_4 || !VAR_5) {
    return VAR_1;
  }
  *VAR_5 = (
      ((((unsigned char) VAR_4[0]) & 0xFF) << 24) |
      ((((unsigned char) VAR_4[1]) & 0xFF) << 16) |
      ((((unsigned char) VAR_4[2]) & 0xFF) << 8) |
      (((unsigned char) VAR_4[3]) & 0xFF));
  if (VAR_0 > 0 && *VAR_5 > VAR_0) {

    return VAR_3->on_error(VAR_3, "Invalid packet header "
        "0x%x%x%x%x == %c%c%c%c == %zd",
        VAR_4[0], VAR_4[1], VAR_4[2], VAR_4[3],
        ((VAR_4[0]) >= ' ' && (VAR_4[0]) < '~' ? (VAR_4[0]) : '.'), ((VAR_4[1]) >= ' ' && (VAR_4[1]) < '~' ? (VAR_4[1]) : '.'),
        ((VAR_4[2]) >= ' ' && (VAR_4[2]) < '~' ? (VAR_4[2]) : '.'), ((VAR_4[3]) >= ' ' && (VAR_4[3]) < '~' ? (VAR_4[3]) : '.'),
        *VAR_5);
  }
  return VAR_2;
}
