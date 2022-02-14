
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct mconsole_reply {int err; int more; char* data; int len; } ;
struct mc_request {int originlen; scalar_t__ origin; int originating_fd; } ;
typedef int reply ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (int ,struct mconsole_reply*,int,int ,struct sockaddr*,int ) ;

int FUNC_3(struct mc_request *VAR_2, const char *VAR_3, int VAR_4,
         int VAR_5, int VAR_6)
{





 struct mconsole_reply VAR_7;
 int VAR_8, VAR_9;

 do {
  VAR_7.err = VAR_5;


  VAR_5 = 0;

  VAR_8 = FUNC_0(VAR_4, VAR_0 - 1);

  if (VAR_8 == VAR_4) VAR_7.more = VAR_6;
  else VAR_7.more = 1;

  FUNC_1(VAR_7.data, VAR_3, VAR_8);
  VAR_7.data[VAR_8] = '\0';
  VAR_4 -= VAR_8;
  VAR_3 += VAR_8;
  VAR_7.len = VAR_8 + 1;

  VAR_8 = sizeof(VAR_7) + VAR_7.len - sizeof(VAR_7.data);

  VAR_9 = FUNC_2(VAR_2->originating_fd, &VAR_7, VAR_8, 0,
      (struct sockaddr *) VAR_2->origin, VAR_2->originlen);

  if (VAR_9 < 0)
   return -VAR_1;
 } while (VAR_4 > 0);
 return 0;
}
