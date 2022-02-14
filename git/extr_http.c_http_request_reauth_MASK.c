
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct http_get_options {TYPE_2__* effective_url; TYPE_1__* base_url; } ;
struct TYPE_4__ {char* buf; } ;
struct TYPE_3__ {int buf; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ,int ) ;
 int VAR_3 ;
 int FUNC_7 (char const*,void*,int,struct http_get_options*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,char const*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_11(const char *VAR_4,
          void *VAR_5, int VAR_6,
          struct http_get_options *VAR_7)
{
 int VAR_8 = FUNC_7(VAR_4, VAR_5, VAR_6, VAR_7);

 if (VAR_8 != VAR_0 && VAR_8 != VAR_1)
  return VAR_8;

 if (VAR_7 && VAR_7->effective_url && VAR_7->base_url) {
  if (FUNC_10(VAR_7->base_url,
          VAR_4, VAR_7->effective_url)) {
   FUNC_2(&VAR_3, VAR_7->base_url->buf);
   VAR_4 = VAR_7->effective_url->buf;
  }
 }

 if (VAR_8 != VAR_1)
  return VAR_8;





 switch (VAR_6) {
 case 128:
  FUNC_9(VAR_5);
  break;
 case 129:
  if (FUNC_4(VAR_5)) {
   FUNC_3("unable to flush a file");
   return VAR_2;
  }
  FUNC_8(VAR_5);
  if (FUNC_6(FUNC_5(VAR_5), 0) < 0) {
   FUNC_3("unable to truncate a file");
   return VAR_2;
  }
  break;
 default:
  FUNC_0("Unknown http_request target");
 }

 FUNC_1(&VAR_3);

 return FUNC_7(VAR_4, VAR_5, VAR_6, VAR_7);
}
