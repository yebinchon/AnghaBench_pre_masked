
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const* const) ;
 int FUNC_1 (char const* const,int ) ;

int FUNC_2 (const char *const VAR_2) {
  if (VAR_2 == ((void*)0) || (VAR_1 = FUNC_1 (VAR_2, VAR_0)) < 0) {
    FUNC_0 ("Couldn't open aux binlog \"%s\" in read only mode. %m\n", VAR_2);
    return -1;
  }

  return 0;
}
