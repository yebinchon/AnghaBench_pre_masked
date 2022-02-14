
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int port; void* address; } ;
struct TYPE_5__ {int port; void* address; } ;
struct TYPE_4__ {int listen; int keep; int ssl; } ;
struct options {int max_read; TYPE_3__ dst; TYPE_2__ src; TYPE_1__ extra; } ;
typedef int o ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 (struct options*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_6 (char*) ;
 int VAR_6 ;

__attribute__((used)) static struct options FUNC_7(int VAR_7, char **VAR_8)
{
 struct options VAR_9;
 int VAR_10;

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.src.port = VAR_9.dst.port = 10024;
 VAR_9.max_read = -1;

 while ((VAR_10 = FUNC_3(VAR_7, VAR_8, "p:s:R:" "lkSvh")) != -1) {
  switch (VAR_10) {
   case 'p': VAR_9.src.port = FUNC_0(VAR_2); break;
   case 's': VAR_9.src.address = FUNC_6("127.1"); break;
   case 'R': VAR_9.max_read = FUNC_0(VAR_2); break;

   case 'l': VAR_9.extra.listen = 1; break;
   case 'k': VAR_9.extra.keep = 1; break;
   case 'S': VAR_9.extra.ssl = 1; break;
   case 'v': ++VAR_6; break;
   case 'h':
    FUNC_5(VAR_5, VAR_8[0]);
    FUNC_1(VAR_1);
   default:
    FUNC_2(VAR_4, "Unknown option -%c\n", VAR_10); break;
    FUNC_1(VAR_0);
  }
 }

 if ((VAR_7-VAR_3) > 1) {
  VAR_9.dst.address = FUNC_6(VAR_8[VAR_3]);
  ++VAR_3;
 }
 if ((VAR_7-VAR_3) > 1) {
  VAR_9.dst.port = FUNC_0(VAR_2);
  ++VAR_3;
 }
 if ((VAR_7-VAR_3) > 1) {
  FUNC_5(VAR_4, VAR_8[0]);
  FUNC_1(1);
 }

 if (!VAR_9.src.address)
  VAR_9.src.address = FUNC_6("127.1");
 if (!VAR_9.dst.address)
  VAR_9.dst.address = FUNC_6("127.1");

 return VAR_9;
}
