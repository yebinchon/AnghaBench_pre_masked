
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct led {char* sysfspath; int * controlfd; } ;
typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (struct led*,int) ;
 int FUNC_6 (char*,char*,char*,char*) ;
 int FUNC_7 (char*,struct stat*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char*,char*) ;

int FUNC_10(struct led **VAR_2, char *VAR_3)
{
 struct led *VAR_4;
 struct stat VAR_5;
 int VAR_6;
 char *VAR_7;
 FILE *VAR_8;

 VAR_7 = FUNC_0(sizeof(char), FUNC_8(VAR_3) + FUNC_8(VAR_0) + 12);
 if ( ! VAR_7 )
  goto return_error;

 FUNC_6(VAR_7, "%s%s/brightness", VAR_0, VAR_3);

 VAR_6 = FUNC_7(VAR_7, &VAR_5);
 if ( VAR_6 )
  goto cleanup_fname;

 VAR_8 = FUNC_3( VAR_7, "w" );
 if ( !VAR_8 )
  goto cleanup_fname;

 if ( FUNC_2(VAR_8) )
  goto cleanup_fp;


 VAR_4 = FUNC_0(sizeof(struct led),1);
 if ( !VAR_4 )
  goto cleanup_fp;

 VAR_4->sysfspath = VAR_7;
 VAR_4->controlfd = VAR_8;

 *VAR_2 = VAR_4;

 if ( FUNC_5(VAR_4, 255) )
  goto cleanup_fp;

 if ( FUNC_5(VAR_4, 0) )
  goto cleanup_fp;

 return 0;

cleanup_fp:
 FUNC_1(VAR_8);
cleanup_fname:
 FUNC_4(VAR_7);
return_error:
 FUNC_9(VAR_1, "can't open LED %s\n", VAR_3);
 *VAR_2 = ((void*)0);
 return -1;
}
