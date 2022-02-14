
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostinfo {int saw_extended_args; scalar_t__ hostname_lookup_done; int hostname; int tcp_port; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char**,char**) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;

__attribute__((used)) static char *FUNC_7(struct hostinfo *VAR_0, char *VAR_1, int VAR_2)
{
 char *VAR_3;
 int VAR_4;
 char *VAR_5 = VAR_1 + VAR_2;

 if (VAR_1 < VAR_5 && *VAR_1) {
  VAR_0->saw_extended_args = 1;
  if (FUNC_6("host=", VAR_1, 5) == 0) {
   VAR_3 = VAR_1 + 5;
   VAR_4 = FUNC_5(VAR_3) + 1;
   FUNC_2("Extended attribute \"host\": %s", VAR_3);
   if (*VAR_3) {

    char *VAR_6;
    char *VAR_7;
    FUNC_3(VAR_3, &VAR_6, &VAR_7);
    if (VAR_7)
     FUNC_4(&VAR_0->tcp_port, VAR_7);
    FUNC_0(&VAR_0->hostname, VAR_6);
    VAR_0->hostname_lookup_done = 0;
   }


   VAR_1 = VAR_3 + VAR_4;
  }
  if (VAR_1 < VAR_5 && *VAR_1)
   FUNC_1("Invalid request");
 }

 return VAR_1;
}
