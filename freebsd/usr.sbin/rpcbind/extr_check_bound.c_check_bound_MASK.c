
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct netbuf {struct netbuf* buf; int len; } ;
struct fdlist {scalar_t__ check_binding; int nconf; } ;
typedef scalar_t__ bool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,struct sockaddr*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct netbuf*) ;
 struct netbuf* FUNC_4 (int ,char*) ;

__attribute__((used)) static bool_t
FUNC_5(struct fdlist *VAR_2, char *VAR_3)
{
 int VAR_4;
 struct netbuf *VAR_5;
 int VAR_6;

 if (VAR_2->check_binding == VAR_0)
  return (VAR_1);

 VAR_5 = FUNC_4(VAR_2->nconf, VAR_3);
 if (!VAR_5)
  return (VAR_1);

 VAR_4 = FUNC_0(VAR_2->nconf);
 if (VAR_4 < 0) {
  FUNC_3(VAR_5->buf);
  FUNC_3(VAR_5);
  return (VAR_1);
 }

 VAR_6 = FUNC_1(VAR_4, (struct sockaddr *)VAR_5->buf, VAR_5->len);

 FUNC_2(VAR_4);
 FUNC_3(VAR_5->buf);
 FUNC_3(VAR_5);

 return (VAR_6 == 0 ? VAR_0 : VAR_1);
}
