
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float member_0; float member_1; float member_2; float member_3; } ;
typedef TYPE_1__ vec4_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,char*,TYPE_1__,int ,int,int,scalar_t__,int ) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,char*,int*,int*,int*,int*,TYPE_1__) ;
 int FUNC_3 (int ,int ,scalar_t__,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4( void ) {
 char VAR_5[80];
 int VAR_6 = 0;
 int VAR_7, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 int VAR_11 = 1;
 vec4_t VAR_12 = {1.0f, 1.0f, 1.0f, 1.0f};
 VAR_6 = FUNC_3(
   VAR_3, VAR_2, VAR_0 + 4, 80 );
 for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7) {
  FUNC_2( VAR_7, VAR_5, &VAR_8, &VAR_9, &VAR_10, &VAR_11, VAR_12 );
  VAR_9 = VAR_9 + 2;
  switch (VAR_10) {
   case 0:
    break;
   case 1:
    VAR_8 -= FUNC_1( VAR_5 ) * VAR_1;
    break;
   case 2:
   default:
    VAR_8 -= FUNC_1( VAR_5 ) * VAR_1 / 2;
    break;
  }
  FUNC_0(
    VAR_8, VAR_9, VAR_5, VAR_12,
                   VAR_4,
               VAR_11 != 0,
    VAR_1, VAR_0,
                 0 );
 }
}
