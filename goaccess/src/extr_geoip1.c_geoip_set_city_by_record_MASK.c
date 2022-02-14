
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* city; char* region; } ;
typedef TYPE_1__ GeoIPRecord ;
typedef int GTypeIP ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*,char const*,char*) ;
 TYPE_1__* FUNC_2 (char const*,int ) ;

__attribute__((used)) static void
FUNC_3 (const char *VAR_0, char *VAR_1, GTypeIP VAR_2)
{
  GeoIPRecord *VAR_3 = ((void*)0);
  const char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = VAR_0;


  if ((VAR_3 = FUNC_2 (VAR_6, VAR_2))) {
    VAR_4 = VAR_3->city;
    VAR_5 = VAR_3->region;
  }

  FUNC_1 (VAR_4, VAR_5, VAR_1);
  if (VAR_3 != ((void*)0)) {
    FUNC_0 (VAR_3);
  }
}
