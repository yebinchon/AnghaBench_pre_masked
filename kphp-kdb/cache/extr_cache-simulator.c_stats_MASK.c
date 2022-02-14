
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long cache_hits_bytes; long long download_bytes; int with_known_size_files; long long with_known_size_bytes; long long max_known_size; int resource_usage_time; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 () ;
 char* FUNC_8 (long long const) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 char* FUNC_9 (long long,long long) ;
 TYPE_1__ VAR_16 ;
 int VAR_17 ;
 int FUNC_10 (int *) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static void FUNC_11 (void) {
  VAR_10 = FUNC_10 (((void*)0));
  FUNC_4 (VAR_11, VAR_3);
  FUNC_0(VAR_1);
  FUNC_0(VAR_4);
  FUNC_0(VAR_5);
  FUNC_0(VAR_0);
  const long long VAR_23 = VAR_16.cache_hits_bytes - VAR_16.download_bytes;
  FUNC_6 (VAR_17, "cache_hits_bytes-download_bytes\t%lld(%s)\n",
    VAR_23, FUNC_8 (VAR_23));
  FUNC_6 (VAR_17, "cache_hits_bytes/download_bytes\t%.6s\n",
    FUNC_9 (VAR_16.cache_hits_bytes, VAR_16.download_bytes));
  FUNC_0(VAR_2);
  FUNC_2(VAR_12);
  FUNC_2(VAR_13);
  FUNC_2(VAR_14);
  FUNC_2(VAR_22);
  long long VAR_24 = VAR_16.with_known_size_files ? VAR_16.with_known_size_bytes / VAR_16.with_known_size_files : 0;
  FUNC_6 (VAR_17, "average_known_size\t%s\n", FUNC_8 (VAR_24));
  FUNC_6 (VAR_17, "max_known_size\t%s\n", FUNC_8 (VAR_16.max_known_size));
  FUNC_1(VAR_8);
  FUNC_1(VAR_6);
  FUNC_3(VAR_7);
  VAR_16.resource_usage_time = FUNC_7 ();
  FUNC_3(VAR_15);
  FUNC_1(VAR_9);
  FUNC_1(VAR_19);
  FUNC_1(VAR_18);
  FUNC_1(VAR_21);
  FUNC_1(VAR_20);
  FUNC_5 (VAR_17);
}
