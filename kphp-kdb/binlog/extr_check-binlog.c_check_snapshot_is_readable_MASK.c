
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {long long readto_off; long long const orig_file_size; long long const buffsize; } ;
typedef TYPE_1__ stream_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,char*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,scalar_t__,size_t) ;
 int FUNC_6 (int,char*,long long,char*,long long const) ;

int FUNC_7 (char *VAR_2) {
  FUNC_1 ();
  stream_t VAR_3;
  if (FUNC_4 (&VAR_3, 0, VAR_2, 2) < 0) {
    FUNC_0 ("fail to open snapshot '%s'", VAR_2);
    return -1;
  }
  while (!FUNC_3 (&VAR_3)) {
    const long long VAR_4 = VAR_3.readto_off;
    const long long VAR_5 = VAR_3.orig_file_size - VAR_4;
    size_t VAR_6 = VAR_5 < VAR_3.buffsize ? VAR_5 : VAR_3.buffsize;
    if (FUNC_5 (&VAR_3, VAR_1 + VAR_0, VAR_6) < 0) {
      FUNC_0 ("reading shapshot '%s' from offset %lld fail.", VAR_2, VAR_4);
      FUNC_2 (&VAR_3);
      return -1;
    }
    FUNC_6 (2, "read %lld bytes from snapshot '%s', offset: %lld\n", (long long) VAR_6, VAR_2, VAR_4);
  }
  FUNC_2 (&VAR_3);
  return 0;
}
