
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct evbuffer*,int ,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(evutil_socket_t VAR_4, short VAR_5, void *VAR_6)
{
 struct evbuffer *VAR_7 = VAR_6;
 int VAR_8, VAR_9 = 0;
 do {
  VAR_9 = FUNC_2(VAR_7, VAR_4, 1024);
  if (VAR_9 > 0) {
   VAR_2 += VAR_9;
   FUNC_1(("Read %d/%d bytes", VAR_9, VAR_2));
  }
 } while (VAR_9 > 0);
 if (VAR_9 < 0) {
  VAR_8 = FUNC_4(VAR_4);
  if (! FUNC_0(VAR_8)) {
   FUNC_5("read");
   FUNC_3(VAR_1,((void*)0));
  }
 }
 if (VAR_0 &&
     VAR_2 >= VAR_3) {
  FUNC_3(VAR_1,((void*)0));
 }
}
