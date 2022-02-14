
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(void)
{
 char *VAR_2 = (char *)"file_write";
 char *VAR_3 = (char *)VAR_1;

 if (VAR_3 != ((void*)0))
  VAR_3 = FUNC_4(VAR_3);
 if (VAR_3 != ((void*)0))
  VAR_2 = FUNC_0(VAR_3);

 (void) FUNC_3("Usage: %s [-v] -o {create,overwrite,append} -f file_name"
     " [-b block_size]\n"
     "\t[-s offset] [-c write_count] [-d data]\n"
     "\twhere [data] equal to zero causes chars "
     "0->%d to be repeated throughout\n", VAR_2, VAR_0);

 if (VAR_3) {
  FUNC_2(VAR_3);
 }

 FUNC_1(1);
}
