
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_2__ {int (* Printf ) (int ,char*,char*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,char*) ;

void FUNC_3(const char *VAR_2) {
 char VAR_3[1024];
 const char *VAR_4;
 int VAR_5 = FUNC_1(VAR_2);

 VAR_4 = VAR_2;
 while(VAR_5 > 0)
 {
  FUNC_0(VAR_3, VAR_4, sizeof (VAR_3) );
  VAR_1.Printf( VAR_0, "%s", VAR_3 );
  VAR_4 += 1023;
  VAR_5 -= 1023;
 }
}
