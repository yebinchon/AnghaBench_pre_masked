
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfb_softc {int dummy; } ;
struct rfb_cuttext_msg {int length; } ;
typedef int ct_msg ;
typedef int buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,unsigned char*,int) ;

__attribute__((used)) static void
FUNC_2(struct rfb_softc *VAR_0, int VAR_1)
{
 struct rfb_cuttext_msg VAR_2;
 unsigned char VAR_3[32];
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, ((void *)&VAR_2) + 1, sizeof(VAR_2) - 1);
 VAR_2.length = FUNC_0(VAR_2.length);
 while (VAR_2.length > 0) {
  VAR_4 = FUNC_1(VAR_1, VAR_3, VAR_2.length > sizeof(VAR_3) ?
   sizeof(VAR_3) : VAR_2.length);
  VAR_2.length -= VAR_4;
 }
}
