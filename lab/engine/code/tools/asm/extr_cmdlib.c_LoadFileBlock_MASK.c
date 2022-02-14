
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (void*,int ,int) ;

int FUNC_6( const char *VAR_1, void **VAR_2 )
{
 FILE *VAR_3;
 int VAR_4, VAR_5, VAR_6;
 void *VAR_7;

 VAR_3 = FUNC_1 (VAR_1);
 VAR_4 = FUNC_0 (VAR_3);
  VAR_6 = VAR_4;
  VAR_5 = VAR_6 % VAR_0;
  if ( VAR_5 > 0) {
    VAR_6 += VAR_0 - VAR_5;
  }
 VAR_7 = FUNC_4 (VAR_6+1);
  FUNC_5(VAR_7, 0, VAR_6+1);
 FUNC_2 (VAR_3, VAR_7, VAR_4);
 FUNC_3 (VAR_3);

 *VAR_2 = VAR_7;
 return VAR_4;
}
