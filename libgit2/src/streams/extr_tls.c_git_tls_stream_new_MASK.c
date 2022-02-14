
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* init ) (int **,char const*,char const*) ;int member_0; } ;
typedef TYPE_1__ git_stream_registration ;
typedef int git_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int **,char const*,char const*) ;
 int FUNC_3 (int **,char const*,char const*) ;
 int FUNC_4 (int **,char const*,char const*) ;
 int FUNC_5 (TYPE_1__*,int ) ;

int FUNC_6(git_stream **VAR_3, const char *VAR_4, const char *VAR_5)
{
 int (*VAR_6)(git_stream **, const char *, const char *) = ((void*)0);
 git_stream_registration VAR_7 = {0};
 int VAR_8;

 FUNC_0(VAR_3 && VAR_4 && VAR_5);

 if ((VAR_8 = FUNC_5(&VAR_7, VAR_2)) == 0) {
  VAR_6 = VAR_7.init;
 } else if (VAR_8 == VAR_0) {







 } else {
  return VAR_8;
 }

 if (!VAR_6) {
  FUNC_1(VAR_1, "there is no TLS stream available");
  return -1;
 }

 return VAR_6(VAR_3, VAR_4, VAR_5);
}
