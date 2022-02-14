
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int,unsigned char*,int) ;
 int FUNC_3 (int,char*,...) ;
 unsigned char* FUNC_4 (int) ;

__attribute__((used)) static unsigned char *FUNC_5 (const char *VAR_1, int VAR_2) {
  int VAR_3 = FUNC_1 (VAR_1, VAR_0);
  if (VAR_3 < 0) {
    FUNC_3 (1, "Couldn't open %s for reading. %m\n", VAR_1);
    return ((void*)0);
  }
  unsigned char *VAR_4 = FUNC_4 (VAR_2 > 0 ? VAR_2 : 1);
  int VAR_5 = FUNC_2 (VAR_3, VAR_4, VAR_2);
  FUNC_0 (VAR_3);
  if (VAR_5 != VAR_2) {
    FUNC_3 (1, "read %d bytes of %d from %s. %m\n", VAR_5, VAR_2, VAR_1);
    return ((void*)0);
  }
  return VAR_4;
}
