
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct forth_output {int dummy; } ;
typedef int s ;


 int VAR_0 ;
 long long FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int) ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 long long VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*,long long) ;
 int FUNC_6 (char*,int,char*,long long) ;
 int FUNC_7 (char*) ;
 int VAR_8 ;

void FUNC_8 (char *VAR_9, long long VAR_10, long long VAR_11, long long VAR_12, long long VAR_13, int VAR_14) {
  char *VAR_15[4];
  int VAR_16 = 0;
  if (VAR_7) {
    return;
  }
  FUNC_4 (sizeof (struct forth_output) == VAR_1);
  VAR_7 = 1;

  char VAR_17[32];


  if (VAR_11 > 0) {
    FUNC_4 (FUNC_6 (VAR_17, sizeof (VAR_17), "%lldk", VAR_11 >> 10) < sizeof (VAR_17));
    FUNC_4(!FUNC_0(VAR_15[VAR_16++] = "MAGICK_LIMIT_MEMORY",VAR_17,1));
  }

  if (VAR_12 > 0) {
    FUNC_4 (FUNC_6 (VAR_17, sizeof (VAR_17), "%lldk", VAR_12 >> 10) < sizeof (VAR_17));
    FUNC_4(!FUNC_0(VAR_15[VAR_16++] = "MAGICK_LIMIT_MAP",VAR_17,1));
  }

  if (VAR_13 >= 0) {
    FUNC_4 (FUNC_6 (VAR_17, sizeof (VAR_17), "%lldk", VAR_13 >> 10) < sizeof (VAR_17));
    FUNC_4(!FUNC_0(VAR_15[VAR_16++] = "MAGICK_LIMIT_DISK",VAR_17,1));
  }

  if (VAR_10 > 0) {
    VAR_6 = VAR_10;
    FUNC_4 (FUNC_6 (VAR_17, sizeof (VAR_17), "%lld", VAR_10) < sizeof (VAR_17));
    FUNC_4(!FUNC_0(VAR_15[VAR_16++] = "MAGICK_LIMIT_PIXELS",VAR_17,1));
  }



  FUNC_1 (VAR_9);

  while (--VAR_16 >= 0) {
    FUNC_7 (VAR_15[VAR_16]);
  }

  FUNC_3 (VAR_5, VAR_14);

  if (VAR_8 >= 3) {
    long long VAR_18 = FUNC_0 (VAR_3);
    FUNC_5 ("GetMagickResourceLimit (MemoryResource): %lld\n", VAR_18);
    VAR_18 = FUNC_0 (VAR_0);
    FUNC_5 ("GetMagickResourceLimit (DiskResource): %lld\n", VAR_18);
    VAR_18 = FUNC_0 (VAR_2);
    FUNC_5 ("GetMagickResourceLimit (MapResource): %lld\n", VAR_18);
    VAR_18 = FUNC_0 (VAR_4);
    FUNC_5 ("GetMagickResourceLimit (PixelsResource): %lld\n", VAR_18);
    VAR_18 = FUNC_0 (VAR_5);
    FUNC_5 ("GetMagickResourceLimit (ThreadsResource): %lld\n", VAR_18);
  }

}
