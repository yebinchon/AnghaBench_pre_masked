
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ws_t ;
typedef int ws_status ;
typedef int ws_close ;
struct TYPE_4__ {int (* send_frame ) (TYPE_1__*,int,int ,int,char*,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_1__*,int,int ,int,char*,size_t) ;

ws_status FUNC_5(ws_t VAR_2, ws_close VAR_3, const char *VAR_4) {
  size_t VAR_5 = 2 + (VAR_4 ? FUNC_3(VAR_4) : 0);
  char *VAR_6 = (char *)FUNC_0(VAR_5+1, sizeof(char));
  if (!VAR_6) {
    return VAR_1;
  }
  VAR_6[0] = ((VAR_3 >> 8) & 0xFF);
  VAR_6[1] = (VAR_3 & 0xFF);
  if (VAR_4) {
    FUNC_2(VAR_6+2, VAR_4);
  }
  ws_status VAR_7 = VAR_2->send_frame(VAR_2,
      1, VAR_0, 0,
      VAR_6, VAR_5);
  FUNC_1(VAR_6);
  return VAR_7;
}
