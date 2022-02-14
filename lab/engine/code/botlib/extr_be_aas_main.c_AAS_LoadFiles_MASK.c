
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int aasfile ;
struct TYPE_4__ {int filename; int mapname; } ;
struct TYPE_3__ {int (* Print ) (int ,char*,char*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (char*,int,char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char const*,int) ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_5 (int ,char*,char*) ;

int FUNC_6(const char *VAR_5)
{
 int VAR_6;
 char VAR_7[VAR_1];

 FUNC_4(VAR_3.mapname, VAR_5, sizeof(VAR_3.mapname));



 FUNC_2();

 FUNC_1();


 FUNC_3(VAR_7, sizeof(VAR_7), "maps/%s.aas", VAR_5);
 VAR_6 = FUNC_0(VAR_7);
 if (VAR_6 != VAR_0)
  return VAR_6;

 VAR_4.Print(VAR_2, "loaded %s\n", VAR_7);
 FUNC_4(VAR_3.filename, VAR_7, sizeof(VAR_3.filename));
 return VAR_0;
}
