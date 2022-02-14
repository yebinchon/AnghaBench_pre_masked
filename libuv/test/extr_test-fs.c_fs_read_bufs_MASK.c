
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ base; } ;
typedef TYPE_1__ uv_buf_t ;
struct TYPE_12__ {scalar_t__ result; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int) ;
 TYPE_2__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int *,TYPE_2__*,int,int *) ;
 scalar_t__ FUNC_4 (int *,TYPE_2__*,char*,int,int ,int *) ;
 int FUNC_5 (int *,TYPE_2__*,scalar_t__,TYPE_1__*,int,int,int *) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(int VAR_5) {
  char VAR_6[768];
  uv_buf_t VAR_7[4];

  FUNC_0(0 <= FUNC_4(((void*)0), &VAR_3,
                         "test/fixtures/lorem_ipsum.txt",
                         VAR_0 | VAR_5, 0, ((void*)0)));
  FUNC_0(VAR_3 >= 0);
  FUNC_6(&VAR_3);

  FUNC_0(VAR_1 == FUNC_5(((void*)0), &VAR_4, VAR_3,
                                 ((void*)0), 0, 0, ((void*)0)));
  FUNC_0(VAR_1 == FUNC_5(((void*)0), &VAR_4, VAR_3,
                                 ((void*)0), 1, 0, ((void*)0)));
  FUNC_0(VAR_1 == FUNC_5(((void*)0), &VAR_4, VAR_3,
                                 VAR_7, 0, 0, ((void*)0)));

  VAR_7[0] = FUNC_2(VAR_6 + 0, 256);
  VAR_7[1] = FUNC_2(VAR_6 + 256, 256);
  VAR_7[2] = FUNC_2(VAR_6 + 512, 128);
  VAR_7[3] = FUNC_2(VAR_6 + 640, 128);

  FUNC_0(446 == FUNC_5(((void*)0),
                           &VAR_4,
                           VAR_3,
                           VAR_7 + 0,
                           2,
                           0,
                           ((void*)0)));
  FUNC_0(VAR_4.result == 446);
  FUNC_6(&VAR_4);

  FUNC_0(190 == FUNC_5(((void*)0),
                           &VAR_4,
                           VAR_3,
                           VAR_7 + 2,
                           2,
                           256,
                           ((void*)0)));
  FUNC_0(VAR_4.result == 190);
  FUNC_6(&VAR_4);

  FUNC_0(0 == FUNC_1(VAR_7[1].base + 0, VAR_7[2].base, 128));
  FUNC_0(0 == FUNC_1(VAR_7[1].base + 128, VAR_7[3].base, 190 - 128));

  FUNC_0(0 == FUNC_3(((void*)0), &VAR_2, VAR_3, ((void*)0)));
  FUNC_0(VAR_2.result == 0);
  FUNC_6(&VAR_2);
}
