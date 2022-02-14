
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameserver {int base; scalar_t__ choked; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 short VAR_0 ;
 short VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nameserver*) ;
 int FUNC_4 (struct nameserver*,int ) ;

__attribute__((used)) static void
FUNC_5(evutil_socket_t VAR_2, short VAR_3, void *VAR_4) {
 struct nameserver *VAR_5 = (struct nameserver *) VAR_4;
 (void)VAR_2;

 FUNC_0(VAR_5->base);
 if (VAR_3 & VAR_1) {
  VAR_5->choked = 0;
  if (!FUNC_2(VAR_5->base)) {
   FUNC_4(VAR_5, 0);
  }
 }
 if (VAR_3 & VAR_0) {
  FUNC_3(VAR_5);
 }
 FUNC_1(VAR_5->base);
}
