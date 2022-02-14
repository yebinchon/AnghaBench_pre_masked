
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sval2 ;
typedef int sval1 ;
struct test_ctx {int ts_type; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 () ;
 int FUNC_1 (int,char*,int ,int,int,...) ;
 int FUNC_2 (int,int ,int,int*,int) ;

__attribute__((used)) static void
FUNC_3(struct test_ctx *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

    VAR_7 = VAR_2;
    VAR_8 = -1;
    VAR_10 = -1;

    switch (VAR_4->ts_type) {
    case 130:
    case 128:
    case 131:
    case 132:
        VAR_8 = VAR_3;
        VAR_10 = VAR_4->ts_type;
        break;

    case 129:
        break;

    case 133:
        VAR_7 = VAR_1;
        break;

    default:
        FUNC_0();
    }

    VAR_9 = 1;
    VAR_6 = FUNC_2(VAR_5, VAR_0, VAR_7, &VAR_9,
      sizeof(VAR_9));
    if (VAR_6 != 0) {
        FUNC_1(1, "%s: setup_udp: setsockopt(%d, %d, 1)", VAR_4->name,
          VAR_5, VAR_7);
    }
    if (VAR_8 == -1)
        return;
    VAR_6 = FUNC_2(VAR_5, VAR_0, VAR_8, &VAR_10,
      sizeof(VAR_10));
    if (VAR_6 != 0) {
        FUNC_1(1, "%s: setup_udp: setsockopt(%d, %d, %d)",
          VAR_4->name, VAR_5, VAR_8, VAR_10);
    }
}
