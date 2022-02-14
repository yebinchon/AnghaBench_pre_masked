
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* ws_t ;
typedef int ws_status ;
typedef int uint8_t ;
struct TYPE_7__ {int (* send_frame ) (TYPE_1__*,int,int,int,char const*,size_t) ;int (* send_close ) (TYPE_1__*,int ,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int,int,int,char const*,size_t) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int FUNC_3 (TYPE_1__*,int,int,int,char const*,size_t) ;

ws_status FUNC_4(ws_t VAR_4,
    bool VAR_5, uint8_t VAR_6, bool VAR_7,
    const char *VAR_8, size_t VAR_9,
    bool *VAR_10) {
  switch (VAR_6) {
    case 128:
    case 132:
      if (!VAR_5) {

        *VAR_10 = 1;
        return VAR_3;
      }
      if (!VAR_7) {
        return VAR_4->send_close(VAR_4, VAR_1,
            "Clients must mask");
      }

      return VAR_4->send_frame(VAR_4,
          1, VAR_6, 0,
          VAR_8, VAR_9);

    case 131:

      return VAR_4->send_close(VAR_4, VAR_0, ((void*)0));

    case 130:

      return VAR_4->send_frame(VAR_4,
          1, 129, 0,
          VAR_8, VAR_9);

    case 129:
      return VAR_3;

    default:
      return VAR_2;
  }
}
